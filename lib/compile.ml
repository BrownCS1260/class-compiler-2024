open S_exp
open Asm
open Util
open Ast_lam

exception BadExpression of expr

let num_shift = 2

let num_mask = 0b11

let num_tag = 0b00

let bool_shift = 7

let bool_mask = 0b1111111

let bool_tag = 0b0011111

let heap_mask = 0b111

let pair_tag = 0b010

let fn_tag = 0b110

let rec fv (bound : string list) (exp : expr) =
  match exp with
  | Var s when not (List.mem s bound) ->
      [s]
  | Let (v, e, body) ->
      fv bound e @ fv (v :: bound) body
  | If (te, the, ee) ->
      fv bound te @ fv bound the @ fv bound ee
  | Do es ->
      List.concat_map (fv bound) es
  | Call (exp, args) ->
      fv bound exp @ List.concat_map (fv bound) args
  | Prim1 (_, e) ->
      fv bound e
  | Prim2 (_, e1, e2) ->
      fv bound e1 @ fv bound e2
  | _ ->
      []

let operand_of_bool (b : bool) : operand =
  Imm (((if b then 1 else 0) lsl bool_shift) lor bool_tag)

let operand_of_num (x : int) : operand =
  Imm ((x lsl num_shift) lor num_tag)

let zf_to_bool : directive list =
  [ Mov (Reg Rax, Imm 0)
  ; Setz (Reg Rax)
  ; Shl (Reg Rax, Imm bool_shift)
  ; Or (Reg Rax, Imm bool_tag) ]

let lf_to_bool : directive list =
  [ Mov (Reg Rax, Imm 0)
  ; Setl (Reg Rax)
  ; Shl (Reg Rax, Imm bool_shift)
  ; Or (Reg Rax, Imm bool_tag) ]

let stack_address (stack_index : int) =
  MemOffset (Reg Rsp, Imm stack_index)

(* overwrites r8 *)
let ensure_num (op : operand) : directive list =
  [ Mov (Reg R8, op)
  ; And (Reg R8, Imm num_mask)
  ; Cmp (Reg R8, Imm num_tag)
  ; Jnz "error" ]

(* overwrites r8 *)
let ensure_pair (op : operand) : directive list =
  [ Mov (Reg R8, op)
  ; And (Reg R8, Imm heap_mask)
  ; Cmp (Reg R8, Imm pair_tag)
  ; Jnz "error" ]

(* overwrites r8 *)
let ensure_fn (op : operand) : directive list =
  [ Mov (Reg R8, op)
  ; And (Reg R8, Imm heap_mask)
  ; Cmp (Reg R8, Imm fn_tag)
  ; Jnz "error" ]

let align_stack_index (stack_index : int) : int =
  if stack_index mod 16 = 0 then stack_index - 8 else stack_index

(* stack_index : represents the next available location on stack,
   i.e. rsp + stack_index is unused *)
let rec compile_exp (defns : defn list) (tab : int symtab)
    (stack_index : int) (program : expr) (is_tail : bool) :
    directive list =
  match program with
  | Num n ->
      [Mov (Reg Rax, operand_of_num n)]
  | Bool b ->
      [Mov (Reg Rax, operand_of_bool b)]
  | Var var when Symtab.mem var tab ->
      [Mov (Reg Rax, stack_address (Symtab.find var tab))]
  | Var var when is_defn defns var ->
      [ LeaLabel (Reg Rax, defn_label var)
      ; Or (Reg Rax, Imm fn_tag)
      ; Mov (MemOffset (Reg Rdi, Imm 0), Reg Rax)
      ; Mov (Reg Rax, Reg Rdi)
      ; Or (Reg Rax, Imm fn_tag)
      ; Add (Reg Rdi, Imm 8) ]
  | Var _ ->
      raise (BadExpression program)
  | Closure f ->
      let defn = get_defn defns f in
      let fvs =
        fv (List.map (fun d -> d.name) defns @ defn.args) defn.body
      in
      let fv_movs =
        List.mapi
          (fun i var ->
            [ Mov (Reg Rax, stack_address (Symtab.find var tab))
            ; Mov (MemOffset (Reg Rdi, Imm (8 * (i + 1))), Reg Rax) ]
            )
          fvs
      in
      if List.exists (fun v -> not (Symtab.mem v tab)) fvs then
        raise (BadExpression program)
      else
        [ LeaLabel (Reg Rax, defn_label f)
        ; Mov (MemOffset (Reg Rdi, Imm 0), Reg Rax) ]
        @ List.concat fv_movs
        @ [ Mov (Reg Rax, Reg Rdi)
          ; Or (Reg Rax, Imm fn_tag)
          ; Add (Reg Rdi, Imm (8 * (List.length fvs + 1))) ]
  | Prim0 ReadNum ->
      [ Mov (stack_address stack_index, Reg Rdi)
      ; Add (Reg Rsp, Imm (align_stack_index stack_index))
      ; Call "read_num"
      ; Sub (Reg Rsp, Imm (align_stack_index stack_index))
      ; Mov (Reg Rdi, stack_address stack_index) ]
  | Prim0 Newline ->
      [ Mov (stack_address stack_index, Reg Rdi)
      ; Add (Reg Rsp, Imm (align_stack_index stack_index))
      ; Call "print_newline"
      ; Sub (Reg Rsp, Imm (align_stack_index stack_index))
      ; Mov (Reg Rdi, stack_address stack_index)
      ; Mov (Reg Rax, operand_of_bool true) ]
  | Prim1 (Print, e) ->
      compile_exp defns tab stack_index e false
      @ [ Mov (stack_address stack_index, Reg Rdi)
        ; Mov (Reg Rdi, Reg Rax)
        ; Add (Reg Rsp, Imm (align_stack_index stack_index))
        ; Call "print_value"
        ; Sub (Reg Rsp, Imm (align_stack_index stack_index))
        ; Mov (Reg Rdi, stack_address stack_index)
        ; Mov (Reg Rax, operand_of_bool true) ]
  | Prim1 (Add1, arg) ->
      compile_exp defns tab stack_index arg false
      @ ensure_num (Reg Rax)
      @ [Add (Reg Rax, operand_of_num 1)]
  | Prim1 (Sub1, arg) ->
      compile_exp defns tab stack_index arg false
      @ ensure_num (Reg Rax)
      @ [Sub (Reg Rax, operand_of_num 1)]
  | Prim1 (Not, arg) ->
      compile_exp defns tab stack_index arg false
      @ [Cmp (Reg Rax, operand_of_bool false)]
      @ zf_to_bool
  | Prim1 (ZeroP, arg) ->
      compile_exp defns tab stack_index arg false
      @ [Cmp (Reg Rax, operand_of_num 0)]
      @ zf_to_bool
  | Prim1 (NumP, arg) ->
      compile_exp defns tab stack_index arg false
      @ [And (Reg Rax, Imm num_mask); Cmp (Reg Rax, Imm num_tag)]
      @ zf_to_bool
  | Prim1 (Left, e) ->
      compile_exp defns tab stack_index e false
      @ ensure_pair (Reg Rax)
      @ [Mov (Reg Rax, MemOffset (Reg Rax, Imm (-pair_tag)))]
  | Prim1 (Right, e) ->
      compile_exp defns tab stack_index e false
      @ ensure_pair (Reg Rax)
      @ [Mov (Reg Rax, MemOffset (Reg Rax, Imm (-pair_tag + 8)))]
  | Prim2 (Pair, e1, e2) ->
      compile_exp defns tab stack_index e1 false
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns tab (stack_index - 8) e2 false
      @ [ Mov (Reg R8, stack_address stack_index)
        ; Mov (MemOffset (Reg Rdi, Imm 0), Reg R8)
        ; Mov (MemOffset (Reg Rdi, Imm 8), Reg Rax)
        ; Mov (Reg Rax, Reg Rdi)
        ; Or (Reg Rax, Imm pair_tag)
        ; Add (Reg Rdi, Imm 16) ]
  | Prim2 (Plus, e1, e2) ->
      compile_exp defns tab stack_index e1 false
      @ ensure_num (Reg Rax)
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns tab (stack_index - 8) e2 false
      @ ensure_num (Reg Rax)
      @ [Add (Reg Rax, stack_address stack_index)]
  | Prim2 (Minus, e1, e2) ->
      compile_exp defns tab stack_index e1 false
      @ ensure_num (Reg Rax)
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns tab (stack_index - 8) e2 false
      @ ensure_num (Reg Rax)
      @ [ Mov (Reg R8, Reg Rax)
        ; Mov (Reg Rax, stack_address stack_index) ]
      @ [Sub (Reg Rax, Reg R8)]
  | Prim2 (Eq, e1, e2) ->
      compile_exp defns tab stack_index e1 false
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns tab (stack_index - 8) e2 false
      @ [ Mov (Reg R8, stack_address stack_index)
        ; Cmp (Reg Rax, Reg R8) ]
      @ zf_to_bool
  | Prim2 (Lt, e1, e2) ->
      compile_exp defns tab stack_index e1 false
      @ ensure_num (Reg Rax)
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns tab (stack_index - 8) e2 false
      @ ensure_num (Reg Rax)
      @ [ Mov (Reg R8, stack_address stack_index)
        ; Cmp (Reg R8, Reg Rax) ]
      @ lf_to_bool
  | If (test_exp, then_exp, else_exp) ->
      let else_label = Util.gensym "else" in
      let continue_label = Util.gensym "continue" in
      compile_exp defns tab stack_index test_exp false
      @ [Cmp (Reg Rax, operand_of_bool false); Jz else_label]
      @ compile_exp defns tab stack_index then_exp is_tail
      @ [Jmp continue_label] @ [Label else_label]
      @ compile_exp defns tab stack_index else_exp is_tail
      @ [Label continue_label]
  | Let (s, e, body) ->
      compile_exp defns tab stack_index e false
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns
          (Symtab.add s stack_index tab)
          (stack_index - 8) body is_tail
  | Do exps ->
      List.mapi
        (fun i exp ->
          compile_exp defns tab stack_index exp
            (if i = List.length exps - 1 then is_tail else false) )
        exps
      |> List.concat
  | Call (f, args) when is_tail ->
      let compiled_args =
        args
        |> List.mapi (fun i arg ->
               compile_exp defns tab (stack_index - (8 * i)) arg false
               @ [Mov (stack_address (stack_index - (8 * i)), Reg Rax)] )
        |> List.concat
      in
      let moved_args =
        args
        |> List.mapi (fun i _ ->
               [ Mov (Reg R8, stack_address (stack_index - (8 * i)))
               ; Mov (stack_address ((i + 1) * -8), Reg R8) ] )
        |> List.concat
      in
      compiled_args
      @ compile_exp defns tab
          (stack_index - (8 * (List.length args + 2)))
          f false
      @ ensure_fn (Reg Rax)
      @ [ Mov (stack_address (-8 * (List.length args + 1)), Reg Rax)
        ; Sub (Reg Rax, Imm fn_tag)
        ; Mov (Reg Rax, MemOffset (Reg Rax, Imm 0)) ]
      @ moved_args @ [ComputedJmp (Reg Rax)]
  | Call (f, args) ->
      let stack_base = align_stack_index (stack_index + 8) in
      let compiled_args =
        args
        |> List.mapi (fun i arg ->
               compile_exp defns tab
                 (stack_base - (8 * (i + 2)))
                 arg false
               @ [ Mov
                     ( stack_address (stack_base - (8 * (i + 2)))
                     , Reg Rax ) ] )
        |> List.concat
      in
      compiled_args
      @ compile_exp defns tab
          (stack_base - (8 * (List.length args + 2)))
          f false
      @ ensure_fn (Reg Rax)
      @ [ Mov
            ( stack_address (stack_base - (8 * (List.length args + 2)))
            , Reg Rax )
        ; Sub (Reg Rax, Imm fn_tag)
        ; Mov (Reg Rax, MemOffset (Reg Rax, Imm 0)) ]
      @ [Sub (Reg Rax, Imm fn_tag)]
      @ [ Add (Reg Rsp, Imm stack_base)
        ; ComputedCall (Reg Rax)
        ; Sub (Reg Rsp, Imm stack_base) ]

let compile_defn (defns : defn list) {name; args; body} =
  let fvs = fv (List.map (fun d -> d.name) defns @ args) body in
  let ftab =
    args @ fvs
    |> List.mapi (fun i arg -> (arg, -8 * (i + 1)))
    |> Symtab.of_list
  in
  let fvs_to_stack =
    [ Mov (Reg Rax, stack_address (-8 * (List.length args + 1)))
    ; Sub (Reg Rax, Imm fn_tag)
    ; Add (Reg Rax, Imm 8) ]
    @ ( List.mapi
          (fun i _ ->
            [ Mov (Reg R8, MemOffset (Reg Rax, Imm (8 * i)))
            ; Mov
                ( stack_address (-8 * (List.length args + 1 + i))
                , Reg R8 ) ] )
          fvs
      |> List.concat )
  in
  [Align 8; Label (defn_label name)]
  @ fvs_to_stack
  @ compile_exp defns ftab (-8 * (Symtab.cardinal ftab + 1)) body true
  @ [Ret]

let compile (prog : program) : string =
  [ Global "entry"
  ; Extern "error"
  ; Extern "read_num"
  ; Extern "print_newline"
  ; Extern "print_value"
  ; Label "entry" ]
  @ compile_exp prog.defns Symtab.empty (-8) prog.body true
  @ [Ret]
  @ List.concat_map (compile_defn prog.defns) prog.defns
  |> List.map string_of_directive
  |> String.concat "\n"

let compile_to_file (program : string) : unit =
  let file = open_out "program.s" in
  parse_many program |> program_of_s_exps |> compile
  |> output_string file ;
  close_out file

let compile_and_run (program : string) : unit =
  compile_to_file program ;
  ignore (Unix.system "nasm program.s -f elf64 -o program.o") ;
  ignore
    (Unix.system
       "gcc -g program.o runtime.o -o program -z noexecstack -no-pie" ) ;
  ignore (Unix.system "./program")

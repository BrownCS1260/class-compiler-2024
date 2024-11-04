open S_exp
open Ast
open Asm
open Util

exception BadExpression of expr

let num_shift = 2

let num_mask = 0b11

let num_tag = 0b00

let bool_shift = 7

let bool_mask = 0b1111111

let bool_tag = 0b0011111

let heap_mask = 0b111

let pair_tag = 0b010

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

let align_stack_index (stack_index : int) : int =
  if stack_index mod 16 = 0 then stack_index - 8 else stack_index

(* stack_index : represents the next available location on stack,
   i.e. rsp + stack_index is unused *)
let rec compile_exp (defns : defn list) (tab : int symtab)
    (stack_index : int) (program : expr) : directive list =
  match program with
  | Num n ->
      [Mov (Reg Rax, operand_of_num n)]
  | Bool b ->
      [Mov (Reg Rax, operand_of_bool b)]
  | Var s when Symtab.mem s tab ->
      [Mov (Reg Rax, stack_address (Symtab.find s tab))]
  | Var _ ->
      raise (BadExpression program)
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
      compile_exp defns tab stack_index e
      @ [ Mov (stack_address stack_index, Reg Rdi)
        ; Mov (Reg Rdi, Reg Rax)
        ; Add (Reg Rsp, Imm (align_stack_index stack_index))
        ; Call "print_value"
        ; Sub (Reg Rsp, Imm (align_stack_index stack_index))
        ; Mov (Reg Rdi, stack_address stack_index)
        ; Mov (Reg Rax, operand_of_bool true) ]
  | Prim1 (Add1, arg) ->
      compile_exp defns tab stack_index arg
      @ ensure_num (Reg Rax)
      @ [Add (Reg Rax, operand_of_num 1)]
  | Prim1 (Sub1, arg) ->
      compile_exp defns tab stack_index arg
      @ ensure_num (Reg Rax)
      @ [Sub (Reg Rax, operand_of_num 1)]
  | Prim1 (Not, arg) ->
      compile_exp defns tab stack_index arg
      @ [Cmp (Reg Rax, operand_of_bool false)]
      @ zf_to_bool
  | Prim1 (ZeroP, arg) ->
      compile_exp defns tab stack_index arg
      @ [Cmp (Reg Rax, operand_of_num 0)]
      @ zf_to_bool
  | Prim1 (NumP, arg) ->
      compile_exp defns tab stack_index arg
      @ [And (Reg Rax, Imm num_mask); Cmp (Reg Rax, Imm num_tag)]
      @ zf_to_bool
  | Prim1 (Left, e) ->
      compile_exp defns tab stack_index e
      @ ensure_pair (Reg Rax)
      @ [Mov (Reg Rax, MemOffset (Reg Rax, Imm (-pair_tag)))]
  | Prim1 (Right, e) ->
      compile_exp defns tab stack_index e
      @ ensure_pair (Reg Rax)
      @ [Mov (Reg Rax, MemOffset (Reg Rax, Imm (-pair_tag + 8)))]
  | Prim2 (Pair, e1, e2) ->
      compile_exp defns tab stack_index e1
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns tab (stack_index - 8) e2
      @ [ Mov (Reg R8, stack_address stack_index)
        ; Mov (MemOffset (Reg Rdi, Imm 0), Reg R8)
        ; Mov (MemOffset (Reg Rdi, Imm 8), Reg Rax)
        ; Mov (Reg Rax, Reg Rdi)
        ; Or (Reg Rax, Imm pair_tag)
        ; Add (Reg Rdi, Imm 16) ]
  | Prim2 (Plus, e1, e2) ->
      compile_exp defns tab stack_index e1
      @ ensure_num (Reg Rax)
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns tab (stack_index - 8) e2
      @ ensure_num (Reg Rax)
      @ [Add (Reg Rax, stack_address stack_index)]
  | Prim2 (Minus, e1, e2) ->
      compile_exp defns tab stack_index e1
      @ ensure_num (Reg Rax)
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns tab (stack_index - 8) e2
      @ ensure_num (Reg Rax)
      @ [ Mov (Reg R8, Reg Rax)
        ; Mov (Reg Rax, stack_address stack_index) ]
      @ [Sub (Reg Rax, Reg R8)]
  | Prim2 (Eq, e1, e2) ->
      compile_exp defns tab stack_index e1
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns tab (stack_index - 8) e2
      @ [ Mov (Reg R8, stack_address stack_index)
        ; Cmp (Reg Rax, Reg R8) ]
      @ zf_to_bool
  | Prim2 (Lt, e1, e2) ->
      compile_exp defns tab stack_index e1
      @ ensure_num (Reg Rax)
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns tab (stack_index - 8) e2
      @ ensure_num (Reg Rax)
      @ [ Mov (Reg R8, stack_address stack_index)
        ; Cmp (Reg R8, Reg Rax) ]
      @ lf_to_bool
  | If (test_exp, then_exp, else_exp) ->
      let else_label = Util.gensym "else" in
      let continue_label = Util.gensym "continue" in
      compile_exp defns tab stack_index test_exp
      @ [Cmp (Reg Rax, operand_of_bool false); Jz else_label]
      @ compile_exp defns tab stack_index then_exp
      @ [Jmp continue_label] @ [Label else_label]
      @ compile_exp defns tab stack_index else_exp
      @ [Label continue_label]
  | Let (s, e, body) ->
      compile_exp defns tab stack_index e
      @ [Mov (stack_address stack_index, Reg Rax)]
      @ compile_exp defns
          (Symtab.add s stack_index tab)
          (stack_index - 8) body
  | Do exps ->
      List.map (fun exp -> compile_exp defns tab stack_index exp) exps
      |> List.concat
  | Call (f, args) when is_defn defns f ->
      let defn = get_defn defns f in
      if List.length args <> List.length defn.args then
        raise (BadExpression program)
      else
        let stack_base = align_stack_index (stack_index + 8) in
        let compiled_args =
          args
          |> List.mapi (fun i arg ->
                 compile_exp defns tab
                   (stack_base - (8 * (i + 2)))
                   arg
                 @ [ Mov
                       ( stack_address (stack_base - (8 * (i + 2)))
                       , Reg Rax ) ] )
          |> List.concat
        in
        compiled_args
        @ [ Add (Reg Rsp, Imm stack_base)
          ; Call (defn_label f)
          ; Sub (Reg Rsp, Imm stack_base) ]
  | Call _ ->
      raise (BadExpression program)

let compile_defn (defns : defn list) {name; args; body} =
  let ftab =
    args
    |> List.mapi (fun i arg -> (arg, -8 * (i + 1)))
    |> Symtab.of_list
  in
  [Label (defn_label name)]
  @ compile_exp defns ftab (-8 * (List.length args + 1)) body
  @ [Ret]

let compile (prog : program) : string =
  [ Global "entry"
  ; Extern "error"
  ; Extern "read_num"
  ; Extern "print_newline"
  ; Extern "print_value"
  ; Label "entry" ]
  @ compile_exp prog.defns Symtab.empty (-8) prog.body
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
       "gcc -g program.o runtime.o -o program -z noexecstack" ) ;
  ignore (Unix.system "./program")

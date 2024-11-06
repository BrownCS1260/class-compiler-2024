open S_exp
open Util
include Ast

type expr_lam =
  | Prim0 of prim0
  | Prim1 of prim1 * expr_lam
  | Prim2 of prim2 * expr_lam * expr_lam
  | Let of string * expr_lam * expr_lam
  | If of expr_lam * expr_lam * expr_lam
  | Do of expr_lam list
  | Num of int
  | Var of string
  | Call of expr_lam * expr_lam list
  | True
  | False
  | Lambda of string list * expr_lam

let is_sym e = match e with Sym _ -> true | _ -> false

let as_sym e = match e with Sym s -> s | _ -> raise Not_found

let rec expr_lam_of_s_exp : s_exp -> expr_lam = function
  | Num x ->
      Num x
  | Sym "true" ->
      True
  | Sym "false" ->
      False
  | Sym var ->
      Var var
  | Lst [Sym "let"; Lst [Lst [Sym var; exp]]; body] ->
      Let (var, expr_lam_of_s_exp exp, expr_lam_of_s_exp body)
  | Lst (Sym "do" :: exps) when List.length exps > 0 ->
      Do (List.map expr_lam_of_s_exp exps)
  | Lst [Sym "if"; test_s; then_s; else_s] ->
      If
        ( expr_lam_of_s_exp test_s
        , expr_lam_of_s_exp then_s
        , expr_lam_of_s_exp else_s )
  | Lst [Sym "lambda"; Lst args; body] when List.for_all is_sym args
    ->
      Lambda (List.map as_sym args, expr_lam_of_s_exp body)
  | Lst [Sym prim] when Option.is_some (prim0_of_string prim) ->
      Prim0 (Option.get (prim0_of_string prim))
  | Lst [Sym prim; arg] when Option.is_some (prim1_of_string prim) ->
      Prim1 (Option.get (prim1_of_string prim), expr_lam_of_s_exp arg)
  | Lst [Sym prim; arg1; arg2]
    when Option.is_some (prim2_of_string prim) ->
      Prim2
        ( Option.get (prim2_of_string prim)
        , expr_lam_of_s_exp arg1
        , expr_lam_of_s_exp arg2 )
  | Lst (f :: args) ->
      Call (expr_lam_of_s_exp f, List.map expr_lam_of_s_exp args)
  | e ->
      raise (BadSExpression e)

let rec expr_of_expr_lam (defns : defn list ref) : expr_lam -> expr =
  function
  | Num x ->
      Num x
  | Var s ->
      Var s
  | True ->
      True
  | False ->
      False
  | If (test_exp, then_exp, else_exp) ->
      If
        ( expr_of_expr_lam defns test_exp
        , expr_of_expr_lam defns then_exp
        , expr_of_expr_lam defns else_exp )
  | Let (var, exp, body) ->
      Let
        (var, expr_of_expr_lam defns exp, expr_of_expr_lam defns body)
  | Prim0 p ->
      Prim0 p
  | Prim1 (p, e) ->
      Prim1 (p, expr_of_expr_lam defns e)
  | Prim2 (p, e1, e2) ->
      Prim2 (p, expr_of_expr_lam defns e1, expr_of_expr_lam defns e2)
  | Do exps ->
      Do (List.map (expr_of_expr_lam defns) exps)
  | Call (exp, args) ->
      Call
        ( expr_of_expr_lam defns exp
        , List.map (expr_of_expr_lam defns) args )
  | Lambda (args, body) ->
      let name = gensym "_lambda" in
      let body = expr_of_expr_lam defns body in
      defns := {name; args; body} :: !defns ;
      Var name

let program_of_s_exps (exps : s_exp list) : program =
  let defns = ref [] in
  let rec get_args args =
    match args with
    | Sym v :: args ->
        v :: get_args args
    | e :: _ ->
        raise (BadSExpression e)
    | [] ->
        []
  in
  let get_defn = function
    | Lst [Sym "define"; Lst (Sym name :: args); body] ->
        let args = get_args args in
        { name
        ; args
        ; body= body |> expr_lam_of_s_exp |> expr_of_expr_lam defns }
    | e ->
        raise (BadSExpression e)
  in
  let rec go exps =
    match exps with
    | [e] ->
        let body = e |> expr_lam_of_s_exp |> expr_of_expr_lam defns in
        {defns= List.rev !defns; body}
    | d :: exps ->
        let defn = get_defn d in
        defns := defn :: !defns ;
        go exps
    | _ ->
        raise (BadSExpression (Sym "empty"))
  in
  go exps

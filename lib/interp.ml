open S_exp
open Ast_lam
open Util

let output_channel = stdout

exception BadExpression of expr

type value =
  | Number of int
  | Boolean of bool
  | Pair of value * value
  | Function of string * value symtab

let rec string_of_value (v : value) : string =
  match v with
  | Number n ->
      string_of_int n
  | Boolean b ->
      string_of_bool b
  | Pair (e1, e2) ->
      Printf.sprintf "(pair %s %s)" (string_of_value e1)
        (string_of_value e2)
  | Function _ ->
      "<function>"

let rec interp_exp (defns : defn list) (env : value symtab)
    (exp : expr) : value =
  match exp with
  | Num n ->
      Number n
  | Bool b ->
      Boolean b
  | Var var when Symtab.mem var env ->
      Symtab.find var env
  | Var var when is_defn defns var ->
      Function (var, Symtab.empty)
  | Var _ ->
      raise (BadExpression exp)
  | Closure f ->
      Function (f, env)
  | Prim0 ReadNum ->
      Number (input_line stdin |> int_of_string)
  | Prim0 Newline ->
      output_string stdout "\n" ;
      Boolean true
  | Prim1 (Print, e) ->
      interp_exp defns env e |> string_of_value
      |> output_string output_channel ;
      Boolean true
  | Prim1 (Not, arg) ->
      if interp_exp defns env arg = Boolean false then Boolean true
      else Boolean false
  | Prim1 (ZeroP, arg) -> (
    match interp_exp defns env arg with
    | Number 0 ->
        Boolean true
    | _ ->
        Boolean false )
  | Prim1 (NumP, arg) -> (
    match interp_exp defns env arg with
    | Number _ ->
        Boolean true
    | _ ->
        Boolean false )
  | Prim1 (Add1, arg) -> (
    match interp_exp defns env arg with
    | Number n ->
        Number (n + 1)
    | _ ->
        raise (BadExpression exp) )
  | Prim1 (Sub1, arg) -> (
    match interp_exp defns env arg with
    | Number n ->
        Number (n - 1)
    | _ ->
        raise (BadExpression exp) )
  | Prim1 (Left, e) -> (
    match interp_exp defns env e with
    | Pair (e1, _) ->
        e1
    | _ ->
        raise (BadExpression exp) )
  | Prim1 (Right, e) -> (
    match interp_exp defns env e with
    | Pair (_, e2) ->
        e2
    | _ ->
        raise (BadExpression exp) )
  | Prim2 (Pair, e1, e2) ->
      let lhs = interp_exp defns env e1 in
      let rhs = interp_exp defns env e2 in
      Pair (lhs, rhs)
  | Prim2 (Plus, e1, e2) -> (
    match (interp_exp defns env e1, interp_exp defns env e2) with
    | Number n1, Number n2 ->
        Number (n1 + n2)
    | _ ->
        raise (BadExpression exp) )
  | Prim2 (Minus, e1, e2) -> (
      let v1 = interp_exp defns env e1 in
      let v2 = interp_exp defns env e2 in
      match (v1, v2) with
      | Number n1, Number n2 ->
          Number (n1 - n2)
      | _ ->
          raise (BadExpression exp) )
  | Prim2 (Eq, e1, e2) -> (
      let v1 = interp_exp defns env e1 in
      let v2 = interp_exp defns env e2 in
      match (v1, v2) with
      | Number n1, Number n2 ->
          Boolean (n1 = n2)
      | Boolean b1, Boolean b2 ->
          Boolean (b1 = b2)
      | _ ->
          raise (BadExpression exp) )
  | Prim2 (Lt, e1, e2) -> (
      let v1 = interp_exp defns env e1 in
      let v2 = interp_exp defns env e2 in
      match (v1, v2) with
      | Number n1, Number n2 ->
          Boolean (n1 < n2)
      | _ ->
          raise (BadExpression exp) )
  | If (test_exp, then_exp, else_exp) ->
      if interp_exp defns env test_exp = Boolean false then
        interp_exp defns env else_exp
      else interp_exp defns env then_exp
  | Let (s, e, body) ->
      let e_val = interp_exp defns env e in
      interp_exp defns (Symtab.add s e_val env) body
  | Do exps ->
      exps |> List.rev_map (interp_exp defns env) |> List.hd
  | Call (f, args) -> (
      let vals = List.map (interp_exp defns env) args in
      let fv = interp_exp defns env f in
      match fv with
      | Function (f, saved_env) when is_defn defns f ->
          let defn = get_defn defns f in
          if List.length args <> List.length defn.args then
            raise (BadExpression exp)
          else
            let fenv =
              List.combine defn.args vals |> Symtab.add_list saved_env
            in
            interp_exp defns fenv defn.body
      | _ ->
          raise (BadExpression exp) )

let interp (program : string) : unit =
  let program2 = parse_many program |> program_of_s_exps in
  interp_exp program2.defns Symtab.empty program2.body |> ignore

(* let interp_err (program : string) : string =
   try interp program with BadExpression _ -> "ERROR" *)

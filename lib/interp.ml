open S_exp
open Ast
open Util

exception BadExpression of expr

type value = Number of int | Boolean of bool | Pair of value * value

let rec string_of_value (v : value) : string =
  match v with
  | Number n ->
      string_of_int n
  | Boolean b ->
      string_of_bool b
  | Pair (e1, e2) ->
      Printf.sprintf "(pair %s %s)" (string_of_value e1)
        (string_of_value e2)

let rec interp_exp (env : value symtab) (exp : expr) : value =
  match exp with
  | Num n ->
      Number n
  | Bool b ->
      Boolean b
  | Var s when Symtab.mem s env ->
      Symtab.find s env
  | Var _ ->
      raise (BadExpression exp)
  | Prim0 ReadNum ->
      Number (input_line stdin |> int_of_string)
  | Prim1 (Not, arg) ->
      if interp_exp env arg = Boolean false then Boolean true
      else Boolean false
  | Prim1 (ZeroP, arg) -> (
    match interp_exp env arg with
    | Number 0 ->
        Boolean true
    | _ ->
        Boolean false )
  | Prim1 (NumP, arg) -> (
    match interp_exp env arg with
    | Number _ ->
        Boolean true
    | _ ->
        Boolean false )
  | Prim1 (Add1, arg) -> (
    match interp_exp env arg with
    | Number n ->
        Number (n + 1)
    | _ ->
        raise (BadExpression exp) )
  | Prim1 (Sub1, arg) -> (
    match interp_exp env arg with
    | Number n ->
        Number (n - 1)
    | _ ->
        raise (BadExpression exp) )
  | Prim1 (Left, e) -> (
    match interp_exp env e with
    | Pair (e1, _) ->
        e1
    | _ ->
        raise (BadExpression exp) )
  | Prim1 (Right, e) -> (
    match interp_exp env e with
    | Pair (_, e2) ->
        e2
    | _ ->
        raise (BadExpression exp) )
  | Prim2 (Pair, e1, e2) ->
      let lhs = interp_exp env e1 in
      let rhs = interp_exp env e2 in
      Pair (lhs, rhs)
  | Prim2 (Plus, e1, e2) -> (
    match (interp_exp env e1, interp_exp env e2) with
    | Number n1, Number n2 ->
        Number (n1 + n2)
    | _ ->
        raise (BadExpression exp) )
  | Prim2 (Minus, e1, e2) -> (
      let v1 = interp_exp env e1 in
      let v2 = interp_exp env e2 in
      match (v1, v2) with
      | Number n1, Number n2 ->
          Number (n1 - n2)
      | _ ->
          raise (BadExpression exp) )
  | Prim2 (Eq, e1, e2) -> (
      let v1 = interp_exp env e1 in
      let v2 = interp_exp env e2 in
      match (v1, v2) with
      | Number n1, Number n2 ->
          Boolean (n1 = n2)
      | Boolean b1, Boolean b2 ->
          Boolean (b1 = b2)
      | _ ->
          raise (BadExpression exp) )
  | Prim2 (Lt, e1, e2) -> (
      let v1 = interp_exp env e1 in
      let v2 = interp_exp env e2 in
      match (v1, v2) with
      | Number n1, Number n2 ->
          Boolean (n1 < n2)
      | _ ->
          raise (BadExpression exp) )
  | If (test_exp, then_exp, else_exp) ->
      if interp_exp env test_exp = Boolean false then
        interp_exp env else_exp
      else interp_exp env then_exp
  | Let (s, e, body) ->
      let e_val = interp_exp env e in
      interp_exp (Symtab.add s e_val env) body

let interp (program : string) : string =
  parse program |> expr_of_s_exp |> interp_exp Symtab.empty
  |> string_of_value

let interp_err (program : string) : string =
  try interp program with BadExpression _ -> "ERROR"

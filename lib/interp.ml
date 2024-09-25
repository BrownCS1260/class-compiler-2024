open S_exp
open Ast

exception BadExpression of expr

type value = Number of int | Boolean of bool

let string_of_value (v : value) : string =
  match v with
  | Number n ->
      string_of_int n
  | Boolean b ->
      string_of_bool b

let rec interp_exp (exp : expr) : value =
  match exp with
  | Num n ->
      Number n
  | Bool b ->
      Boolean b
  | Prim1 (Not, arg) ->
      if interp_exp arg = Boolean false then Boolean true
      else Boolean false
  | Prim1 (ZeroP, arg) -> (
    match interp_exp arg with
    | Number 0 ->
        Boolean true
    | _ ->
        Boolean false )
  | Prim1 (NumP, arg) -> (
    match interp_exp arg with
    | Number _ ->
        Boolean true
    | _ ->
        Boolean false )
  | Prim1 (Add1, arg) -> (
    match interp_exp arg with
    | Number n ->
        Number (n + 1)
    | _ ->
        raise (BadExpression exp) )
  | Prim1 (Sub1, arg) -> (
    match interp_exp arg with
    | Number n ->
        Number (n - 1)
    | _ ->
        raise (BadExpression exp) )
  | Prim2 (Plus, e1, e2) -> (
    match (interp_exp e1, interp_exp e2) with
    | Number n1, Number n2 ->
        Number (n1 + n2)
    | _ ->
        raise (BadExpression exp) )
  | Prim2 (Minus, e1, e2) -> (
    match (interp_exp e1, interp_exp e2) with
    | Number n1, Number n2 ->
        Number (n1 - n2)
    | _ ->
        raise (BadExpression exp) )
  | Prim2 (Eq, e1, e2) ->
      Boolean (interp_exp e1 = interp_exp e2)
  | Prim2 (Lt, e1, e2) -> (
    match (interp_exp e1, interp_exp e2) with
    | Number n1, Number n2 ->
        Boolean (n1 < n2)
    | _ ->
        raise (BadExpression exp) )
  | If (test_exp, then_exp, else_exp) ->
      if interp_exp test_exp = Boolean false then interp_exp else_exp
      else interp_exp then_exp

let interp (program : string) : string =
  parse program |> expr_of_s_exp |> interp_exp |> string_of_value

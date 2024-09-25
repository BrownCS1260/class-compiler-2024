open S_exp

exception BadExpression of s_exp

type value = Number of int | Boolean of bool

let string_of_value (v : value) : string =
  match v with
  | Number n ->
      string_of_int n
  | Boolean b ->
      string_of_bool b

let rec interp_exp (exp : s_exp) : value =
  match exp with
  | Num n ->
      Number n
  | Sym "true" ->
      Boolean true
  | Sym "false" ->
      Boolean false
  | Lst [Sym "add1"; exp] -> (
    match interp_exp exp with
    | Number n ->
        Number (n + 1)
    | _ ->
        raise (BadExpression exp) )
  | Lst [Sym "sub1"; exp] -> (
    match interp_exp exp with
    | Number n ->
        Number (n - 1)
    | _ ->
        raise (BadExpression exp) )
  | Lst [Sym "not"; arg] ->
      if interp_exp arg = Boolean false then Boolean true
      else Boolean false
  | Lst [Sym "zero?"; arg] ->
      if interp_exp arg = Number 0 then Boolean true
      else Boolean false
  | Lst [Sym "num?"; arg] -> (
    match interp_exp arg with
    | Number _ ->
        Boolean true
    | _ ->
        Boolean false )
  | Lst [Sym "if"; test_exp; then_exp; else_exp] ->
      if interp_exp test_exp = Boolean false then interp_exp else_exp
      else interp_exp then_exp
  | Lst [Sym "+"; e1; e2] -> (
    match (interp_exp e1, interp_exp e2) with
    | Number n1, Number n2 ->
        Number (n1 + n2)
    | _ ->
        raise (BadExpression exp) )
  | Lst [Sym "-"; e1; e2] -> (
    match (interp_exp e1, interp_exp e2) with
    | Number n1, Number n2 ->
        Number (n1 - n2)
    | _ ->
        raise (BadExpression exp) )
  | Lst [Sym "<"; e1; e2] -> (
    match (interp_exp e1, interp_exp e2) with
    | Number n1, Number n2 ->
        Boolean (n1 < n2)
    | _ ->
        raise (BadExpression exp) )
  | Lst [Sym "="; e1; e2] ->
      Boolean (interp_exp e1 = interp_exp e2)
  | _ ->
      raise (BadExpression exp)

let interp (program : string) : string =
  parse program |> interp_exp |> string_of_value

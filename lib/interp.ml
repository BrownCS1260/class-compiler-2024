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
  | _ ->
      raise (BadExpression exp)

let interp (program : string) : string =
  parse program |> interp_exp |> string_of_value

open S_exp

exception BadExpression of s_exp

let rec interp_exp (exp : s_exp) : int =
  match exp with
  | Num n ->
      n
  | Lst [Sym "add1"; exp] ->
      interp_exp exp + 1
  | Lst [Sym "sub1"; exp] ->
      interp_exp exp - 1
  | _ ->
      raise (BadExpression exp)

let interp (program : string) : string =
  parse program |> interp_exp |> string_of_int

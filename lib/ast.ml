open S_exp

exception BadSExpression of s_exp

type prim1 = Add1 | Sub1 | ZeroP | NumP | Not | Left | Right

let prim1_of_string (s : string) : prim1 option =
  match s with
  | "add1" ->
      Some Add1
  | "sub1" ->
      Some Sub1
  | "zero?" ->
      Some ZeroP
  | "num?" ->
      Some NumP
  | "not" ->
      Some Not
  | "left" ->
      Some Left
  | "right" ->
      Some Right
  | _ ->
      None

type prim2 = Plus | Minus | Eq | Lt | Pair

let prim2_of_string = function
  | "+" ->
      Some Plus
  | "-" ->
      Some Minus
  | "=" ->
      Some Eq
  | "<" ->
      Some Lt
  | "pair" ->
      Some Pair
  | _ ->
      None

type expr =
  | Bool of bool
  | Num of int
  | Var of string
  | If of expr * expr * expr
  | Prim1 of prim1 * expr
  | Prim2 of prim2 * expr * expr
  | Let of string * expr * expr

let rec expr_of_s_exp (e : s_exp) : expr =
  match e with
  | Num n ->
      Num n
  | Sym "true" ->
      Bool true
  | Sym "false" ->
      Bool false
  | Sym s ->
      Var s
  | Lst [Sym "if"; e1; e2; e3] ->
      If (expr_of_s_exp e1, expr_of_s_exp e2, expr_of_s_exp e3)
  | Lst [Sym op; e1] when Option.is_some (prim1_of_string op) ->
      Prim1 (Option.get (prim1_of_string op), expr_of_s_exp e1)
  | Lst [Sym op; e1; e2] when Option.is_some (prim2_of_string op) ->
      Prim2
        ( Option.get (prim2_of_string op)
        , expr_of_s_exp e1
        , expr_of_s_exp e2 )
  | Lst [Sym "let"; Lst [Lst [Sym s; e]]; body] ->
      Let (s, expr_of_s_exp e, expr_of_s_exp body)
  | _ ->
      raise (BadSExpression e)

import ClassCompiler.Asm
import ClassCompiler.SExp

open Directive Operand Register Ast

inductive Value
| Integer (i : Int)
| Boolean (b : Bool)

theorem sillyTheorem : ∀ v : Value, v = v := by
  intro v
  cases v with
  | Integer i => sorry
  | Boolean b => sorry

def Value.to_String : Value → String
| Integer i => toString i
| Boolean b => toString b

instance : Repr Value where
  reprPrec := λ v _ => Value.to_String v

open Value

def interpret_exp : Ast → Option Value
| Num n => Integer n
| Ast.True => Boolean true
| Ast.False => Boolean false
| Add1 arg =>
  match interpret_exp arg with
  | some (Integer i) => Integer (i + 1)
  | _ => none
| Sub1 arg =>
  match interpret_exp arg with
  | some (Integer i) => Integer (i - 1)
  | _ => none

unsafe def interpret_string (s : String) : Option Value :=
let sexp := S_exp_of_String s;
match Ast_of_S_exp sexp with
| some ast => interpret_exp ast
| none => panic! "parser error"

#eval interpret_string "(add1 100)"

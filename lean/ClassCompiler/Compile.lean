import ClassCompiler.Asm
import ClassCompiler.SExp

open Directive Operand Register Ast

def num_shift := 2
def num_mask := 0b11
def num_tag := 0b00

def bool_shift := 7
def bool_mask := 0b1111111
def bool_tag := 0b0011111


def compile_exp : Ast → List Directive
| Num n =>
  [Mov (Reg Rax, Imm (n <<< num_shift))]
| Ast.True => [Mov (Reg Rax, Imm ((1 <<< bool_shift) ||| bool_tag))]
| Ast.False => [Mov (Reg Rax, Imm ((0 <<< bool_shift) ||| bool_tag))]
| Add1 arg =>
  List.append (compile_exp arg)
  [Add (Reg Rax, Imm (1 <<< num_shift))]
| Sub1 arg =>
  List.append (compile_exp arg)
  [Sub (Reg Rax, Imm (1 <<< num_shift))]

def compile (prog : Ast) : List Directive :=
  [ Global "entry",
    Label "entry" ] ++
  compile_exp prog ++
  [ Ret ]

unsafe def compile_string (s : String) : List Directive :=
let sexp := S_exp_of_String s;
match Ast_of_S_exp sexp with
| some ast => compile ast
| none => panic! "parser error"

unsafe def compile_string_to_string (s : String) : String :=
String.join $ ((compile_string s).map String_of_Directive).intersperse "\n"

unsafe def compile_to_file (s : String) : IO Unit :=
IO.FS.writeFile (System.mkFilePath [".", "program.s"]) (compile_string_to_string s)

unsafe def compile_and_run (s : String) : IO Unit := do
  compile_to_file s
  _ ← IO.Process.run { cmd := "nasm", args := #["program.s", "-f", "elf64", "-o", "program.o"] }
  _ ← IO.Process.run { cmd := "gcc", args := #["--no-pie", "program.o", "runtime.o", "-o", "program", "-z", "noexecstack"] }
  let out ← IO.Process.run { cmd := "./program" }
  IO.print out

#eval compile_and_run "(add1 500)"

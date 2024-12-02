import ClassCompiler.Compile
import ClassCompiler.Interpret

axiom process : List Directive → Value

theorem my_compiler_is_correct :
  ∀ progr : Ast,
    (∀ v : Value,
      interpret_exp progr = some v →
        process (compile prog) = v) :=
  sorry

open S_exp

exception BadExpression of s_exp

let compile (program : s_exp) : string =
  match program with
  | Num n ->
      String.concat "\n"
        ["global entry"; "entry:"; Printf.sprintf "\tmov rax, %d" n; "\tret"]
  | _ ->
      raise (BadExpression program)

let compile_to_file (program : string) : unit =
  let file = open_out "program.s" in
  let prog = parse program in
  output_string file (compile prog) ;
  close_out file

let compile_and_run (program : string) : string =
  compile_to_file program ;
  ignore (Unix.system "nasm program.s -f elf64 -o program.o") ;
  ignore (Unix.system "gcc program.o runtime.o -o program -z noexecstack") ;
  let inp = Unix.open_process_in "./program" in
  let r = input_line inp in
  close_in inp ; r

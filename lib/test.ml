(*open Compile
  open Interp
     let difftest (examples : string list) =
       let results =
         List.map (fun ex -> (compile_and_run ex, interp ex)) examples
       in
       List.for_all (fun (r1, r2) -> r1 = r2) results

     let test () = difftest ["43"; "(add1 (add1 3))"; "(sub1 4)"] *)

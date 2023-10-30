let gensym : string -> string =
  let counter = ref 0 in
  fun s ->
    let symbol = Printf.sprintf "%s__%d" s !counter in
    counter := !counter + 1 ;
    symbol

module ST = Map.Make (struct
  type t = string

  let compare = compare
end)

module Symtab = struct
  include ST

  let of_list l = l |> List.to_seq |> of_seq

  let add_list tab l =
    List.fold_left (fun tab (k, v) -> add k v tab) tab l
end

type 'a symtab = 'a Symtab.t

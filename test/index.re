open Qs;

module QuerySchema = {
    class type t = {
        pub something : Js.undefined string
    };
};

module Qs = MakeQs(QuerySchema);

let parsed = Qs.parse "something=ok";
Js.log (switch (Js.Undefined.to_opt parsed##something) {
    | None => "not found"
    | Some s => s
});
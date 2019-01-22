[@decco]
type t = {
    something: option(string)
};

let parsed = Qs.parse("something=ok");
switch (t_decode(parsed)) {
    | Ok({ something: Some(s) }) => Js.log(s)
    | _ => Js.log("oh jeez")
};

[@decco]
type q = {
    var1: string,
    var2: string,
    arr: list(int)
};

let myQuery = Js.Dict.fromList([
    ("var1", Js.Json.string("one")),
    ("var2", Js.Json.string("http://www.ok.com/")),
    ("arr", [| 1, 2 |] |> Js.Array.map(float_of_int) |> Js.Array.map(Js.Json.number) |> Js.Json.array),
]);

Js.log(Qs.stringify(myQuery));
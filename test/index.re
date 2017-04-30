module QsParser = Qs.MakeParser({
    class type t = {
        pub something : Js.undefined string
    };
});

let parsed = QsParser.parse "something=ok";
Js.log (switch (Js.Undefined.to_opt parsed##something) {
    | None => "not found"
    | Some s => s
});

let myQuery = [%bs.obj {
    var1: "one",
    var2: "http://www.ok.com/",
    arr: [ 1, 2 ]
}];

Js.log (Qs.stringify myQuery);
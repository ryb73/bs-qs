module type ParserSchema = {
    type t;
};

module MakeParser = fun (Schema : ParserSchema) => {
    external parse : string => Js.t Schema.t = "parse" [@@bs.module "qs"];
};

external stringify : Js.t {..} => string = "stringify" [@@bs.module "qs"];
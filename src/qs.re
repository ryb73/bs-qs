module type QsSchema = {
    type t;
};

module MakeQs = fun (Schema : QsSchema) => {
    external parse : string => Js.t Schema.t = "parse" [@@bs.module "qs"];
};
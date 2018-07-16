[@bs.module "qs"] external parse : string => Js.Json.t = "";
[@bs.module "qs"] external stringify : Js.Dict.t(Js.Json.t) => string = "";

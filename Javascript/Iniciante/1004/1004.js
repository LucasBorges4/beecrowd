var input = require("fs").readFileSync("./stdin", "utf8");
var lines = input.split("\n");

let mult = 1;
let a = parseInt(lines.shift());
let b = parseInt(lines.shift());

mult = a*b;
console.log("PROD = "+ mult);
var input = require("fs").readFileSync("./stdin", "utf8");
var lines = input.split("\n");

let sum = 0;
let a = parseInt(lines.shift());
let b = parseInt(lines.shift());

sum = a+b;
console.log("SOMA = "+ sum);
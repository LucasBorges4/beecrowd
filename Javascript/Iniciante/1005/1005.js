var input = require("fs").readFileSync("./stdin", "utf8");
var lines = input.split("\n");

let soma = 0;
let a = parseFloat(lines.shift());
let b = parseFloat(lines.shift());

soma += a*3.5+b*7.5
soma /= 11

soma = soma.toFixed(5)

console.log("MEDIA = "+ soma);
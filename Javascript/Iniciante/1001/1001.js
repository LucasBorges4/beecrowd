/*Use the file stdin to put your cases test, change the '/dev/stdin'
to ./stdin, but in beecrowd you will need 
use /dev/stdin to your submission. Stay sharp.
*/
var input = require("fs").readFileSync("./stdin", "utf8");
var lines = input.split("\n");

let sum = 0;
let a = parseInt(lines.shift());
let b = parseInt(lines.shift());

sum = a+b;
console.log("X = "+ sum);
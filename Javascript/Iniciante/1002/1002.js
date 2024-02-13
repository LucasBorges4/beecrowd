
/*Use the file stdin to put your cases test, change the '/dev/stdin'
to ./stdin, but in beecrowd you will need 
use /dev/stdin to your submission. Stay sharp.
*/
var input = require("fs").readFileSync("./stdin", "utf8");
var lines = input.split("\n");
//--------------------------------------------------------------
let pi = 3.14159;
let raio = parseFloat(input);
let area = raio**2*pi;

const area_formatted = area.toFixed(4)

console.log('A='+ area_formatted);

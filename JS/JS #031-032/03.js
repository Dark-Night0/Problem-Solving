
let a1 = 20;
let b = 30;
let c = 10;

console.log(a1 == b && a1 != c || a1 < b); // true
console.log(a1 < b && a1 > c); // true
console.log(!(a1 == b) && !(a1 > b) && !(a1 < c) && !(a1 == c)); // true

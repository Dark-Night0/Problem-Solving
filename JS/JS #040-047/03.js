
let arrOne = ["C", "D", "X"];
let arrTwo = ["A", "B", "Z"];
let finalArr = [];

// Write One Single Line Of Code
finalArr= arrOne.concat(arrTwo[arrTwo.length - true]).reverse().concat(arrTwo.slice(false,arrTwo.length - true).reverse())

console.log(finalArr); // ["Z", "X", "D", "C", "B", "A"]
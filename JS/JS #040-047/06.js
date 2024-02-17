
let arr1 = ["A", "C", "X"];
let arr2 = ["D", "E", "F", "Y"];
let allArrs = [];
let num01 = arr1.length
allArrs.push(arr2[--num01].toLowerCase().concat(arr1[num01].toLowerCase().concat(arr2[arr1.length].toLowerCase())))

console.log(allArrs.join(""))
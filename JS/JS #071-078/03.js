
let myArray = ["E", "l", "z", ["e", "r"], "o"];

let newArray = myArray.reduce(function (ele , next) {
    return `${ele}${next}`
}).replace(",","").split("")

console.log(newArray)
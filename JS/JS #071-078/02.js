
let myString = "EllElllzzzezzzzeereoeeeo"
let sol01 = myString.split("").filter(function (value , index ,arr) {
    return arr.indexOf(value) === index;
}).join("")

console.log(sol01)
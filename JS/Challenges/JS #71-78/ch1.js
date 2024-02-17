
let myString1 = "1,2,3,EE,l,z,e,r,o,_,W,e,b,_,S,c,h,o,o,l,2,0,Z"
let num02 = myString1[myString1.length - true]
let solution = myString1
    .split("")
    .filter(function (ele) {
    return isNaN(ele) && ele !== num02
})
    .map(function (ele) {
    return ele.replace(",","") && ele.replace("_" , " ") 
})
    .reduce(function (acc, next) {
        return acc === next ? acc : `${acc}${next}` 
    
},)

console.log(num02)
console.log(solution)


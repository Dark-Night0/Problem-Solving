
let mix = [1, 2, 3, "E", 4, "l", "z", "e", "r", 5, "o"];

let sol0 = mix
    .map((ele) => 
        (isNaN(ele)) ? ele : "")
    
    .reduce((acc, next) => `${acc}${next}`)

console.log(sol0)

let NumberOne = 10
    , NumberTwo = 20;

console.log(NumberOne.toString() + NumberTwo.toString()) // 1020

console.log(typeof (NumberOne.toString() + NumberTwo.toString())) // string

console.log(`${NumberOne}${NumberTwo}`) // 1020

console.log(typeof `${NumberOne}${NumberTwo}`) // string

console.log(NumberTwo + "\n" + NumberOne)  // 20 (New Line) 10


console.log(`${NumberTwo}
${NumberOne}`)                  // 20 (New Line) 10

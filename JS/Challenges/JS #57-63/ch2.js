
// Arrow Function 

let myNumbers = [20, 50, 10, 60]

let calc = (one, two, ...nums) => parseInt(nums) + one + two 

    console.log(calc(10, myNumbers[0], myNumbers[1]))

// Regular Function

function clac2(one, two, ...nums) {
    return parseInt(nums) + one + two 
}
console.log(clac2(10 , myNumbers[1], myNumbers[0]))

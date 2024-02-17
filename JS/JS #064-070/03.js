
// Search (Currying Function Technique)
// Currying Function

function checker(zName) {
    return function (status) {
        return function (salary) {
            return status.toLowerCase() === "available" ? `${zName} , My Salary is ${salary}` : `Iam Not Available`;
        }
    }
}

console.log(checker("Mohammed")("available")(4000))      // Mohammed , My Salary is 4000
console.log(checker("Mohammed")("not available")(4000))  // Iam Not Available

// Arrow Currying Function
let checkerArrow = (zName) => {
    return (status) =>
    {
        return (salary) => {
            return status.toLowerCase() === "available" ? `${zName} , My Salary is ${salary}` : `Iam Not Available`;
        }
    }
}

console.log(checkerArrow("Mohammed")("available")(4000))      // Mohammed , My Salary is 4000
console.log(checkerArrow("Mohammed")("not available")(4000))  // Iam Not Available

function multiply(...numbers) {
    let result = 1
    
    for (let i = 0; i < numbers.length; i++){
        if (typeof numbers[i] === "string")
            continue
        
        else if  (typeof numbers[i] === "number") {
            Number.isInteger(numbers[i]) ?
                result *= numbers[i] :
                result *= Number.parseInt(numbers[i]);
        }
    }
    console.log(result)
}


multiply(20,10)                         // 200
multiply("A", 10, 30)                   // 300
multiply(100.43325,10.34342324,"B")     // 1000
multiply(100.5,10,"B")         
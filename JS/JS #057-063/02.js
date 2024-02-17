
function calculate(firstNum = 0, secondNum ="Unknown" , operator ="Unknown") {
    
    if (operator === "Unknown")
        console.log(firstNum + secondNum)
    
    else {

        switch (operator.toLowerCase()) {
            case 'add':
                console.log(firstNum + secondNum )
                break
            case 'subtract':
                console.log(firstNum - secondNum)
                break
            case 'multiply':
                console.log(firstNum * secondNum)
                break
            default:
                console.log(" Second Number Not Found")
                
        }
    }
}

calculate(20)                    // Second Number Not Found
calculate(20 , 30)               // 50 
calculate(20 , 30 , "add")      // 50
calculate(20 ,30 ,'subtract')   // -10
calculate(20 ,30 ,'multiply')   // 600
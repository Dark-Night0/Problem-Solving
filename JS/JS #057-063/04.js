
function cheackStatus(a, b, c) {
    
    let arr =  [a, b, c]
    for (let i = 0; i < arr.length; i++){
        if (typeof arr[i] === "string")
            a = arr[i]
        else if (typeof arr[i] === "number")
            b = arr[i]
        else if (typeof arr[i] === "boolean")
            c = arr [i]
    }
    if (c) 
        console.log(`Hello ${a} , Your Age is ${b} , You Are Available For Hire `)
    
    else 
        console.log(`Hello ${a} , Your Age is ${b} , You Are Not Available For Hire `)
}


cheackStatus("Mohammed" , 22 , true)    // Hello Mohammed , Your Age is 22 , You Are Available For Hire

cheackStatus(22 , "Mohammed" , true)    // Hello Mohammed , Your Age is 22 , You Are Available For Hire 

cheackStatus(true, 22, "Mohammed")      // Hello Mohammed , Your Age is 22 , You Are Available For Hire 

cheackStatus(false, "Mohammed", 22)   // Hello Mohammed , Your Age is 22 , You Are Not Available For Hire 
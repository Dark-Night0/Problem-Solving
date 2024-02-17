
// challenge Function

function showDetails(a, b, c) {
    let arr = [a, b, c] 

    for (let i = 0; i < arr.length; i++) {
        typeof arr[i] === "string" ?
            a = arr[i]
        
            : typeof arr[i] === "number" ?
                b = arr[i] :
        
                typeof arr[i] === "boolean" ?
                    c = arr[i] :null;
        
    }
    (c) ?
        console.log(`Hello ${a} , Your Age is ${b} , You Are Available Hire`)
        :
        console.log(`Hello ${a} , Your Age is ${b} , You Are Not Available Hire`);
    
}
    
showDetails("Mohammed", 22, true)      // Hello Mohammed , Your Age is 22 , You Are Available Hire
showDetails(22, "Mohammed", true)     // Hello Mohammed , Your Age is 22 , You Are Available Hire 
showDetails(true, 22,"Mohammed")     //  Hello Mohammed , Your Age is 22 , You Are Available Hire
showDetails(false, "Mohammed" , 22) //   Hello Mohammed , Your Age is 22 , You Are Not Available Hire
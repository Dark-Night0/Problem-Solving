
function speciaMix(...data) {
    let result = 0
    for (let i = 0; i < data.length; i++){
        if (typeof data[i] === "number") 
            result += data[i]
        // return (NaN) from parseInt(data[i]) , in case was parseInt("Testing") //(or String Type)        
        else if (parseInt(data[i]) === parseInt(data[i]))
            result += parseInt(data[i])
        
        else 
            continue
    }
    if (result === 0)
        return `All is Strings`
    else 
        return result
}

console.log(speciaMix(10,20,30))                             // 60
console.log(speciaMix("10Test" ,"Testing" , "20Cool"))       // 30
console.log(speciaMix("Testing" , "10Testing" ,"40Cool"))   // 50
console.log(speciaMix("Test" , "Cool" ,"Test"))             // All is Strings
console.log(speciaMix("Test" , "Cool" ,"10Test"))           // 10
console.log(speciaMix("Test" , "20Cool" ,"Test"))           // 20

start = 0

let swappedName = "elZerO"
let value = ""
for (; start < swappedName.length; start++){

    if (swappedName[start] === swappedName[start].toLowerCase()) 
    value += swappedName[start].toUpperCase()
           
    else if (swappedName[start] === swappedName[start].toUpperCase())
    value += swappedName[start].toLowerCase()
        
}
    console.log(value)
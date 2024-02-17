
function sayHello(theName, theGender = "Unknown") {
    if (theGender.toLowerCase() === "male")
        console.log(`Hello Mr ${theName}`)
    else if (theGender.toLowerCase() === "female")
        console.log(`Hello Miss ${theName}`)
    else
        console.log(`Hello ${theName}`)
}

sayHello("Osama" , "Male")   // Hello Mr Osama
sayHello("Eman" , "Female") // Hello Miss Eman
sayHello("Osama")          //  Hello Osama
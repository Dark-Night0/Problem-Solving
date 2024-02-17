
function ageInTime(theAge) {
    if (theAge > 10 && theAge < 100) {
        
        console.log(`The Months ${theAge * 12}`)
        console.log(`The Weeks ${(theAge * 12) * 7}`)
        console.log(`The Hours ${(theAge * 12) * 7 * 168}`)
        console.log(`The Minutes ${((theAge * 12) * 7 * 168) * 60}`)
        console.log(`The Seconds ${((theAge * 12) * 7 * 168) * 120}`)
        

    }
    else
        console.log("Age Out Of Range !")
}

ageInTime(22)

function getDetails(zName,zAge , zCountry) {

    function amePattren(zName) {
        return zName.substr(0,zName.indexOf(" ")) .concat(` ${zName.substr(zName.indexOf(" ")).charAt(1).toUpperCase()}.`)
    }

    function ageWithMassage(zAge) {
        return `Your Age Is ${parseInt(zAge)}`
    }

    function countryTowLetters(zCountry) {
        
        return `You Live In ${zCountry.substr(0,2).toUpperCase()}`
    }
    
    function fullDetails() {
        
        return `Hello ${amePattren(zName)} , ${ageWithMassage(zAge)} , ${countryTowLetters(zCountry)}`
    }

    return fullDetails()
}

console.log(getDetails("Osama Mohammed", "38 is the age", "Egypt"))

console.log(getDetails("mohammed khalid" , "22 is the age" ,"Egypt"))

console.log(getDetails("Ahemd ali", "32 is the age", "syria"))
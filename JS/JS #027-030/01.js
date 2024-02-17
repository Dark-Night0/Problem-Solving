
let userName = "Elzero"

console.log(userName[0].toLowerCase()) // e

console.log(userName.charAt(0).toLowerCase()) //e

console.log(userName.substr(0,1).toLowerCase())

console.log(userName.substring(0, 1).toLowerCase()) // e

console.log(String.fromCharCode(userName.toLowerCase().codePointAt()).repeat(3)) // eee

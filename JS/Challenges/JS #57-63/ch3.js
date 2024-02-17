
let names = function (...printName) {
    return `String [${printName.join("], [")}] => Done !`
}
console.log(names("Osama", "khalid", "Mohammed", "Aya"))


let names2 = (...printName) => `String [${printName.join("], [")}] => Done ! `;


console.log(names2("Osama", "khalid", "Mohammed", "Aya"))
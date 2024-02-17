
let jop = "Manager"
let salary = 0 

switch (jop) {
    case jop === "Manager":
        salary = 8000;
        break;
    case jop === "IT":
    case jop === "Support":
        salary = 6000;
        break;
    case jop === "Developer" || jop === "Designer":
        salary = 7000;
        break;
    default:
        salary = 4000;
        break;
}
console.log(`My Jop : ${jop}`)
console.log(`My Salary : ${salary}`)

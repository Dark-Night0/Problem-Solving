
let myAdmins = ["Ahmed","Hissen","mahmoud" , "Osama", "Sayed", "Stop", "Samera"]
let myEmployees = ["Amgad", "Samah", "Ameer", "Omar", "Othman", "Amany", "Samia"]
let i = 0 ,count = 0;

for (; i < myAdmins.length; i++){
    
    if (myAdmins[i].toLowerCase() === "stop".toLowerCase()) {
        
        document.write(`<div> We Have ${i} Admins  </div>`)
        break;
    } 
}

for (let j = 0; j < i; j++){
    document.write("<hr>")
    document.write("<div>")
    
    count = 0
    document.write(`The Admin For Team ${j + 1} is ${myAdmins[j]}`)
    document.write("<h3>Team Members :</h3>")

    for (k = 0; k < myEmployees.length; k++){
        if (myAdmins[j].charAt(0).toLowerCase() === myEmployees[k].charAt(0).toLowerCase()) {
            count ++
            document.write(`<p>-  ${count} ${myEmployees[k]} </p>`)
        }
    }
    
    if (count === 0)
        document.write("<p> Sorry Your Team is Empty ! </p>");



    document.write("</div>")

}
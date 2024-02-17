
let friends2 = ["Ahmed", "Sayed", "Eman", "Mahmoud", "Ameer", "Osama", "Sameh"];
let letter = "a";
        
for (let i = 0; i < friends2.length; i++)
    
    if (!(friends2[i].toLowerCase().startsWith(letter)))
        console.log(`${i} => ${friends2[i]}`)
    
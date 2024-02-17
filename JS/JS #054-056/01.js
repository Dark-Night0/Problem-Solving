
let friends = ["Ahmed", "Sayed", "Ali", 1, 2, "Mahmoud", "Amany"];
let index = 0;
let counter = 0 , i1 =0;

// console.log(typeof friends[3]=== "number")
while (counter < friends.length) {
    
    if (typeof friends[counter] === "string") {
        if (friends[counter][index].toLowerCase() === "a") {
            counter++
            continue
        }
        else {
            ++i1
            console.log(`${i1} ==> ${friends[counter]}`)
        }
    }
    counter ++
}

start = 0 
let max = [1, 2, 3, "A", "B", "C", 4];

for (++start; start < max.length; start++){

    if (typeof max[start] === "string")
        continue
    else
        console.log(max[start])

}
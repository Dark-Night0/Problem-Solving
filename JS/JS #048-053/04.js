
let index0 = 10, jump = 2
end = 0

for (; ;){

    if (end < index0) {
        console.log(index0)
        index0 -= jump
    }
    
    if (index0 === jump) break
}
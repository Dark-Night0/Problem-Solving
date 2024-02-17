
let stop = 3
start = 10, end = 0 

for (; end <= start; start--){
    
    start < 10 ? console.log(`0${start}`) : console.log(start.toString());
    if (start === 3) break;
}
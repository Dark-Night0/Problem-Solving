
// challenge Array

let zero = 0 
let counter2 = 3
let my = ["Ahmed", "Mazero", "Elham", "Osama", "Gamal", "Ameer"]

my.pop()
my.pop()
my.reverse()

console.log(my) // ['Osama', 'Elham', 'Mazero', 'Ahmed']

console.log(my.slice(++zero, counter2)) // ['Elham', 'Mazero']

console.log(my[zero].slice(--zero,--counter2).concat(my[counter2].slice(counter2))) // Elzero

console.log(my[counter2].slice(- counter2).charAt(zero).concat(my[counter2].slice(- --counter2).toUpperCase())) // rO

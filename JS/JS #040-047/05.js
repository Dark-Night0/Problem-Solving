
let needle = "JS";
let haystack = ["PHP", "JS", "Python"];

console.log(haystack.includes(needle) ? "Found" : "")

console.log(haystack.indexOf(needle) !== -1 ? "Found" : "")


for (let i = 0; i < haystack.length; i++)
{ if (haystack[i] === needle ) {
    console.log("Found")
    break
} 
} 
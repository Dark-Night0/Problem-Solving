
// Regular
function itsMe() {
    return `Iam A Normal Function`;
  }
  
  console.log(itsMe()); // Iam A Normal Function

// Arrow
let itsMeArrow = _ => `Iam A Arrow Function`

console.log(itsMeArrow())

//  Regular
function urlCreate(protocol, web, tld) {
    return `${protocol}://www.${web}.${tld}`;
  }
  
console.log(urlCreate("https", "elzero", "org")); // https://www.elzero.org

// Arrow
let urlCreateArrow = (protocol, web, tld) => `${protocol}://www.${web}.${tld}`

console.log(urlCreateArrow("https", "elzero","org"))
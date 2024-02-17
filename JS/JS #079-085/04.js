
let myFavGames = {
    "Trinity Universe": {
      publisher: "NIS America",
      price: 40,
    },
    "Titan Quest": {
      publisher: "THQ",
      bestThree: {
        one: "Immortal Throne",
        two: "Ragnarök",
        three: "Atlantis",
      },
      price: 50,
    },
    YS: {
      publisher: "Falcom",
      bestThree: {
        one: "Oath in Felghana",
        two: "Ark Of Napishtim",
        three: "origin",
      },
      price: 40,
    },
};

let objectLength = Object.keys(myFavGames).length ;

for (let i = 0 ; i < objectLength ; i++){
    console.log(`My Game is ${Object.keys(myFavGames)[i]}`)
    console.log(`my publisher ${myFavGames[Object.keys(myFavGames)[i]].publisher}`)
    console.log(`my publisher ${myFavGames[Object.keys(myFavGames)[i]].price}`)

    if (myFavGames[Object.keys(myFavGames)[i]].bestThree !== undefined) {
    console.log("- Game Has Releases");
      console.log(`First => ${myFavGames[Object.keys(myFavGames)[i]].bestThree.one}`);
      console.log(`Second => ${myFavGames[Object.keys(myFavGames)[i]].bestThree.two}`);
      console.log(`Third => ${myFavGames[Object.keys(myFavGames)[i]].bestThree.three}`);
    }

    console.log("#".repeat(20))
}
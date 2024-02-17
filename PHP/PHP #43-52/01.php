<?php

function greething ($name , $gender = "Unknown") {

    if ($gender === "Male")
        return "Hello Mr $name" ;
    
    else if ($gender === "Female")
        return "Hello Miss $name" ;
    
    else 
        return "Hello $name";
    
    // return ($gender === "Male") ? "Hello Mr $name" :
    // ($gender === "Female" ) ? "Hello Miss $name" :
    // "Hello $name" ;
}
echo "\n" ;

echo greething("Osama" , "Male") ; // Hello Mr Osama

echo "\n" ;

echo greething("Eman", "Female") ; // Hello Miss Eman

echo "\n" ;

echo greething("Sameh") ; // Hello Sameh


?>
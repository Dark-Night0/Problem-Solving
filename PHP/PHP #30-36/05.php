<?php

$name = "Osama";
$age = 40 ;
$country = "Egypt";

 // if Condition 
if ($age > 18) {echo "The Age Is Good To Go \n";if (gettype($name) === "string"){echo "The Name Is Good To Go \n" ;if ($country === "Egypt"){echo "The Country is Good To Go \n" ;}}}

// short if (Ternary operator)
echo ($age  > 18) ? ( (gettype($name) === "string") ? ($country === "Egypt" ?"The Age Is Good To Go\nThe Name Is Good To Go \nThe Country Is Good To Go\n" 
: "The Age Is Good To Go\nThe Name Is Good To Go \n") 
: "The Age Is Good To Go\n")
: false;


?>
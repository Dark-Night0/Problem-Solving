<?php
function check_status ($a , $b , $c){

    $arr = func_get_args() ;
    
    foreach ($arr as $value) :
    
        if (gettype($value) === "string")
            $name = $value ;
        else if (gettype($value) === "integer" or gettype ($value) === "double")
            $age = (int)$value;
        else if (gettype ($value) === "boolean") 
            $available = $value;
    endforeach;
    
    return ($available)? "Hello $name , Your Age is " . (int)$age . " Are You Available For Hire " :
    "Hello $name , Your Age is " . (int)$age . " Are You Not Available For Hire " ;
}


echo "\n";
echo check_status("Osama", 38, true); // "Hello Osama, Your Age Is 38, You Are Available For Hire"
echo "\n";
echo check_status(38, "Osama", true); // "Hello Osama, Your Age Is 38, You Are Available For Hire"
echo "\n";
echo check_status(true, 38, "Osama"); // "Hello Osama, Your Age Is 38, You Are Available For Hire"
echo "\n";
echo check_status(false, "Osama", 38); // "Hello Osama, Your Age Is 38, You Are Not Available For Hire"

?>
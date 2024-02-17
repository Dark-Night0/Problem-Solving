<?php

$chars = ["e", 1, 2, "l", "z", "E", "R", "o"];

$char = '' ;
foreach($chars as $value => $index) :
    
    if ($index === 0)
        $char .= gettype($value) === "string" ? strtoupper($value) : "" ;
        continue ;
    
    $char .= gettype($value) === "string" ? strtolower($value) : "" ;
    
endforeach;

echo $char ;  // Elzero
?>
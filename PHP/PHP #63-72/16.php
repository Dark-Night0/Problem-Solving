<?php

$mix = ["A", "C", "B", 1, 100, 3, 2, 6, 5, 7];
$solve = [];

foreach ($mix as $value){

    if (gettype($value) === "string")
        continue;
    
    else 
        if (! ($value % 2 == 0))
            array_push($solve , $value);
}

sort($solve);
print_r($solve) . "\n" ;

?>
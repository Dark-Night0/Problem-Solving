<?php

function multiply(...$numbers) {
    
    $result = 1 ;
    
    foreach ($numbers as $num):
    
    if (gettype($num) === "string")
        continue ;
    
    else if (gettype($num) === "integer")
        $result *= $num ;
    else if (gettype($num) === "double")
        $result *= (int)$num ;
    
    endforeach ;
    
    return $result ;
}

echo "\n";
echo multiply(10, 20); // 200

echo "\n";
echo multiply("A", 10, 30); // 300

echo "\n";
echo multiply(100.5, 10, "B"); // 1000


?>
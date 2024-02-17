<?php

function sum_all (...$numbers) {
    
    $result = 0;
    foreach($numbers as $num):
    
    if ($num === 5)
        continue ;
    else if ($num === 10)
        $result += 20 ;
    else 
        $result += $num ;
    
    endforeach ;
    
    return $result ;
}

echo sum_all(10 , 12 , 5 , 6 ,6 ,10) ; // 64

echo "\n\n" ;

echo sum_all(5, 10, 5 , 10 )  ;

?>
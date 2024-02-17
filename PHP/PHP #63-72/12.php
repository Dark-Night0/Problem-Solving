<?php

$nums = [11, 2, 10, 7, 20, 50];

function sum(array $Arr) {
    $sum = 0 ;
    foreach($Arr as $value){
        $sum += $value ;
    }
    return $sum ;
}

echo sum($nums) . "\n"; // 100

?>
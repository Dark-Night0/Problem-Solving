<?php

$nums = [10, 100, -20, 50, 30];

function maximum(array $Array) {

    $temp = $Array[0];
    foreach($Array as $value){
            
        if ($temp > $value)
                continue;
            
            else 
                $temp = $value ;
            
        }
    return $temp ;
}
echo maximum($nums); // 100

?>
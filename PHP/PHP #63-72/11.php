<?php

$arr = ["A", "B", "C", "D", "E"];

function length (array $Array){

    $count= 0;
    foreach($Array as $value)
        $count++ ;
    

    return $count ;
}
    echo length($arr) . "\n"; // 5
?>
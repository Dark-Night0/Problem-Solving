<?php

$mix = [1, 2, "A", "B", "C", "D", 4];
$count_str  = 0 ;
$count_num = 0 ;

foreach ($mix as $value) {

    if (gettype($value) === "string"){
        
        $count_str ++ ;
        continue ;
    }
    $count_num ++ ;
    echo $value  . " \n";
}
echo "\n" ;
echo "$count_num Numbers Printed \n" ;
echo "$coun" ;

?>
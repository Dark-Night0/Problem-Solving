<?php
$num_one = -1;
$num_two = 2.5;

$let_one = "o";
$let_two = "z";

$str = "El%er0";

// Write Your Code Here
$str = str_replace([$str[$num_one] , $str[(int)$num_two]] , [$let_one , $let_two] , $str) ;

echo $str; // Elzero

?>
<?php

$str = file_get_contents("php/elzer2.txt");

file_put_contents("php/elzer2.txt" , str_replace("Osamaa" , "Elzero" , $str));

?>
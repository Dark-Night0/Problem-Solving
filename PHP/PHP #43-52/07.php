<?php

function calculate2(int $num_one,int  $num_two): float{
    return $num_one + $num_two;
}

echo calculate2(20, 10); // 30
echo "\n" ;
echo gettype(calculate2(20, 10)); // Double

?>
<?php

$nums = [5, 10, 20, 5, 30, 40];

echo array_reduce( array_filter( $nums , fn($n) => $n !== 5 ), fn($n1 , $n2) => $n1 + $n2 ) . "\n";

?>
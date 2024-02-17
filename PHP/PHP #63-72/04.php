<?php

$nums = [10, 20, 30];

echo array_reduce( $nums , fn($n1 , $n2) => $n1 + $n2 ) . "\n" ;

function add($n1 , $n2) {

    return $n1 + $n2;
}

echo array_reduce($nums , "add") . "\n";

?>
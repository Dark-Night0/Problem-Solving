<?php

$nums = [1, 2, 3, 4, 5, 6];
$solve = [];

foreach($nums as $value):

    $index = array_rand($nums);
    array_push($solve , $nums[$index]);
    unset($nums[$index]);

endforeach ;
print_r($solve);


?>
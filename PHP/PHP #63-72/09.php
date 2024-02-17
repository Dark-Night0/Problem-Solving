<?php

$nums = [1, 2, 3, 4, 5, 6];

print_r(array_slice($nums , -5 , -2));

// 10
$mix = [1, 2, 3, "A", "B", "C", 7, 8, 9];
$nums = [4, 5, 6];

// Write Your Code Here
array_splice($mix , 3 , -3 , $nums );
print_r($mix);

?>
<?php
$help_num = 3;
$nums = [4, 5, 6, 1, 2, 3];
$names = ["Ahmed", "Sayed", "Osama", "Mahmoud", "Gamal"] ;

for ($value = --$nums[$help_num] ; $value < sizeof($names) ; $value ++) :

    // echo ($names[$value] === "Sayed") ? $names[$value] . "\n" : ($names [$value] === "Osama") ? $names[$value] . "\n": null ;

endfor ;

?>
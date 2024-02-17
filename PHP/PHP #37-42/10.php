<?php

$help_num = 4;
$nums = [2, 4, 5, 6, 10];

$help_num = sizeof($nums) ;

foreach ($nums as $value) :

    --$help_num ;    
    echo "$value + $nums[$help_num] = " . ($value + $nums[$help_num]) . "\n" ;
    
endforeach ;


?>
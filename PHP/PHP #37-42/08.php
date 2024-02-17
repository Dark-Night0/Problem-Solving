<?php

$nums = [1, 13, 12, 20, 51, 17, 30];

foreach ($nums as $value ):
    echo ($value % 2 === 0) ? $value / 2  . "\n": null ;
endforeach ;

?>
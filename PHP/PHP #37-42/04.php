<?php

$start = 10;
$end = 0;
$stop = 3;

for ($temp = $start; $temp > $end ; $temp --):

    echo ($temp >= $start ) ? "$temp \n" : ($temp >= $stop ? "0$temp\n": null);
endfor ;

?>
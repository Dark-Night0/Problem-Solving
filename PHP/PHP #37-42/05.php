<?php
$start = 0;
$mix = [1, 2, 3, "A", "B", "C", 4];

echo "\n\n" ;

for  ($start+=1; $start < sizeof($mix) ; $start ++){

    echo (gettype($mix[$start]) ==="integer") ? $mix[$start] . "\n" : null ;
}

?>
<?php

$date = "1990-10-01";
$old_date= "1970-10-01";
$d1 = date_create($date) ;
$d2 = date_create($old_date) ;

echo "From Epoch Time Till 1990-10-01 Is Approximately " . date_diff($d1 , $d2)->days ." Days" . "\n" ;

echo "From Epoch Time Till 1990-10-01 Is Approximately " .
date_diff($d1 , $d2)->y  ." Years" ;

?>
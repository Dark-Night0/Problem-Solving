<?php

$date = "1990-10-01";
$old_date= "1970-10-01";
date_default_timezone_set("Africa/Cairo");

echo "From Epoch Time Till 1990-10-01 Is Approximately " 
. +(explode("-" , $date)[0] - explode("-" , $old_date)[0]) * 365 ." Days" . "\n";

echo "From Epoch Time Till 1990-10-01 Is Approximately " 
.+(explode("-" , $date)[0] - explode("-" , $old_date)[0]) ." Years" ;

?>
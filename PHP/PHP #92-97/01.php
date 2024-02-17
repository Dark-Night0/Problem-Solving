<?php


date_default_timezone_set("Asia/Riyadh");

echo date_default_timezone_get() ."\n" ; // Asia/Riyadh

$date = date_create();

echo date_format($date , "D, j M y - h:i:s A") ."\n" ;
echo date_format($date ,"l, j F Y - h:i:s A") ."\n" ;


?>
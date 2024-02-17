<?php

$date = "2005-10-02";

date_default_timezone_set("Africa/Cairo");

echo date_default_timezone_get() . "\n";
$d = date_create($date);
date_modify($d ,"+15 hours +15 minute +15 second") ;

echo date_format($d , "Y, F l dS H:i:s") ;

?>
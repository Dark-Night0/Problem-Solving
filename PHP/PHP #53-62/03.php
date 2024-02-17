<?php
$str = 'aAa';
$num = 3;
$char = "_";

echo str_repeat(substr_replace($str , strtolower($str) , -$num) . $char, $num );  // aaa_aaa_aaa_

?>
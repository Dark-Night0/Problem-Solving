<?php

$points =10 ;

++$points ;
++$points ;
++$points ;

echo $points ; // 13

--$points ;
--$points ;
--$points ;
--$points ;
--$points ;
echo "\n";

echo $points; // 8
echo "\n\n";



$a = "Elzero";
$b = "Web";
$c = "School";

// Method One
$d = $a . " " .$b . " " . $c;

// Method Two
$d = "$a $b $c";

// Method Three
$d = "{$a} {$b} {$c}";

// Method Four
$d = sprintf("%s %s %s" , $a , $b , $c);

echo $d; // Elzero Web School
echo "\n\n";

?>
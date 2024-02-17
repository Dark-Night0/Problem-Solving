<?php

$a = "10" ;

echo +$a; // 10
echo "\n";
echo gettype(+$a) ; // integer
echo "\n";
echo "\n";


settype($a , 'int') ; // convert Variable To Integer
echo $a ; // 10
echo "\n";
echo gettype($a) ; // Integer
echo "\n";
echo "\n";

echo (int)$a ; // 10
echo "\n";
echo gettype((int)$a); // Integer
echo "\n";
echo "\n";

echo -(-$a);
echo "\n";
echo gettype(-(-$a)) ;
echo "\n";
echo "\n";

echo (integer)$a ;
echo "\n" ;
echo gettype((integer)$a);
echo "\n" ;
echo "\n" ;
?>
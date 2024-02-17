<?php


function calculate($num1 , $num2 , $op ="add") {

    switch ($op) {
    
    case 'a' :
    case 'add':
    return $num1 + $num2 ;
    
    case 's':
    case 'subtract':
    return $num1 - $num2 ;
    
    case 'm':
    case 'multiply':
    return $num1 * $num2 ;
    
    default :
        return "This Process Does Not Exist" ;
    
    }


}

echo "\n\n";
echo calculate(10, 20); // 30
echo "\n";
echo calculate(10, 20, "a"); // 30
echo "\n";
echo calculate(10, 20, "s"); // -10
echo "\n";
echo calculate(10, 20, "subtract"); // -10
echo "\n";
echo calculate(10, 20, "multiply"); // 200
echo "\n";
echo calculate(10, 20, "m"); // 200
echo "\n";
echo calculate(10 ,20 ,'d') ; //This Process Does Not Exist

?>
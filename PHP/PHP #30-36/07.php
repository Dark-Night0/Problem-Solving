<?php
$num_one = 23 ;
$num_two = 5 ;
$op = '/' ;


   switch ($op) :

    case '+' :
        echo "$num_one + $num_two = " . ($num_one + $num_two) ;
        break ;
    
    case '-' :
        echo "$num_one - $num_two = " . ($num_one - $num_two) ;
        break ;

    case '*' :
        echo "$num_one * $num_two = " . ($num_one * $num_two) ;
        break ;
        
    case '/':
        echo "$num_one / $num_two = " . (int)($num_one / $num_two) . "\n" ;
        echo "$num_one % $num_two = " . ($num_one % $num_two) . "\n" ;
        
        break ;

    default :
    echo "Unknown Operator \n";

endswitch ;

?>
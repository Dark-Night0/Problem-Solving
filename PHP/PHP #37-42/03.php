<?php
$num = 2 ;

while ($num < 520){
    
    if ($num == 2 ):
        echo $num - 1 . "\n";
        $num *= 2 ; 
        continue ;
    endif;
    
    echo $num  .  "\n";
    $num *= 2 ;
    $num += 2 ;
    
}

?>
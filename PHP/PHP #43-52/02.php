<?php

function get_argument(...$names) {
    $resutl ='' ;
    foreach ($names as $name):
        $resutl .= $name  ;
        $resutl .= " " ;
    endforeach ;
    return $resutl ;
}

function get_argument2(){

    $result = '';
    for ($i = 0 ; $i < func_num_args() ; $i++):
        $result .= func_get_arg($i) ;
        $result .= " " ;
    endfor;
    return $result ;
}

echo get_argument("Hello" , "Elzero" , "Web" , "School") ;


?>
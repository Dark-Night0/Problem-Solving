<?php

$path = "Programmer/PHP";
$temp = $path[-1] === '/' ? rtrim($path , '/')  : $path ;

mkdir($path , 0711 , true);

foreach (array_reverse(explode('/' , $temp)) as $dir){

    if(file_exists($temp)){
        
        $temp = rtrim($temp , '/');
        rmdir($temp);
        echo "Directory $temp Removed" . "\n";
        
        $temp = str_replace("$dir" , '' , $temp);   
    }
    
}
?>
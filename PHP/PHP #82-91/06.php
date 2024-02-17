<?php

// 1
foreach(file("php/elzero.txt" , FILE_IGNORE_NEW_LINES) as $key => $word){

    if ($key == count(file("php/elzero.txt")) -1)
        break;
    
    echo "$word "; // Hello Elzero Web School

}echo "\n";

// 2
$st = file("php/elzero.txt");
array_pop($st);
echo str_replace("\n" , ' ' , implode('', $st)) . "\n"; //  Hello Elzero Web School

// 3 , 4
$handle = fopen("php/elzero.txt" , 'r' ) ;

    // 3
    $str = fgets($handle)  . fgets($handle)  ;
    echo str_replace("\n" , " " ,$str) . "\n";
    
    rewind($handle);
    // 4
    echo rtrim(fgets($handle) , "\n") . " " . fgets($handle);

fclose($handle);

?>
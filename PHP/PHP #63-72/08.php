<?php

$chars = ["A", "B", "C"];

// array_push($chars , "D") ; // 1

// print_r(array_merge($chars , ["D"])); // 2

// array_unshift($chars , "D");
// sort($chars); // 3

array_splice($chars , 3 , 1 , "D"); // 4

print_r($chars);

?>
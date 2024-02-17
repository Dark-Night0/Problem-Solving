<?php

$path = "/home/dark/Videos/LearnPHP8InArabic2022-#082-FileSystemFunctionParOne4Functions.mp4";

if (file_exists($path) ){

    echo  "Size In Megabyte Is " . round(filesize($path) / 1024 ** 2 ) . "\n";

    echo  "Size In Kilobyte Is " . round(filesize($path) / 1024 ) . "\n";
}
else 
    echo "Not Found Path";


?>
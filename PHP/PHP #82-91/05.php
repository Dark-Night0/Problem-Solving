<?php

echo basename("index.php") . "\n"; // index.php
echo pathinfo("index.php" , PATHINFO_FILENAME) . "." . pathinfo("index.php" , PATHINFO_EXTENSION) . "\n" ; // index.php
echo implode( "",glob("index.php")); // index.php
echo implode(array_filter(explode("/" , __FILE__) , fn($file) => $file == "index.php")); // index.php

?>
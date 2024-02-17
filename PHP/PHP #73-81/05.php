<?php

$url1 = "http://www.elz ero.org";
$url2 = "http://¥elzero.org";
$url3 = "https://elzero.org";
$url4 = "https://elzero.o¥rg";

echo filter_var($url1 ,FILTER_VALIDATE_URL , FILTER_NULL_ON_FAILURE ) == null ? "Not A Valid URL" :'' ;
echo "\n";

echo filter_var($url2 ,FILTER_VALIDATE_URL , FILTER_NULL_ON_FAILURE ) == null ? "Not A Valid URL" :'' ;
echo "\n";

echo filter_var($url3 ,FILTER_VALIDATE_URL , FILTER_NULL_ON_FAILURE ) == null ? '': "A Valid URL";
echo "\n";

echo filter_var($url4 ,FILTER_VALIDATE_URL , FILTER_NULL_ON_FAILURE ) == null ? "Not A Valid URL" :'' ;

?>
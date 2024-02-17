<?php

// In My Case i I Am Using Linux
echo round(diskfreespace("/") / 1024 ** 4 , 2) . " Terabyte \n";

echo round(diskfreespace("/home") / 1024 ** 4 , 2) . " Terabyte \n";

echo round(diskfreespace("/dev") / 1024 ** 4 , 2) . " Terabyte \n";

// I Think I Your Case , If U Using Windows Cancel Selected Comment in down 
// echo round(diskfreespace("C:") / 1024 ** 4 , 2) . " Terabyte \n";

// echo round(diskfreespace("D:") / 1024 ** 4 , 2) . " Terabyte \n";

?>
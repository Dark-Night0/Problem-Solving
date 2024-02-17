<?php
$day = "Tun" ;

if ($day === "Sat" or $day === "Sun" or $day === "Mon")
    echo "We Are Open All The Day \n";

else if ($day === "Tun" or $day === "Wed")
    echo "We Are Open From 08:12";
    
else if ($day === "Tun" or $day === "Fir")
    echo "We Are Closed " ;
else 
    echo "Unknown Day";

?>
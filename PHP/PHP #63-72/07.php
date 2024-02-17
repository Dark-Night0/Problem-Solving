<?php

$names = ["Osama", "Ahmed", "Sayed", "Mahmoud", "Ali"];

// Write Line Here
next($names) ;
// Write Line Here
next($names) ;

echo current($names) . "\n"; // "Sayed"

// Write Line Here
end($names);

echo current($names) . "\n"; // "Ali"

// Write Line Here
reset($names);

echo current($names) . "\n"; // "Osama"

// Write Line Here
end($names);

// Write Line Here
prev($names);

echo current($names) . "\n\n"; // "Mahmoud"

?>
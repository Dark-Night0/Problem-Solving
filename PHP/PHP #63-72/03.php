<?php

$friends = [
    "Ahmed Gamal" => "AG",
    "Osama Mohamed" => "OM",
    "Mahmoud Gamal" => "MG",
    "Ahmed Samy" => "AS"
];

print_r(array_reverse(array_change_key_case(array_flip($friends)))) ;

?>
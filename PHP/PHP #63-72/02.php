<?php

$codes = ["H", "C", "J"];
$means = ["HTML", "CSS", "JavaScript"];

print_r(array_combine(array_keys(array_change_key_case(array_flip($codes))),$means));

?>
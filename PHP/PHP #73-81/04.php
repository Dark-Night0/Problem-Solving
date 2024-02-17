<?php

$list =[];
foreach(filter_list() as $value){
    $list[filter_id($value)] = $value;
}

print_r($list);

?>
<?php

function change_permissions(string $file){

    if (file_exists($file)){

        if (is_dir($file)){
            echo "This Is Directory And Only Files Allowed \n";
            
        }
        else{
        
            if (pathinfo($file , PATHINFO_EXTENSION) === 'txt'){
                chmod ($file , 0700);
                echo "Permissions Changed \n";

                // Display The File Permission
                clearstatcache();
                echo "The File Permission " . substr(decoct(fileperms($file)) , 2, 4) . "\n";
            
            }else 
                echo "File Extension Is Not Txt \n";
        }
    }else
        echo "Error Path !";
}

echo change_permissions("/php/Functions") . "\n" ;     // This Is Directory And Only Files Allowed
echo change_permissions("/php/Functions.php") . "\n" ; // File Extension Is Not Txt
echo change_permissions("/php/Functions.txt") . "\n" ; // Permissions Changed

?>
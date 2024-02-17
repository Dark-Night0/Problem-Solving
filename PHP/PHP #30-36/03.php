<?php


$admins = ["Osama", "Ahmed", "Sayed"];

if ($_SERVER["REQUEST_METHOD"] === "POST"){

    if ($_POST["user"] === $admins[0])
        echo "This Username $admins[0] is Admin";

    else if ($_POST["user"] === $admins [1])
        echo "This Username $admins[1] is Admin";

    else if ($_POST["user"] === $admins[2])
        echo "This Username $admins[2] is Admin";
}
?>

    <form action="" method="POST">
        <input type="text" name="user">
        <input type="submit" value="Send">
    </form>
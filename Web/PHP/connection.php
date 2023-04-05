<?php

$dbhost = "localhost";
$dbuser = "root";
$dbpass = "a194369672";
$dbname = "login";

if(!$con = mysqli_connect($dbhost,$dbuser,$dbpass,$dbname))
{
	die("failed to connect!");
}
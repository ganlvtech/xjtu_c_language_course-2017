<?php

require_once __DIR__ . '/inc/common.php';

for ($username_i = 100001; $username_i <= 100020; ++$username_i) {
    $username = '2150' . $username_i;
    include INCLUDE_DIR . '/login.php';
    include INCLUDE_DIR . '/enrol.php';
    include INCLUDE_DIR . '/submit.php';
}

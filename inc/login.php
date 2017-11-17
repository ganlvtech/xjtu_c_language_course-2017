<?php

require_once __DIR__ . '/common.php';

if (!isset($username)) {
    $username = '2150100001';
}

$password = $username;

try {
    output('正在登录，学号：' . $username);
    $postfields = http_build_query([
        'username' => $username,
        'password' => $password,
        'testcookies' => '1',
    ]);
    $html = curl(BASE_URL . '/login/index.php', $postfields, '登录失败');
    $login_info = match('@<div class="logininfo">(.*?)</div>@', $html, '登录后页面异常')[1];
    $login_info = html_to_text($login_info);
    output('登录成功');
    output($login_info);
    output_spliter();
} catch (Exception $e) {
    output($e->getMessage());
}

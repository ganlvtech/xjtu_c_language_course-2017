<?php

define('BASE_DIR', dirname(__DIR__));
define('INCLUDE_DIR', BASE_DIR . '/inc');
define('DATA_DIR', BASE_DIR . '/data');
define('DATA_KEYS_DIR', DATA_DIR . '/keys');
define('RUNTIME_DIR', BASE_DIR . '/runtime');
define('COURSE_ID', '135');
define('BASE_URL', 'http://202.117.35.169/moodle');
define('COOKIE_FILE', RUNTIME_DIR . '/cookie.txt');

function curl($url, $postfields = null, $err_msg = '发送请求失败')
{
    $ch = curl_init();
    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_COOKIEFILE, COOKIE_FILE);
    curl_setopt($ch, CURLOPT_COOKIEJAR, COOKIE_FILE);
    if (substr($url, 0, 8) === 'https://') {
        curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
    }
    if (!is_null($postfields)) {
        curl_setopt($ch, CURLOPT_POST, true);
        curl_setopt($ch, CURLOPT_POSTFIELDS, $postfields);
    }
    curl_setopt($ch, CURLOPT_ENCODING, 'gzip,deflate');
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, true);
    curl_setopt($ch, CURLOPT_MAXREDIRS, 10);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    $content = curl_exec($ch);
    curl_close($ch);
    if (false === $content) {
        throw new Exception($err_msg . curl_getinfo($ch));
    }
    return $content;
}

function &match($pattern, $subject, $err_msg = '正则匹配错误')
{
    if (1 !== preg_match($pattern, $subject, $matches)) {
        throw new Exception($err_msg);
    }
    return $matches;
}

function &match_all($pattern, $subject, $err_msg = '正则匹配错误')
{
    if (false === preg_match_all($pattern, $subject, $matches, PREG_SET_ORDER)) {
        throw new Exception($err_msg);
    }
    return $matches;
}

function html_to_text($html)
{
    return trim(preg_replace('/[\s\0\x0B\xC2\xA0]+/su', ' ', html_entity_decode(preg_replace('/<.*?>/su', ' ', $html))));
}

function output($str)
{
    echo $str, "\n";
}

function output_spliter($n = 80)
{
    output(str_repeat('=', $n));
}

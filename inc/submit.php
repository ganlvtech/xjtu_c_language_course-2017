<?php

require_once __DIR__ . '/common.php';

$list = include RUNTIME_DIR . '/list.php';

try {
    output('正在提交作业');
    output_spliter(50);
    foreach ($list as $item) {
        output("{$item['filename']}\t{$item['id']}\t{$item['title']}");
        $html = curl($item['url'], null, '打开提交页面失败');
        $part = match('@<form enctype="multipart/form-data" method="post" action="http://202.117.35.169/moodle/mod/assignment/upload.php">(.*?)</form>@su', $html, '获取表单内容')[1];
        $id = match('@<input type="hidden" name="id" value="(.*?)" />@', $part, '获取id失败')[1];
        $sesskey = match('@<input type="hidden" name="sesskey" value="(.*?)" />@', $part, '获取sesskey失败')[1];
        $postfields = [
            'id' => $id,
            'sesskey' => $sesskey,
            'newfile' => curl_file_create(realpath(DATA_KEYS_DIR . '/' . $item['filename'])),
            // 'newfile' => curl_file_create(realpath(DATA_KEYS_DIR . '/0101.c')),
        ];
        $html = curl(BASE_URL . '/mod/assignment/upload.php', $postfields, '上传文件失败');
        $result = match('@<h2\s+?class="main">(.*?)</h2>@su', $html, '获取上传结果失败')[1];
        output($result);
        output_spliter(50);
    }
    output_spliter();
} catch (Exception $e) {
    output($e->getMessage());
}

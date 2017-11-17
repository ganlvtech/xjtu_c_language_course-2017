<?php

require_once __DIR__ . '/common.php';

try {
    output('正在注册课程');
    $html = curl(BASE_URL . '/course/enrol.php?id=' . COURSE_ID, null, '打开注册页面失败');
    if (false !== strpos($html, '教学资料')) {
        output('已经注册过本课程了');
        return;
    }
    $sesskey = match('@<input type="hidden" name="sesskey" value="(.*?)" />@', $html, '获取sesskey错误')[1];
    $postfields = http_build_query([
        'id' => COURSE_ID,
        'password' => 'yangqi',
        'enrol' => 'manual',
        'sesskey' => $sesskey,
    ]);
    $html = curl(BASE_URL . '/moodle/course/enrol.php', $postfields, '注册失败');
    output('注册课程成功');
    output_spliter();
} catch (Exception $e) {
    output($e->getMessage());
}

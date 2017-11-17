<?php

require_once __DIR__ . '/common.php';

try {
    output('正在获取作业列表');
    $html = curl(BASE_URL . '/mod/assignment/index.php?id=135', null, '获取作业列表失败');
    $links = match_all('@<a\s+href="view\.php\?id=(\d*?)">(.*?)</a>@su', $html, '匹配作业链接失败');
    output('获取作业列表成功');
    $questions = [];
    $question_list = '';
    foreach ($links as $link) {
        $id = $link[1];
        $url = BASE_URL . '/mod/assignment/view.php?id=' . $id;
        $title = $link[2];
        $html = curl($url, null, '获取题目描述失败');
        $matches = match('@<div id="intro".*?><p>(.*?)</p>@su', $html, '匹配题目描述失败');
        $questions[$id] = [
            'id' => $id,
            'url' => $url,
            'title' => $title,
            'description' => $matches[1],
        ];
        $question_list .= "*.c\t$id\t{$title}\n";
        output("{$id}\t{$title}");
    }
    output('输出作业信息');
    file_put_contents(RUNTIME_DIR . '/questions.php', '<?php return ' . var_export($questions, true) . ';');
    output('输出作业对应文件模板');
    file_put_contents(RUNTIME_DIR . '/question_list.txt.example', $question_list);
    output('获取作业列表完毕');
    output_spliter();
} catch (Exception $e) {
    output($e->getMessage());
}

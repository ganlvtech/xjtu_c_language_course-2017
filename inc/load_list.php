<?php

require_once __DIR__ . '/common.php';

output('开始解析题目的文件名列表');
$content = file_get_contents(DATA_DIR . '/question_list.txt');
$question_list = explode("\n", trim($content));
$questions = include RUNTIME_DIR . '/questions.php';
foreach ($question_list as $item) {
    $item_data = explode("\t", trim($item), 3);
    $filename = $item_data[0];
    $id = $item_data[1];
    $title = $item_data[2];
    $questions[$id]['filename'] = $filename;
    output("{$filename}\tid={$id}\t{$title}");
}
file_put_contents(RUNTIME_DIR . '/list.php', '<?php return ' . var_export($questions, true) . ';');
output('解析题目的文件名列表完毕');
output_spliter();

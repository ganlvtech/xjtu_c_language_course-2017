<?php
require_once __DIR__ . '/inc/common.php';
$list = include RUNTIME_DIR . '/list.php';
?>
<meta charset="UTF-8">

<div class="wrapper" style="
    position: absolute;
    left: 0;
    top: 0;
    right: 0;
    z-index: 2147483647;
    background-color: #fbf7ef;
    padding: 1em;
">
    <div class="container" style="
        padding-left: 20%;
    ">
        <a href="http://dwzzb.xjtu.edu.cn/xxsjd.htm">
            <img src="http://www.xjtu.edu.cn/images/14/12/11/1tf5znre9c/2017110301.jpg" style="width: 100%;">
        </a>
        <h1 class="title" style="
            margin: 0;
            padding: 1em 0;
            border-bottom: 1px solid #ccc;
            text-align: center;
        ">
            <a style="
                color: #000;
            " href="<?= BASE_URL ?>/mod/assignment/index.php?id=135">核工程51能动B51: Assignments</a> 参考答案
        </h1>

        <div class="attachment" style="
            text-align: right;
        ">
            <a href="<?= BASE_URL ?>/file.php/blog/attachments/15/keys.zip" target="_blank" style="
                display: inline-block;
                margin: 1em 0;
                padding: 1.5em 3em;
                background-color: #38f;
                color: #fff;
                border-radius: 8px;
                font-weight: bold;
                text-decoration: none;
                box-shadow: 1px 1px 1px rgba(0,0,0,.4);
            ">
                下载代码：keys.zip
            </a>
        </div>

        <div class="menu" style="
            position: fixed;
            top: 0;
            left: 0;
            width: 20%;
            bottom: 0;
            background-color: #eee;
            border-right: 1px solid #000;
            overflow-y: auto;
        ">
            <h2 style="margin: .5em 1em;">目录</h2>
            <ol>
                <?php
                $i = 0;
                foreach ($list as $item) :
                    ?>
                    <li><a style="color: #000;" href="#question-<?= $item['id'] ?>"><?= htmlentities($item['title']) ?></a></li>
                    <?php
                    ++$i;
                endforeach;
                ?>
            </ol>
        </div>
        <div class="main-content">
            <?php
            foreach ($list as $item) :
                $content = file_get_contents(DATA_KEYS_DIR . '/' . $item['filename']);
                $description = $item['description'];
                $description = str_replace("<br />\n", "\n", $description);
                $description = str_replace('<br />', "\n", $description);
                ?>
                <div class="question" style="
                    margin-top: 2em;
                ">
                    <h2 class="question-title" id="question-<?= $item['id'] ?>" style="
                        border-left: 8px solid #0f0;
                        background-color: #fcfdfe;
                        box-shadow: 0 1px 1px #666;
                        padding: 1em .5em;
                    ">
                        <a style="
                            color: #000;
                        " href="<?= htmlentities($item['url']) ?>" target="_blank"><?= htmlentities($item['title']) ?></a>
                        <span style="
                            margin-left: .5em;
                            font-size: .8em;
                            color: #999;
                        "><?= htmlentities($item['filename']) ?></span>
                    </h2>
                    <pre class="question-description" style="
                        padding: 1em;
                        background-color: #f9f9f9;
                        max-width: 100%;
                        white-space: pre-wrap;
                    "><?= htmlentities($description) ?></pre>
                    <pre class="question-code" style="
                        padding: 1em;
                        background-color: #f0f0f0;
                        max-width: 100%;
                        overflow-x: auto;
                    "><code class="cpp"><?= htmlentities($content) ?></code></pre>
                </div>
                <?php
            endforeach;
            ?>
        </div>
    </div>
</div>

<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/styles/default.min.css">
<script src="https://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/highlight.min.js"></script>
<script>hljs.initHighlightingOnLoad();</script>

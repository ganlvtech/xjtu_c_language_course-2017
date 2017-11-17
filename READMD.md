# 核工程51能动B51: Assignments 参考答案

<http://202.117.35.169/moodle/mod/assignment/index.php?id=135>

## 使用方法

### 准备阶段（获取题目信息）

1. `php inc/login.php`

2. `php inc/enrol.php`

3. `php inc/crawl.php`

4. `cp runtime/question_list.txt.example data/question_list.txt`

5. 修改`data/question_list.txt`

6. `php inc/load_list.php`

### 生成页面

1. `php index.php > index.html`

2. 使用浏览器打开`index.html`，使用浏览器的F12开发者工具把`.wrapper`块复制粘贴到`index.html`

3. `composer install`

4. `php index-highlight.php > index-highlight.html`

### 自动提交

1. `php server.php`

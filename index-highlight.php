<?php
require 'vendor/autoload.php';

use TijsVerkoyen\CssToInlineStyles\CssToInlineStyles;

$cssToInlineStyles = new CssToInlineStyles();

$html = file_get_contents(__DIR__ . '/index.html');
$css = file_get_contents('http://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/styles/default.min.css');

$html = $cssToInlineStyles->convert(
    $html,
    $css
);

echo $html;

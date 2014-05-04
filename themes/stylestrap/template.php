<?php

/**
 * @file template.php
 */
function stylestrap_preprocess_html(&$vars) {
  $node = menu_get_object();

  if ($node && $node->nid) {
    $vars['theme_hook_suggestions'][] = 'html__' . $node->type;
  }
}
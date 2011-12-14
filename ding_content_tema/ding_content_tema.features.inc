<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ding_content_tema_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ding_content_tema_node_info() {
  $items = array(
    'static_tema_page' => array(
      'name' => t('Statisk temaside'),
      'module' => 'features',
      'description' => t('Til oprettelse af statiske tema sider. Disse sider kan tilknyttes et menu punkt på en givet tema site.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '1',
      'body_label' => t('Brødtekst'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'tema_site' => array(
      'name' => t('Temasite'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ding_content_tema_views_api() {
  return array(
    'api' => '2',
  );
}

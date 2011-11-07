<?php
/**
 * Implementation of hook_panels_layouts()
 */
function ding_panels_tema_threecol_left_stacked_tema_site_panels_layouts() {
  $items = array();
  $items['threecol_left_stacked_tema_site'] = array(
    'title' => t('Three column left stacked wide left (tema site)'),
    'icon' => 'threecol_left_stacked_tema_site.png',
    'theme' => 'panels_threecol_left_stacked_tema_site',
    'css' => 'threecol_left_stacked_tema_site.css',
    'panels' => array(
      'top' => t('Top'),
      'description' => t('Description'),
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side'),
      'bottom' => t('Bottom'),
    ),
  );
  return $items;
}


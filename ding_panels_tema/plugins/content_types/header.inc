<?php
/**
 * @file
 * Provides a tema site panels content type.
 */

$plugin = array(
  'single' => TRUE,
  'category' => t('Tema page'),
  'title' => t('Tema header and navigation menu'),
  'description' => t('The title image, title and navigation menu for a tema page.'),
  'required context' => array(
    new ctools_context_required(t('Tema node'), 'node'),
    new ctools_context_optional(t('Content node'), 'node'),
  ),
);

/**
 * Callback function to supply a list of content types.
 *
 * This is only required to make CTools know that we're providing 
 * multiple types here (since we have no single => TRUE in the array).
 */
function ding_panels_tema_header_ctools_content_types() {
  return array(
    'title' => t('Tema page'),
  );
}

/**
 * Return the pane contents.
 */
function ding_panels_tema_header_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $tema_node = isset($context[0]->data) ? $context[0]->data : NULL;
  $content_node = isset($context[1]->data) ? $context[1]->data : NULL;

  // If provided a content node via context, check if the content node 
  // also has a library reference. If it does, return an empty block, 
  // since we don't want both library navigation and tema site navigation.
  if (!empty($content_node) && !empty($content_node->field_library_ref[0]['nid'])) {
    return $block;
  }

  switch($subtype) {
    case 'tema_header':
      if ($tema_node->type == 'tema_site') {
        $block->content = theme('ding_panels_tema_content_header', $tema_node, $conf);
      }
      break;
  }
  return $block;
}

/**
 * Return the pane titles.
 */
function ding_panels_tema_header_content_type_admin_title($subtype, $conf, $context) {
  switch($subtype) {
    case 'tema_header':
      return t('Tema site header');
  }
}

/**
 * Returns an edit form for the content type.
 */
function ding_panels_tema_header_content_type_edit_form(&$form, &$form_state) {
  $form['display_header_image'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display header image'),
    '#description' => t('Whether a the library title should show the (quite large) picture of the library.'),
    '#default_value' => $form_state['conf']['display_header_image'],
  );
}

/**
 * Submit handler for the content type editing form.
 */
function ding_panels_tema_header_content_type_edit_form_submit(&$form, &$form_state) {
    $form_state['conf']['display_header_image'] = (bool) $form_state['values']['display_header_image'];
}

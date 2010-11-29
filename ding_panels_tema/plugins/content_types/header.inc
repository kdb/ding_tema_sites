<?php
// $Id$

/**
 * @file library.inc
 * Provides several tema related panels content types.
 */


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
 * Callback function to supply a list of content types.
 */
function ding_panels_tema_header_content_type_content_types() {
  $types = array(
    'tema_header' => array(
      'category' => t('Tema page'),
      'title' => t('Tema header and navigation menu'),
      'description' => t('The title image, title and navigation menu for a tema page.'),
      'required context' => new ctools_context_required(t('Node'), 'node'),
    ),
  );

  return $types;
}

/**
 * Return the pane contents.
 */
function ding_panels_tema_header_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $node = isset($context->data) ? drupal_clone($context->data) : NULL;
  switch($subtype) {
    case 'tema_header':
      if ($node->type == 'tema_site') {
        $block->content = theme('ding_panels_tema_content_header', $node);
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
      return t('"@s":  Tema header', array('@s' => $context->identifier));
  }
}

/**
 * Returns an edit form for the content type.
 */
function ding_panels_tema_header_content_type_edit_form(&$form, &$form_state) {
}

/**
 * Submit handler for the content type editing form.
 */
function ding_panels_tema_header_content_type_edit_form_submit(&$form, &$form_state) {
}
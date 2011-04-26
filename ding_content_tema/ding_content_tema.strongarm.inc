<?php

/**
 * Implementation of hook_strongarm().
 */
function ding_content_tema_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_static_tema_page';
  $strongarm->value = 0;

  $export['comment_anonymous_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_tema_site';
  $strongarm->value = 0;

  $export['comment_anonymous_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_static_tema_page';
  $strongarm->value = '3';

  $export['comment_controls_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_tema_site';
  $strongarm->value = '3';

  $export['comment_controls_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_static_tema_page';
  $strongarm->value = '4';

  $export['comment_default_mode_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_tema_site';
  $strongarm->value = '4';

  $export['comment_default_mode_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_static_tema_page';
  $strongarm->value = '1';

  $export['comment_default_order_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_tema_site';
  $strongarm->value = '1';

  $export['comment_default_order_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_static_tema_page';
  $strongarm->value = '50';

  $export['comment_default_per_page_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_tema_site';
  $strongarm->value = '50';

  $export['comment_default_per_page_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_static_tema_page';
  $strongarm->value = '0';

  $export['comment_form_location_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_tema_site';
  $strongarm->value = '0';

  $export['comment_form_location_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_static_tema_page';
  $strongarm->value = '1';

  $export['comment_preview_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_tema_site';
  $strongarm->value = '1';

  $export['comment_preview_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_static_tema_page';
  $strongarm->value = '0';

  $export['comment_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_static_tema_page';
  $strongarm->value = '1';

  $export['comment_subject_field_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_tema_site';
  $strongarm->value = '1';

  $export['comment_subject_field_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_tema_site';
  $strongarm->value = '0';

  $export['comment_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_static_tema_page';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '2',
    'author' => '5',
    'options' => '6',
    'comment_settings' => '7',
    'menu' => '4',
    'path' => '8',
  );

  $export['content_extra_weights_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_tema_site';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'comment_settings' => '4',
    'menu' => '0',
    'path' => '5',
  );

  $export['content_extra_weights_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_static_tema_page';
  $strongarm->value = '0';

  $export['language_content_type_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_tema_site';
  $strongarm->value = '0';

  $export['language_content_type_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_static_tema_page';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_static_tema_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tema_site';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_tema_site'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_static_tema_page_pattern';
  $strongarm->value = '[panels_subsites_prefix]/[panels_subsites_slug]/[title-raw]';

  $export['pathauto_node_static_tema_page_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_tema_site_pattern';
  $strongarm->value = '[panels_subsites_prefix]/[panels_subsites_slug]';

  $export['pathauto_node_tema_site_pattern'] = $strongarm;
  return $export;
}

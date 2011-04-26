<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ding_content_tema_user_default_permissions() {
  $permissions = array();

  // Exported permission: configure sub-sites
  $permissions['configure sub-sites'] = array(
    'name' => 'configure sub-sites',
    'roles' => array(
      '0' => 'redaktør (AKB)',
      '1' => 'super-admin',
    ),
  );

  // Exported permission: configure sub-sites refs
  $permissions['configure sub-sites refs'] = array(
    'name' => 'configure sub-sites refs',
    'roles' => array(
      '0' => 'super-admin',
    ),
  );

  // Exported permission: configure sub-sites slugs
  $permissions['configure sub-sites slugs'] = array(
    'name' => 'configure sub-sites slugs',
    'roles' => array(
      '0' => 'redaktør (AKB)',
      '1' => 'super-admin',
    ),
  );

  // Exported permission: configure sub-sites users
  $permissions['configure sub-sites users'] = array(
    'name' => 'configure sub-sites users',
    'roles' => array(
      '0' => 'super-admin',
    ),
  );

  // Exported permission: create static_tema_page content
  $permissions['create static_tema_page content'] = array(
    'name' => 'create static_tema_page content',
    'roles' => array(
      '0' => 'formidler',
      '1' => 'redaktør (AKB)',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: create tema_site content
  $permissions['create tema_site content'] = array(
    'name' => 'create tema_site content',
    'roles' => array(
      '0' => 'redaktør (AKB)',
      '1' => 'super-admin',
    ),
  );

  // Exported permission: delete any static_tema_page content
  $permissions['delete any static_tema_page content'] = array(
    'name' => 'delete any static_tema_page content',
    'roles' => array(
      '0' => 'formidler',
      '1' => 'redaktør (AKB)',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: delete any tema_site content
  $permissions['delete any tema_site content'] = array(
    'name' => 'delete any tema_site content',
    'roles' => array(
      '0' => 'redaktør (AKB)',
      '1' => 'super-admin',
    ),
  );

  // Exported permission: delete own static_tema_page content
  $permissions['delete own static_tema_page content'] = array(
    'name' => 'delete own static_tema_page content',
    'roles' => array(
      '0' => 'formidler',
      '1' => 'redaktør (AKB)',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: delete own tema_site content
  $permissions['delete own tema_site content'] = array(
    'name' => 'delete own tema_site content',
    'roles' => array(
      '0' => 'redaktør (AKB)',
      '1' => 'super-admin',
    ),
  );

  // Exported permission: edit any static_tema_page content
  $permissions['edit any static_tema_page content'] = array(
    'name' => 'edit any static_tema_page content',
    'roles' => array(
      '0' => 'formidler',
      '1' => 'redaktør (AKB)',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: edit any tema_site content
  $permissions['edit any tema_site content'] = array(
    'name' => 'edit any tema_site content',
    'roles' => array(
      '0' => 'formidler',
      '1' => 'redaktør (AKB)',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: edit field_tema_description
  $permissions['edit field_tema_description'] = array(
    'name' => 'edit field_tema_description',
    'roles' => array(
      '0' => 'formidler',
      '1' => 'redaktør (AKB)',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: edit field_tema_image
  $permissions['edit field_tema_image'] = array(
    'name' => 'edit field_tema_image',
    'roles' => array(
      '0' => 'formidler',
      '1' => 'redaktør (AKB)',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: edit field_tema_ref
  $permissions['edit field_tema_ref'] = array(
    'name' => 'edit field_tema_ref',
    'roles' => array(
      '0' => 'formidler',
      '1' => 'redaktør (AKB)',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: edit own static_tema_page content
  $permissions['edit own static_tema_page content'] = array(
    'name' => 'edit own static_tema_page content',
    'roles' => array(
      '0' => 'formidler',
      '1' => 'redaktør (AKB)',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: edit own tema_site content
  $permissions['edit own tema_site content'] = array(
    'name' => 'edit own tema_site content',
    'roles' => array(
      '0' => 'formidler',
      '1' => 'redaktør (AKB)',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: view field_tema_description
  $permissions['view field_tema_description'] = array(
    'name' => 'view field_tema_description',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: view field_tema_image
  $permissions['view field_tema_image'] = array(
    'name' => 'view field_tema_image',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super-admin',
    ),
  );

  // Exported permission: view field_tema_ref
  $permissions['view field_tema_ref'] = array(
    'name' => 'view field_tema_ref',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super-admin',
    ),
  );

  return $permissions;
}

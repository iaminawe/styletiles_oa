<?php
/**
 * @file
 * st_tiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function st_tiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create style_tile content'.
  $permissions['create style_tile content'] = array(
    'name' => 'create style_tile content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any style_tile content'.
  $permissions['delete any style_tile content'] = array(
    'name' => 'delete any style_tile content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own style_tile content'.
  $permissions['delete own style_tile content'] = array(
    'name' => 'delete own style_tile content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in tile_tags'.
  $permissions['delete terms in tile_tags'] = array(
    'name' => 'delete terms in tile_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any style_tile content'.
  $permissions['edit any style_tile content'] = array(
    'name' => 'edit any style_tile content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own style_tile content'.
  $permissions['edit own style_tile content'] = array(
    'name' => 'edit own style_tile content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in tile_tags'.
  $permissions['edit terms in tile_tags'] = array(
    'name' => 'edit terms in tile_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view style guides'.
  $permissions['view style guides'] = array(
    'name' => 'view style guides',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'styleguide',
  );

  return $permissions;
}

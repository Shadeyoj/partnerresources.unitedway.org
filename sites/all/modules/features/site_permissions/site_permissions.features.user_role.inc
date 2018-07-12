<?php
/**
 * @file
 * site_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function site_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Content Admin.
  $roles['Content Admin'] = array(
    'name' => 'Content Admin',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}

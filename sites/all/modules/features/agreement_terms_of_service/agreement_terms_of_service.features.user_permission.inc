<?php
/**
 * @file
 * agreement_terms_of_service.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function agreement_terms_of_service_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer agreements'.
  $permissions['administer agreements'] = array(
    'name' => 'administer agreements',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'agreement',
  );

  // Exported permission: 'bypass agreement'.
  $permissions['bypass agreement'] = array(
    'name' => 'bypass agreement',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'agreement',
  );

  return $permissions;
}

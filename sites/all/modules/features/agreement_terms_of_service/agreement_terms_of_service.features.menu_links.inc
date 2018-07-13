<?php
/**
 * @file
 * agreement_terms_of_service.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function agreement_terms_of_service_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_agreement-settings:admin/config/people/agreement.
  $menu_links['management_agreement-settings:admin/config/people/agreement'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/agreement',
    'router_path' => 'admin/config/people/agreement',
    'link_title' => 'Agreement settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings for the Agreement module.',
      ),
      'identifier' => 'management_agreement-settings:admin/config/people/agreement',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Agreement settings');

  return $menu_links;
}

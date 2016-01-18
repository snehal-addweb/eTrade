<?php
/**
 * @file
 * etrade_miscellaneous.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function etrade_miscellaneous_user_default_roles() {
  $roles = array();

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}

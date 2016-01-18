<?php
/**
 * @file
 * etrade_miscellaneous.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function etrade_miscellaneous_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:node/2.
  $menu_links['main-menu_about-us:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us:node/2',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_careers:node/3.
  $menu_links['main-menu_careers:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_careers:node/3',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:node/4.
  $menu_links['main-menu_contact-us:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'identifier' => 'main-menu_contact-us:node/4',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_dashboard:dashboard.
  $menu_links['main-menu_dashboard:dashboard'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dashboard',
    'router_path' => 'dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_dashboard:dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_logout:user/logout.
  $menu_links['main-menu_logout:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: management_administration-menu:admin/config/administration/admin_menu.
  $menu_links['management_administration-menu:admin/config/administration/admin_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/admin_menu',
    'router_path' => 'admin/config/administration/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_administration-menu:admin/config/administration/admin_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin/config/administration',
  );
  // Exported menu link: management_back-to-top:admin/config/user-interface/back_to_top.
  $menu_links['management_back-to-top:admin/config/user-interface/back_to_top'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/back_to_top',
    'router_path' => 'admin/config/user-interface/back_to_top',
    'link_title' => 'Back To Top',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Back To Top settings',
      ),
      'alter' => TRUE,
      'identifier' => 'management_back-to-top:admin/config/user-interface/back_to_top',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_backup-and-migrate:admin/config/system/backup_migrate.
  $menu_links['management_backup-and-migrate:admin/config/system/backup_migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/backup_migrate',
    'router_path' => 'admin/config/system/backup_migrate',
    'link_title' => 'Backup and Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Backup/restore your database and files or migrate data to or from another Drupal site.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_backup-and-migrate:admin/config/system/backup_migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_clientside-validation:admin/config/validation/clientside_validation.
  $menu_links['management_clientside-validation:admin/config/validation/clientside_validation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/validation/clientside_validation',
    'router_path' => 'admin/config/validation/clientside_validation',
    'link_title' => 'Clientside Validation',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer clientside validation.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_clientside-validation:admin/config/validation/clientside_validation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_validation:admin/config/validation',
  );
  // Exported menu link: management_content-types:admin/config/validation/clientside_validation/content-types.
  $menu_links['management_content-types:admin/config/validation/clientside_validation/content-types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/validation/clientside_validation/content-types',
    'router_path' => 'admin/config/validation/clientside_validation/content-types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Override settings for content types.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_content-types:admin/config/validation/clientside_validation/content-types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_clientside-validation:admin/config/validation/clientside_validation',
  );
  // Exported menu link: management_custom-forms:admin/config/validation/clientside_validation/custom-forms.
  $menu_links['management_custom-forms:admin/config/validation/clientside_validation/custom-forms'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/validation/clientside_validation/custom-forms',
    'router_path' => 'admin/config/validation/clientside_validation/custom-forms',
    'link_title' => 'Custom forms',
    'options' => array(
      'attributes' => array(
        'title' => 'Override settings for custom forms.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_custom-forms:admin/config/validation/clientside_validation/custom-forms',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 12,
    'customized' => 0,
    'parent_identifier' => 'management_clientside-validation:admin/config/validation/clientside_validation',
  );
  // Exported menu link: management_default-settings:admin/config/validation/clientside_validation/default.
  $menu_links['management_default-settings:admin/config/validation/clientside_validation/default'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/validation/clientside_validation/default',
    'router_path' => 'admin/config/validation/clientside_validation/default',
    'link_title' => 'Default settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit default settings.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_default-settings:admin/config/validation/clientside_validation/default',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_clientside-validation:admin/config/validation/clientside_validation',
  );
  // Exported menu link: management_general-settings:admin/config/validation/clientside_validation/general.
  $menu_links['management_general-settings:admin/config/validation/clientside_validation/general'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/validation/clientside_validation/general',
    'router_path' => 'admin/config/validation/clientside_validation/general',
    'link_title' => 'General settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit general settings.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_general-settings:admin/config/validation/clientside_validation/general',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'management_clientside-validation:admin/config/validation/clientside_validation',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update.
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu.
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management.
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/menu-footer-link-1.
  $menu_links['management_navigation:admin/structure/menu/manage/menu-footer-link-1'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-footer-link-1',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/menu-footer-link-1',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation.
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_quick-links:admin/structure/menu/manage/menu-footer-link-2.
  $menu_links['management_quick-links:admin/structure/menu/manage/menu-footer-link-2'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-footer-link-2',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Quick Links',
    'options' => array(
      'identifier' => 'management_quick-links:admin/structure/menu/manage/menu-footer-link-2',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_rebuild-type-information-for-media:admin/config/media/rebuild_types.
  $menu_links['management_rebuild-type-information-for-media:admin/config/media/rebuild_types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/rebuild_types',
    'router_path' => 'admin/config/media/rebuild_types',
    'link_title' => 'Rebuild type information for media',
    'options' => array(
      'attributes' => array(
        'title' => 'In case there are files in file_managed w/o a type, this function rebuilds them',
      ),
      'alter' => TRUE,
      'identifier' => 'management_rebuild-type-information-for-media:admin/config/media/rebuild_types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_remember-me-settings:admin/config/system/remember_me.
  $menu_links['management_remember-me-settings:admin/config/system/remember_me'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/remember_me',
    'router_path' => 'admin/config/system/remember_me',
    'link_title' => 'Remember me settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings like session time out for remember_me module.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_remember-me-settings:admin/config/system/remember_me',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu.
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: menu-footer-link-1_additional-info:node/10.
  $menu_links['menu-footer-link-1_additional-info:node/10'] = array(
    'menu_name' => 'menu-footer-link-1',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Additional Info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-link-1_additional-info:node/10',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-link-1_contact-us:node/4.
  $menu_links['menu-footer-link-1_contact-us:node/4'] = array(
    'menu_name' => 'menu-footer-link-1',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-link-1_contact-us:node/4',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-link-1_customers-quotes:testimonials.
  $menu_links['menu-footer-link-1_customers-quotes:testimonials'] = array(
    'menu_name' => 'menu-footer-link-1',
    'link_path' => 'testimonials',
    'router_path' => 'testimonials',
    'link_title' => 'Customer\'s Quotes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-link-1_customers-quotes:testimonials',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-link-1_homepage:home.
  $menu_links['menu-footer-link-1_homepage:home'] = array(
    'menu_name' => 'menu-footer-link-1',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Homepage',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-link-1_homepage:home',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-link-1_policy-service:node/9.
  $menu_links['menu-footer-link-1_policy-service:node/9'] = array(
    'menu_name' => 'menu-footer-link-1',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Policy Service',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-link-1_policy-service:node/9',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-link-2_customer-care:node/12.
  $menu_links['menu-footer-link-2_customer-care:node/12'] = array(
    'menu_name' => 'menu-footer-link-2',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Customer Care',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-link-2_customer-care:node/12',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-link-2_help:node/12.
  $menu_links['menu-footer-link-2_help:node/12'] = array(
    'menu_name' => 'menu-footer-link-2',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-link-2_help:node/12',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Additional Info');
  t('Administration menu');
  t('Back To Top');
  t('Backup and Migrate');
  t('Careers');
  t('Clientside Validation');
  t('Contact Us');
  t('Content types');
  t('Custom forms');
  t('Customer Care');
  t('Customer\'s Quotes');
  t('Dashboard');
  t('Default settings');
  t('General settings');
  t('Help');
  t('Home');
  t('Homepage');
  t('Logout');
  t('Main menu');
  t('Management');
  t('Navigation');
  t('Policy Service');
  t('Quick Links');
  t('Rebuild type information for media');
  t('Remember me settings');
  t('User menu');
  t('jQuery update');

  return $menu_links;
}

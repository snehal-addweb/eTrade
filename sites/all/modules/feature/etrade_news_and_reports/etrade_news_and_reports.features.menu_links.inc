<?php
/**
 * @file
 * etrade_news_and_reports.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function etrade_news_and_reports_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_news:News-For-Admin.
  $menu_links['management_news:News-For-Admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'News-For-Admin',
    'router_path' => 'News-For-Admin',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'management_news:News-For-Admin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_report:Report-for-admin.
  $menu_links['management_report:Report-for-admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'Report-for-admin',
    'router_path' => 'Report-for-admin',
    'link_title' => 'Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'management_report:Report-for-admin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: menu-footer-link-1_add-report:node/add/report.
  $menu_links['menu-footer-link-1_add-report:node/add/report'] = array(
    'menu_name' => 'menu-footer-link-1',
    'link_path' => 'node/add/report',
    'router_path' => 'node/add/report',
    'link_title' => 'Add Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-link-1_add-report:node/add/report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-link-1_news:node/add/news.
  $menu_links['menu-footer-link-1_news:node/add/news'] = array(
    'menu_name' => 'menu-footer-link-1',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add/news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-link-1_news:node/add/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-link-1_report:report.
  $menu_links['menu-footer-link-1_report:report'] = array(
    'menu_name' => 'menu-footer-link-1',
    'link_path' => 'report',
    'router_path' => 'report',
    'link_title' => 'Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-link-1_report:report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_news:node/add/news.
  $menu_links['navigation_news:node/add/news'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add/news',
    'link_title' => 'News',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_news:node/add/news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_report:node/add/report.
  $menu_links['navigation_report:node/add/report'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/report',
    'router_path' => 'node/add/report',
    'link_title' => 'Report',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_report:node/add/report',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Report');
  t('News');
  t('Report');

  return $menu_links;
}

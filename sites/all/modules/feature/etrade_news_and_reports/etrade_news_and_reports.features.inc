<?php
/**
 * @file
 * etrade_news_and_reports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function etrade_news_and_reports_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function etrade_news_and_reports_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function etrade_news_and_reports_flag_default_flags() {
  $flags = array();
  // Exported flag: "News".
  $flags['news'] = array(
    'entity_type' => 'node',
    'title' => 'News',
    'global' => 0,
    'types' => array(
      0 => 'news',
    ),
    'flag_short' => 'Decline',
    'flag_long' => 'Click here to Approve',
    'flag_message' => '',
    'unflag_short' => 'Approved',
    'unflag_long' => 'Click here to Decline',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'etrade_news_and_reports',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Report".
  $flags['report'] = array(
    'entity_type' => 'node',
    'title' => 'Report',
    'global' => 0,
    'types' => array(
      0 => 'report',
    ),
    'flag_short' => 'Decline',
    'flag_long' => 'Click here to Approve',
    'flag_message' => '',
    'unflag_short' => 'Approved',
    'unflag_long' => 'Click here to Decline',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'etrade_news_and_reports',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function etrade_news_and_reports_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'report' => array(
      'name' => t('Report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

<?php
/**
 * @file
 * etrade_reports_and_news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function etrade_reports_and_news_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-lasted_news-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'lasted_news-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'etrade' => array(
        'region' => 'front_slider',
        'status' => 1,
        'theme' => 'etrade',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}

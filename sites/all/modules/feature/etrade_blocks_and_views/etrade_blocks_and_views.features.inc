<?php
/**
 * @file
 * etrade_blocks_and_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function etrade_blocks_and_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function etrade_blocks_and_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

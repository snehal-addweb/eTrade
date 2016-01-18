<?php
/**
 * @file
 * etrade_miscellaneous.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function etrade_miscellaneous_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'dashboard';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Dashboard';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_user_profile-block_1',
      'hide_title' => 1,
      'title' => 'Profile',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_countrywise_commodities-block_1',
      'hide_title' => 1,
      'title' => 'Commodities',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Commodities');
  t('Dashboard');
  t('Profile');

  $export['dashboard'] = $quicktabs;

  return $export;
}

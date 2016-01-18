<?php
/**
 * @file
 * etrade_miscellaneous.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function etrade_miscellaneous_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_load_port_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_load_port_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_type_of_company_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_type_of_company_pattern'] = $strongarm;

  return $export;
}

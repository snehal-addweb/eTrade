<?php
/**
 * @file
 * etrade_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function etrade_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_profile_left|node|user_profile|form';
  $field_group->group_name = 'group_user_profile_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'user_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Trade Profile',
    'weight' => '3',
    'children' => array(
      0 => 'field_company_name',
      1 => 'field_company_type',
      2 => 'field_address_company',
      3 => 'field_state',
      4 => 'field_landline_no_of_company',
      5 => 'field_tax_registration_no_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User Trade Profile',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-user-profile-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_user_profile_left|node|user_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_profile_right|node|user_profile|form';
  $field_group->group_name = 'group_user_profile_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'user_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Trade Profile',
    'weight' => '6',
    'children' => array(
      0 => 'field_authorized_person',
      1 => 'field_address_of_authorized_pers',
      2 => 'field_phone_number',
      3 => 'field_email_address',
      4 => 'field_registration_certificate',
      5 => 'field_address_proof_of_company',
      6 => 'field_id_proof_of_authorized',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User Trade Profile',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-user-profile-right field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_user_profile_right|node|user_profile|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('User Trade Profile');

  return $field_groups;
}

<?php

/**
 * @file
 * item.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function item_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_still_image|node|item|form';
  $field_group->group_name = 'group_still_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_dc_original_format',
    ),
    'format_settings' => array(
      'formatter' => 'collapsed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Still Image',
    ),
    'format_type' => 'fieldset',
    'label' => 'Still Image',
    'weight' => '7',
  );
  $field_groups['group_still_image|node|item|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Still Image');

  return $field_groups;
}

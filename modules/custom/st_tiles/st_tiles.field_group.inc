<?php
/**
 * @file
 * st_tiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function st_tiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|node|style_tile|form';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '28',
    'children' => array(
      0 => 'field_tile_background_color',
      1 => 'field_tile_background_image',
      2 => 'field_bg_pattern',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Background',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_background|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|style_tile|default';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_styletile_right';
  $field_group->data = array(
    'label' => 'Buttons',
    'weight' => '23',
    'children' => array(
      0 => 'field_tilebuttons',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Buttons',
      'instance_settings' => array(
        'classes' => 'group-buttons field-group-div col-md-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_buttons|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_colors|node|style_tile|default';
  $field_group->group_name = 'group_colors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_styletile_right';
  $field_group->data = array(
    'label' => 'Colors',
    'weight' => '22',
    'children' => array(
      0 => 'field_st_colors',
      1 => 'field_tile_background_color',
      2 => 'field_color_page',
      3 => 'field_secondary_font_color',
      4 => 'field_paragraph_color',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Colors',
      'instance_settings' => array(
        'classes' => ' group-colors field-group-div col-md-12',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_colors|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_colors|node|style_tile|form';
  $field_group->group_name = 'group_colors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Colors',
    'weight' => '4',
    'children' => array(
      0 => 'field_st_colors',
      1 => 'field_tile_background_color',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_colors|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fontgroup|node|style_tile|form';
  $field_group->group_name = 'group_fontgroup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Typefaces',
    'weight' => '32',
    'children' => array(
      0 => 'field_st_colors',
      1 => 'field_tile_paragraph_text',
      2 => 'field_tile_primary_font',
      3 => 'field_tile_secondary_font',
      4 => 'field_secondary_font_color',
      5 => 'field_paragraph_color',
      6 => 'field_headline_size',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-fontgroup field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fontgroup|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|style_tile|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '30',
    'children' => array(
      0 => 'field__st_logo_image',
      1 => 'field_st_header_image',
      2 => 'field_st_patterns',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_images|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_markup|node|style_tile|form';
  $field_group->group_name = 'group_markup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Markup',
    'weight' => '34',
    'children' => array(
      0 => 'field_additional_markup',
      1 => 'field_tileblock',
      2 => 'field_tilebuttons',
      3 => 'field_tilemessages',
      4 => 'field_tilepager',
      5 => 'field_tiletabs',
      6 => 'field_tiletags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-markup field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_markup|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page|node|style_tile|form';
  $field_group->group_name = 'group_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Page',
    'weight' => '29',
    'children' => array(
      0 => 'field_color_page',
      1 => 'field_page_pattern',
      2 => 'field_page_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_page|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pattern_group|node|style_tile|default';
  $field_group->group_name = 'group_pattern_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_styletile_right';
  $field_group->data = array(
    'label' => 'Textures',
    'weight' => '21',
    'children' => array(
      0 => 'field_st_patterns',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Textures',
      'instance_settings' => array(
        'classes' => ' group-pattern-group field-group-div col-md-12',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pattern_group|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stinfo|node|style_tile|form';
  $field_group->group_name = 'group_stinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'group_fontgroup',
      1 => 'group_images',
      2 => 'group_markup',
      3 => 'group_text',
      4 => 'group_background',
      5 => 'group_page',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-stinfo field-group-tabs',
      ),
    ),
  );
  $export['group_stinfo|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_styletile_bottom|node|style_tile|default';
  $field_group->group_name = 'group_styletile_bottom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bottom',
    'weight' => '3',
    'children' => array(
      0 => 'field_additional_markup',
      1 => 'field_tilemessages',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Bottom',
      'instance_settings' => array(
        'classes' => 'col-md-12 group-styletile-bottom field-group-div clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_styletile_bottom|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_styletile_left|node|style_tile|default';
  $field_group->group_name = 'group_styletile_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left',
    'weight' => '1',
    'children' => array(
      0 => 'field__st_headline',
      1 => 'field_blockquote',
      2 => 'field_paragraph_1',
      3 => 'field_paragraph_2',
      4 => 'field_st_sub_headline',
      5 => 'field_tileblock',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left',
      'instance_settings' => array(
        'classes' => 'col-md-6 group-styletile-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_styletile_left|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_styletile_right|node|style_tile|default';
  $field_group->group_name = 'group_styletile_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right',
    'weight' => '2',
    'children' => array(
      0 => 'field_tilepager',
      1 => 'field_tiletabs',
      2 => 'field_tiletags',
      3 => 'group_colors',
      4 => 'group_pattern_group',
      5 => 'group_buttons',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right',
      'instance_settings' => array(
        'classes' => 'col-md-6 group-styletile-right field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_styletile_right|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_styletile_top|node|style_tile|default';
  $field_group->group_name = 'group_styletile_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top',
    'weight' => '0',
    'children' => array(
      0 => 'field__st_logo_image',
      1 => 'field_st_header_image',
      2 => 'flippy_pager',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top',
      'instance_settings' => array(
        'classes' => 'col-md-12 group-styletile-top field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_styletile_top|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|style_tile|form';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '33',
    'children' => array(
      0 => 'field__st_headline',
      1 => 'field_blockquote',
      2 => 'field_paragraph_1',
      3 => 'field_paragraph_2',
      4 => 'field_st_sub_headline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-text field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_text|node|style_tile|form'] = $field_group;

  return $export;
}

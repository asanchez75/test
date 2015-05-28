<?php
/**
 * @file
 * vistas.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vistas_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vistas_node_info() {
  $items = array(
    'publication' => array(
      'name' => t('Publication'),
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

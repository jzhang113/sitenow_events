<?php
/**
 * @file
 * sitenow_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sitenow_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sitenow_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_date_format_types().
 */
function sitenow_events_date_format_types() {
  $format_types = array();
  // Exported format type: event_day
  $format_types['event_day'] = 'Event Day';
  // Exported format type: event_short_month
  $format_types['event_short_month'] = 'Event Short Month';
  // Exported format type: event_time
  $format_types['event_time'] = 'Event Time';
  return $format_types;
}

/**
 * Implements hook_date_formats().
 */
function sitenow_events_date_formats() {
  $formats = array();

  // Exported format: event_day
  $formats['event_day'] = array(
    'type' => 'event_day',
    'format' => 'd',
    'locales' => array(),
  );
  // Exported format: event_short_month
  $formats['event_short_month'] = array(
    'type' => 'event_short_month',
    'format' => 'M',
    'locales' => array(),
  );
  // Exported format: event_time
  $formats['event_time'] = array(
    'type' => 'event_time',
    'format' => 'g:i a',
    'locales' => array(),
  );
  return $formats;
}

/**
 * Implements hook_node_info().
 */
function sitenow_events_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('Content type to add upcoming events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

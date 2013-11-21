<?php

/**
 * @file
 * Migration code for SiteNow Events content.
 */

/**
 * Implements hook_migrate_api().
 */
function sitenow_events_content_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'SiteNowEvents' => array('class_name' => 'SiteNowEventsMigration'),
    ),
  );
  return $api;
}

// Initial SiteNowEventsMigration class.
// @TODO: Refactor to abstract common parts into a "SiteNowMigration" class that
// could then be extended by each app.
class SiteNowEventsMigration extends Migration {

  public function __construct() {
    parent::__construct(MigrateGroup::getInstance('SiteNow'));

    // Avoid known line ending issue: drupal.org/node/1705850
    ini_set('auto_detect_line_endings', TRUE);

    $this->description = t('Import SiteNow Event nodes.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'sitenow_events_content') . '/import/events.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('event');

    // Bring on the field mappings
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_event_description', 'description')
     ->arguments(array('format' => 'filtered_html'));

    // event type taxonomy
    $this->addFieldMapping('field_event_type', 'type')
         ->arguments(array(
           'create_term' => TRUE,
           'ignore_case' => TRUE,
           ));

    // Set the start date.
    $this->addFieldMapping('field_event_date')->defaultValue(date('Y-m-d H:i:s'));
    // Set the end date.
    $this->addFieldMapping('field_event_date:to')->defaultValue(date('Y-m-d H:i:s'));

    // location
    $this->addFieldMapping('field_event_location')->defaultValue('US');
    $this->addFieldMapping('field_event_location:name_line', 'location_name');
    $this->addFieldMapping('field_event_location:thoroughfare', 'location_street');
    $this->addFieldMapping('field_event_location:locality', 'location_city');
    $this->addFieldMapping('field_event_location:administrative_area', 'location_state');
    $this->addFieldMapping('field_event_location:postal_code', 'location_zip');

    // Author mapping. Defaults to user 1.
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('is_new')->defaultValue(TRUE);
    $this->addFieldMapping('promote', 'promote')->defaultValue(FALSE);
  }

  /**
   * Implements migrate::prepare().
   * use this to programatically set start and end date values for each event
   */
  public function prepare($event, stdClass $row) {
    // Create a random date within three months using only quarter-hour granularity.
    $day = mt_rand(0, 90);
    $hour = mt_rand(0, 12);
    $minute = array_rand(array(00 => 00, 15 => 15, 30 => 30, 45 => 45)); // array_rand returns a key.

    $date = new DateTime();
    $date->modify('+' . $day . ' days');
    $date->setTime($hour, $minute);

    // set start date to random value
    $event->field_event_date[LANGUAGE_NONE][0]['value'] = $date->format('Y-m-d H:i:s');

    // Add some hours for the end date.
    $date->modify('+' . mt_rand(1, 4) . ' hours');

    // set end date to random value
    $event->field_event_date[LANGUAGE_NONE][0]['value2'] = $date->format('Y-m-d H:i:s');
  }

  /**
   * Implements migrate::postRollback().
   * use this to delete demo taxonomy terms that were imported
   */
  public function postRollback() {
    parent::postRollback();
    // initialize array of term names
    $names = array('Demo Event Type 1','Demo Event Type 2');
    // loop through array
    foreach ($names as $name) {
      // get term ids from name
      $terms = taxonomy_get_term_by_name($name, 'event_type');
      // loop through term ids and delete them
      foreach ($terms as $term) {
        taxonomy_term_delete($term->tid);
      }
    }
  }

  // Function for the CSV document
  function csvcolumns() {
    // Title", "Path", "Body"
    $columns[0] = array('nid', 'nid');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('description', 'Description');
    $columns[3] = array('type', 'Event Type');
    $columns[4] = array('location_name', 'Location Name');
    $columns[5] = array('location_street', 'Street');
    $columns[6] = array('location_city', 'City');
    $columns[7] = array('location_state', 'State');
    $columns[8] = array('location_zip', 'Zip');
    $columns[9] = array('promote', 'Promote');

    return $columns;
  }
}

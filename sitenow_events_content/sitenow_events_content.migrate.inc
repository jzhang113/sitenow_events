<?php

/**
 * @file
 * Migration code for SiteNow People content.
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
    $this->addFieldMapping('body', 'description')
     ->arguments(array('format' => 'filtered_html'));

    // create default start and end date values
    $start_date = new DateTime();
    $start_date->modify("+2 day");

    $end_date = new DateTime();
    $end_date->modify("+2 day 2 hours");

    // start and end dates
    $this->addFieldMapping('field_event_date', 'start')->defaultValue($start_date->format('Y-m-d H:i:s'));
    $this->addFieldMapping('field_event_date:to', 'end')->defaultValue($end_date->format('Y-m-d H:i:s'));

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
  }

  /**
   * Implements migrate::prepare().
   * use this to programatically set start and end date values for each event
   */
  public function prepare($event, stdClass $row) {
    // $event->field_event_date[LANGUAGE_NONE][0]['value'] =
  }

  // Function for the CSV document
  function csvcolumns() {
    // Title", "Path", "Body"
    $columns[0] = array('nid', 'nid');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('description', 'Description');
    $columns[3] = array('start', 'Start Date');
    $columns[4] = array('end', 'End Date');
    $columns[5] = array('location_name', 'Location Name');
    $columns[6] = array('location_street', 'Street');
    $columns[7] = array('location_city', 'City');
    $columns[8] = array('location_state', 'State');
    $columns[9] = array('location_zip', 'Zip');

    return $columns;
  }
}

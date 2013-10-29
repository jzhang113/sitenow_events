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

    // start and end dates

    // location

    // Author mapping. Defaults to user 1.
    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
    $this->addFieldMapping('is_new', 'is_new')->defaultValue(TRUE);
  }

  // Function for the CSV document
  function csvcolumns() {
    // Title", "Path", "Body"
    $columns[0] = array('nid', 'nid');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('description', 'Description');
    $columns[3] = array('start', 'Start');
    $columns[4] = array('end', 'End');
    $columns[5] = array('locatiion', 'Location');

    return $columns;
  }
}

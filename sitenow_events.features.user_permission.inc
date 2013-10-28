<?php
/**
 * @file
 * sitenow_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sitenow_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node event content'.
  $permissions['administer panelizer node event content'] = array(
    'name' => 'administer panelizer node event content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event context'.
  $permissions['administer panelizer node event context'] = array(
    'name' => 'administer panelizer node event context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event defaults'.
  $permissions['administer panelizer node event defaults'] = array(
    'name' => 'administer panelizer node event defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event layout'.
  $permissions['administer panelizer node event layout'] = array(
    'name' => 'administer panelizer node event layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event overview'.
  $permissions['administer panelizer node event overview'] = array(
    'name' => 'administer panelizer node event overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event settings'.
  $permissions['administer panelizer node event settings'] = array(
    'name' => 'administer panelizer node event settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in event_type'.
  $permissions['delete terms in event_type'] = array(
    'name' => 'delete terms in event_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in event_type'.
  $permissions['edit terms in event_type'] = array(
    'name' => 'edit terms in event_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'enter event revision log entry'.
  $permissions['enter event revision log entry'] = array(
    'name' => 'enter event revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event authored by option'.
  $permissions['override event authored by option'] = array(
    'name' => 'override event authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event authored on option'.
  $permissions['override event authored on option'] = array(
    'name' => 'override event authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event promote to front page option'.
  $permissions['override event promote to front page option'] = array(
    'name' => 'override event promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event published option'.
  $permissions['override event published option'] = array(
    'name' => 'override event published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event revision option'.
  $permissions['override event revision option'] = array(
    'name' => 'override event revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event sticky option'.
  $permissions['override event sticky option'] = array(
    'name' => 'override event sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}

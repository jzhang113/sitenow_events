<?php
/**
 * Implements hook_apps_app_info().
 */
function sitenow_events_apps_app_info() {
  return array(
    'configure form' => 'sitenow_events_apps_app_configure_form',
    'demo content module' => 'sitenow_events_content',
    //'status callback' => 'enterprise_blog_app_status',
    //'post install callback' => 'enterprise_blog_app_post_install',
  );
}

function sitenow_events_apps_app_configure_form($form, &$form_state) {
  // flush cache to assure all config got instantiated properly
  $form = array();

  return $form;
}

<?php
/**
 * @file
 * sitenow_events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sitenow_events_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_api_0';
  $strongarm->value = 'google_maps_api';
  $export['addressfield_staticmap_api_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_directions_link_0';
  $strongarm->value = 1;
  $export['addressfield_staticmap_directions_link_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_directions_text_0';
  $strongarm->value = 'Get Directions';
  $export['addressfield_staticmap_directions_text_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_field_names';
  $strongarm->value = array(
    'field_event_location' => 'field_event_location',
  );
  $export['addressfield_staticmap_field_names'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_icon_url_0';
  $strongarm->value = '';
  $export['addressfield_staticmap_gmap_icon_url_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_link_0';
  $strongarm->value = 0;
  $export['addressfield_staticmap_gmap_link_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_link_target_0';
  $strongarm->value = '';
  $export['addressfield_staticmap_gmap_link_target_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_size_0';
  $strongarm->value = '200x200';
  $export['addressfield_staticmap_gmap_size_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_type_0';
  $strongarm->value = 'roadmap';
  $export['addressfield_staticmap_gmap_type_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_zoom_0';
  $strongarm->value = '16';
  $export['addressfield_staticmap_gmap_zoom_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_event_date_type';
  $strongarm->value = 'M d, Y';
  $export['date_format_event_date_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_event_day';
  $strongarm->value = 'd';
  $export['date_format_event_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_event_short_month';
  $strongarm->value = 'M';
  $export['date_format_event_short_month'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_event_time';
  $strongarm->value = 'g:i a';
  $export['date_format_event_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_events';
  $strongarm->value = array();
  $export['menu_options_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_events';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_events';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_events';
  $strongarm->value = '1';
  $export['node_preview_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_events';
  $strongarm->value = 0;
  $export['node_submitted_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_events';
  $strongarm->value = array(
    'status' => 1,
    'default' => 1,
    'choice' => 0,
  );
  $export['panelizer_defaults_node_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_event_type';
  $strongarm->value = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );
  $export['panelizer_defaults_taxonomy_term_event_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:events_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:21:"panelizer_node:events";s:23:"allowed_layout_settings";a:11:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"onecol";b:0;s:12:"twocol_65_35";b:1;s:12:"twocol_35_65";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:events_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:events_allowed_types';
  $strongarm->value = array(
    'token-node:source' => 'token-node:source',
    'token-node:log' => 'token-node:log',
    'token-node:content-type' => 'token-node:content-type',
    'token-node:nid' => 'token-node:nid',
    'token-node:vid' => 'token-node:vid',
    'token-node:title' => 'token-node:title',
    'token-node:body' => 'token-node:body',
    'token-node:summary' => 'token-node:summary',
    'token-node:language' => 'token-node:language',
    'token-node:url' => 'token-node:url',
    'token-node:edit-url' => 'token-node:edit-url',
    'token-node:created' => 'token-node:created',
    'token-node:changed' => 'token-node:changed',
    'token-node:author' => 'token-node:author',
    'token-node:menu-link' => 'token-node:menu-link',
    'token-node:field_tags' => 'token-node:field_tags',
    'token-node:field_image' => 'token-node:field_image',
    'token-node:field_event_date' => 'token-node:field_event_date',
    'token-node:field_event_location' => 'token-node:field_event_location',
    'token-node:field_event_type' => 'token-node:field_event_type',
    'token-node:original' => 'token-node:original',
    'token-content-type:name' => 'token-content-type:name',
    'token-content-type:machine-name' => 'token-content-type:machine-name',
    'token-content-type:description' => 'token-content-type:description',
    'token-content-type:node-count' => 'token-content-type:node-count',
    'token-content-type:edit-url' => 'token-content-type:edit-url',
    'token-term:edit-url' => 'token-term:edit-url',
    'token-term:parents' => 'token-term:parents',
    'token-term:root' => 'token-term:root',
    'token-term:tid' => 'token-term:tid',
    'token-term:name' => 'token-term:name',
    'token-term:description' => 'token-term:description',
    'token-term:node-count' => 'token-term:node-count',
    'token-term:url' => 'token-term:url',
    'token-term:vocabulary' => 'token-term:vocabulary',
    'token-term:parent' => 'token-term:parent',
    'token-term:original' => 'token-term:original',
    'token-vocabulary:machine-name' => 'token-vocabulary:machine-name',
    'token-vocabulary:edit-url' => 'token-vocabulary:edit-url',
    'token-vocabulary:vid' => 'token-vocabulary:vid',
    'token-vocabulary:name' => 'token-vocabulary:name',
    'token-vocabulary:description' => 'token-vocabulary:description',
    'token-vocabulary:node-count' => 'token-vocabulary:node-count',
    'token-vocabulary:term-count' => 'token-vocabulary:term-count',
    'token-vocabulary:original' => 'token-vocabulary:original',
    'token-file:basename' => 'token-file:basename',
    'token-file:extension' => 'token-file:extension',
    'token-file:size-raw' => 'token-file:size-raw',
    'token-file:fid' => 'token-file:fid',
    'token-file:name' => 'token-file:name',
    'token-file:path' => 'token-file:path',
    'token-file:mime' => 'token-file:mime',
    'token-file:size' => 'token-file:size',
    'token-file:url' => 'token-file:url',
    'token-file:timestamp' => 'token-file:timestamp',
    'token-file:owner' => 'token-file:owner',
    'token-file:original' => 'token-file:original',
    'token-user:cancel-url' => 'token-user:cancel-url',
    'token-user:one-time-login-url' => 'token-user:one-time-login-url',
    'token-user:picture' => 'token-user:picture',
    'token-user:roles' => 'token-user:roles',
    'token-user:role-names' => 'token-user:role-names',
    'token-user:role-ids' => 'token-user:role-ids',
    'token-user:uid' => 'token-user:uid',
    'token-user:name' => 'token-user:name',
    'token-user:mail' => 'token-user:mail',
    'token-user:url' => 'token-user:url',
    'token-user:edit-url' => 'token-user:edit-url',
    'token-user:last-login' => 'token-user:last-login',
    'token-user:created' => 'token-user:created',
    'token-user:cas' => 'token-user:cas',
    'token-user:original' => 'token-user:original',
    'token-current-user:ip-address' => 'token-current-user:ip-address',
    'token-menu-link:mlid' => 'token-menu-link:mlid',
    'token-menu-link:title' => 'token-menu-link:title',
    'token-menu-link:url' => 'token-menu-link:url',
    'token-menu-link:parent' => 'token-menu-link:parent',
    'token-menu-link:parents' => 'token-menu-link:parents',
    'token-menu-link:root' => 'token-menu-link:root',
    'token-menu-link:menu' => 'token-menu-link:menu',
    'token-menu-link:edit-url' => 'token-menu-link:edit-url',
    'token-current-page:title' => 'token-current-page:title',
    'token-current-page:url' => 'token-current-page:url',
    'token-current-page:page-number' => 'token-current-page:page-number',
    'token-current-page:query' => 'token-current-page:query',
    'token-url:path' => 'token-url:path',
    'token-url:relative' => 'token-url:relative',
    'token-url:absolute' => 'token-url:absolute',
    'token-url:brief' => 'token-url:brief',
    'token-url:unaliased' => 'token-url:unaliased',
    'token-url:args' => 'token-url:args',
    'token-array:first' => 'token-array:first',
    'token-array:last' => 'token-array:last',
    'token-array:count' => 'token-array:count',
    'token-array:reversed' => 'token-array:reversed',
    'token-array:keys' => 'token-array:keys',
    'token-array:join' => 'token-array:join',
    'token-array:value' => 'token-array:value',
    'token-random:number' => 'token-random:number',
    'token-random:hash' => 'token-random:hash',
    'token-cas:name' => 'token-cas:name',
    'token-date-field-value:date' => 'token-date-field-value:date',
    'token-date-field-value:to-date' => 'token-date-field-value:to-date',
    'token-site:name' => 'token-site:name',
    'token-site:slogan' => 'token-site:slogan',
    'token-site:mail' => 'token-site:mail',
    'token-site:url' => 'token-site:url',
    'token-site:url-brief' => 'token-site:url-brief',
    'token-site:login-url' => 'token-site:login-url',
    'token-date:short' => 'token-date:short',
    'token-date:medium' => 'token-date:medium',
    'token-date:long' => 'token-date:long',
    'token-date:custom' => 'token-date:custom',
    'token-date:since' => 'token-date:since',
    'token-date:raw' => 'token-date:raw',
    'token-date:day' => 'token-date:day',
    'token-date:event_date_type' => 'token-date:event_date_type',
    'token-date:month' => 'token-date:month',
    'token-date:short_month' => 'token-date:short_month',
    'token-view:name' => 'token-view:name',
    'token-view:description' => 'token-view:description',
    'token-view:machine-name' => 'token-view:machine-name',
    'token-view:title' => 'token-view:title',
    'token-view:url' => 'token-view:url',
    'token-menu:name' => 'token-menu:name',
    'token-menu:machine-name' => 'token-menu:machine-name',
    'token-menu:description' => 'token-menu:description',
    'token-menu:menu-link-count' => 'token-menu:menu-link-count',
    'token-menu:edit-url' => 'token-menu:edit-url',
    'entity_form_field-node:body' => 'entity_form_field-node:body',
    'entity_form_field-node:field_tags' => 'entity_form_field-node:field_tags',
    'entity_form_field-node:field_image' => 'entity_form_field-node:field_image',
    'entity_form_field-node:field_event_date' => 'entity_form_field-node:field_event_date',
    'entity_form_field-node:field_event_location' => 'entity_form_field-node:field_event_location',
    'entity_form_field-node:field_event_type' => 'entity_form_field-node:field_event_type',
    'entity_field-node:body' => 'entity_field-node:body',
    'entity_field-node:field_tags' => 'entity_field-node:field_tags',
    'entity_field-node:field_image' => 'entity_field-node:field_image',
    'entity_field-node:field_event_date' => 'entity_field-node:field_event_date',
    'entity_field-node:field_event_location' => 'entity_field-node:field_event_location',
    'entity_field-node:field_event_type' => 'entity_field-node:field_event_type',
    'entity_field_extra-taxonomy_term:description' => 'entity_field_extra-taxonomy_term:description',
    'entity_field_extra-user:summary' => 'entity_field_extra-user:summary',
    'custom-custom' => 'custom-custom',
    'block-addressfield_staticmap-addressfield_staticmap' => 'block-addressfield_staticmap-addressfield_staticmap',
    'block-addressfield_staticmap-addressfield_staticmap_alt' => 'block-addressfield_staticmap-addressfield_staticmap_alt',
    'block-calendar-calendar_legend' => 'block-calendar-calendar_legend',
    'block-cas-login' => 'block-cas-login',
    'block-node-syndicate' => 'block-node-syndicate',
    'block-node-recent' => 'block-node-recent',
    'block-search-form' => 'block-search-form',
    'block-shortcut-shortcuts' => 'block-shortcut-shortcuts',
    'block-system-powered-by' => 'block-system-powered-by',
    'block-system-help' => 'block-system-help',
    'block-system-navigation' => 'block-system-navigation',
    'block-system-management' => 'block-system-management',
    'block-system-user-menu' => 'block-system-user-menu',
    'block-system-main-menu' => 'block-system-main-menu',
    'block-user-login' => 'block-user-login',
    'block-user-new' => 'block-user-new',
    'block-user-online' => 'block-user-online',
    'entity_view-node' => 'entity_view-node',
    'entity_view-taxonomy_term' => 'entity_view-taxonomy_term',
    'entity_view-user' => 'entity_view-user',
    'views-events' => 'views-events',
    'views_panes-events-panel_pane_1' => 'views_panes-events-panel_pane_1',
    'views_panes-events-panel_pane_2' => 'views_panes-events-panel_pane_2',
    'views_panes-events-panel_pane_3' => 'views_panes-events-panel_pane_3',
    'vocabulary_terms-vocabulary_terms' => 'vocabulary_terms-vocabulary_terms',
    'user_picture-user_picture' => 'user_picture-user_picture',
    'user_profile-user_profile' => 'user_profile-user_profile',
    'user_signature-user_signature' => 'user_signature-user_signature',
    'term_description-term_description' => 'term_description-term_description',
    'term_list-term_list' => 'term_list-term_list',
    'search_form-search_form' => 'search_form-search_form',
    'search_result-search_result' => 'search_result-search_result',
    'page_actions-page_actions' => 'page_actions-page_actions',
    'page_breadcrumb-page_breadcrumb' => 'page_breadcrumb-page_breadcrumb',
    'page_feed_icons-page_feed_icons' => 'page_feed_icons-page_feed_icons',
    'page_help-page_help' => 'page_help-page_help',
    'page_logo-page_logo' => 'page_logo-page_logo',
    'page_messages-page_messages' => 'page_messages-page_messages',
    'page_primary_links-page_primary_links' => 'page_primary_links-page_primary_links',
    'page_secondary_links-page_secondary_links' => 'page_secondary_links-page_secondary_links',
    'page_site_name-page_site_name' => 'page_site_name-page_site_name',
    'page_slogan-page_slogan' => 'page_slogan-page_slogan',
    'page_tabs-page_tabs' => 'page_tabs-page_tabs',
    'page_title-page_title' => 'page_title-page_title',
    'node_form_author-node_form_author' => 'node_form_author-node_form_author',
    'node_form_buttons-node_form_buttons' => 'node_form_buttons-node_form_buttons',
    'node_form_log-node_form_log' => 'node_form_log-node_form_log',
    'node_form_menu-node_form_menu' => 'node_form_menu-node_form_menu',
    'node_form_path-node_form_path' => 'node_form_path-node_form_path',
    'node_form_publishing-node_form_publishing' => 'node_form_publishing-node_form_publishing',
    'node_form_title-node_form_title' => 'node_form_title-node_form_title',
    'node_attachments-node_attachments' => 'node_attachments-node_attachments',
    'node_author-node_author' => 'node_author-node_author',
    'node_body-node_body' => 'node_body-node_body',
    'node_content-node_content' => 'node_content-node_content',
    'node_created-node_created' => 'node_created-node_created',
    'node_links-node_links' => 'node_links-node_links',
    'node_terms-node_terms' => 'node_terms-node_terms',
    'node_title-node_title' => 'node_title-node_title',
    'node_type_desc-node_type_desc' => 'node_type_desc-node_type_desc',
    'node_updated-node_updated' => 'node_updated-node_updated',
    'node-node' => 'node-node',
    'form-form' => 'form-form',
    'views_attachments-views_attachments' => 'views_attachments-views_attachments',
    'views_empty-views_empty' => 'views_empty-views_empty',
    'views_exposed-views_exposed' => 'views_exposed-views_exposed',
    'views_feed-views_feed' => 'views_feed-views_feed',
    'views_footer-views_footer' => 'views_footer-views_footer',
    'views_header-views_header' => 'views_header-views_header',
    'views_pager-views_pager' => 'views_pager-views_pager',
    'views_row-views_row' => 'views_row-views_row',
    'views_view-views_view' => 'views_view-views_view',
    'panelizer_form_default-panelizer_form_default' => 'panelizer_form_default-panelizer_form_default',
  );
  $export['panelizer_node:events_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:events_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:events_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_events_pattern';
  $strongarm->value = 'event/[node:title]';
  $export['pathauto_node_events_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_events';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_events'] = $strongarm;

  return $export;
}

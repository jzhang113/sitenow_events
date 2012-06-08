<?php
/**
 * @file
 * sitenow_events_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function sitenow_events_content_content_defaults() {
  $content = array();

  $content['sitenow_event1'] = (object) array(
    'exported_path' => 'event/test-event-1',
    'title' => 'Test Event 1',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'events',
    'language' => 'und',
    'created' => '1335286620',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'sitenow_event1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Ut eu nulla sed lacus gravida auctor. Donec ultricies, metus vitae consequat gravida, nunc neque ultricies odio; sit amet pellentesque elit arcu ut nisl. Maecenas sit amet auctor eros. Phasellus feugiat, turpis et eleifend iaculis, est ligula sollicitudin eros, ac mollis massa enim ac libero. Suspendisse tempor fringilla vulputate. Nulla ultrices tempus quam id dignissim. Curabitur cursus magna id elit lobortis rutrum. Donec lectus libero, dignissim et ullamcorper ac, semper a nulla. Maecenas vitae vestibulum nisl. Etiam quis tellus ipsum, vitae mattis sem? Pellentesque ut purus sem. Duis ut tincidunt felis. Aenean facilisis mauris ut turpis porttitor ornare id at nibh. Pellentesque lacus velit, sodales at consectetur non, mollis et massa. Nunc bibendum, erat vel varius aliquam; arcu elit vehicula dui, in ultrices eros dui ut arcu. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.<br /><br />Quisque tempor porttitor augue, a faucibus purus pretium ac. Sed interdum velit ac mauris imperdiet rhoncus. Etiam pulvinar tellus metus, ac ornare diam. Nunc ultrices congue neque sed sollicitudin. Vestibulum arcu neque, mattis in faucibus eget, pharetra eu ipsum. Donec scelerisque placerat diam eget congue. Integer sodales lorem vel metus tincidunt sodales.<br />&nbsp;</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Ut eu nulla sed lacus gravida auctor. Donec ultricies, metus vitae consequat gravida, nunc neque ultricies odio; sit amet pellentesque elit arcu ut nisl. Maecenas sit amet auctor eros. Phasellus feugiat, turpis et eleifend iaculis, est ligula sollicitudin eros, ac mollis massa enim ac libero. Suspendisse tempor fringilla vulputate. Nulla ultrices tempus quam id dignissim. Curabitur cursus magna id elit lobortis rutrum. Donec lectus libero, dignissim et ullamcorper ac, semper a nulla. Maecenas vitae vestibulum nisl. Etiam quis tellus ipsum, vitae mattis sem? Pellentesque ut purus sem. Duis ut tincidunt felis. Aenean facilisis mauris ut turpis porttitor ornare id at nibh. Pellentesque lacus velit, sodales at consectetur non, mollis et massa. Nunc bibendum, erat vel varius aliquam; arcu elit vehicula dui, in ultrices eros dui ut arcu. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.</p>
<p>Quisque tempor porttitor augue, a faucibus purus pretium ac. Sed interdum velit ac mauris imperdiet rhoncus. Etiam pulvinar tellus metus, ac ornare diam. Nunc ultrices congue neque sed sollicitudin. Vestibulum arcu neque, mattis in faucibus eget, pharetra eu ipsum. Donec scelerisque placerat diam eget congue. Integer sodales lorem vel metus tincidunt sodales.<br /> </p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-04-25 15:00:00',
          'value2' => '2013-04-25 17:00:00',
          'rrule' => NULL,
          'timezone' => 'America/Chicago',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_location' => array(
      'und' => array(
        0 => array(
          'country' => 'US',
          'administrative_area' => 'IA',
          'sub_administrative_area' => NULL,
          'locality' => 'Iowa City',
          'dependent_locality' => NULL,
          'postal_code' => '52242',
          'thoroughfare' => '2800 University Capitol Centre',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => NULL,
          'name_line' => '',
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
  );

  $content['sitenow_event2'] = (object) array(
    'exported_path' => 'event/test-event-2',
    'title' => 'Test Event 2',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'events',
    'language' => 'und',
    'created' => '1335388255',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'sitenow_event2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Donec feugiat, arcu sed eleifend sodales, nulla justo tempor ante, sit amet iaculis nulla ipsum at purus. Suspendisse potenti. Phasellus ut iaculis ipsum. Aliquam erat volutpat. Vestibulum tincidunt pulvinar nisi in semper. Vestibulum egestas sem vitae nisi facilisis consequat. Etiam tristique eros sit amet risus condimentum laoreet. Integer mi mi; interdum ac ornare et, molestie quis nunc. Sed at semper massa. Morbi elit erat, mattis vitae dictum quis, viverra id justo? In a urna nisl, non auctor sem. Nam rhoncus, urna et hendrerit varius; odio eros cursus ante, at sagittis elit quam id lacus.<br /><br />Maecenas arcu arcu, luctus et posuere non, auctor ultricies nulla. Integer euismod diam nec sem venenatis luctus. Aenean ante magna, eleifend aliquam iaculis in; dapibus egestas ligula! Mauris lectus ligula, posuere non suscipit ac, tincidunt quis massa. Quisque egestas, neque in tempus tempor, quam augue tincidunt tellus, hendrerit laoreet purus orci et ligula. Etiam ornare egestas mauris eu fermentum. Maecenas neque massa, tincidunt quis consectetur quis, posuere a purus. Sed vehicula iaculis justo, scelerisque ornare est mollis sed? Cras tortor urna, tincidunt nec lobortis id, dignissim malesuada nibh. Sed quis ante mi, auctor pellentesque orci. Nullam arcu metus, iaculis in congue eget; suscipit sed mauris.<br />&nbsp;</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Donec feugiat, arcu sed eleifend sodales, nulla justo tempor ante, sit amet iaculis nulla ipsum at purus. Suspendisse potenti. Phasellus ut iaculis ipsum. Aliquam erat volutpat. Vestibulum tincidunt pulvinar nisi in semper. Vestibulum egestas sem vitae nisi facilisis consequat. Etiam tristique eros sit amet risus condimentum laoreet. Integer mi mi; interdum ac ornare et, molestie quis nunc. Sed at semper massa. Morbi elit erat, mattis vitae dictum quis, viverra id justo? In a urna nisl, non auctor sem. Nam rhoncus, urna et hendrerit varius; odio eros cursus ante, at sagittis elit quam id lacus.</p>
<p>Maecenas arcu arcu, luctus et posuere non, auctor ultricies nulla. Integer euismod diam nec sem venenatis luctus. Aenean ante magna, eleifend aliquam iaculis in; dapibus egestas ligula! Mauris lectus ligula, posuere non suscipit ac, tincidunt quis massa. Quisque egestas, neque in tempus tempor, quam augue tincidunt tellus, hendrerit laoreet purus orci et ligula. Etiam ornare egestas mauris eu fermentum. Maecenas neque massa, tincidunt quis consectetur quis, posuere a purus. Sed vehicula iaculis justo, scelerisque ornare est mollis sed? Cras tortor urna, tincidunt nec lobortis id, dignissim malesuada nibh. Sed quis ante mi, auctor pellentesque orci. Nullam arcu metus, iaculis in congue eget; suscipit sed mauris.<br /> </p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-06-12 05:00:00',
          'value2' => '2013-06-12 05:00:00',
          'rrule' => NULL,
          'timezone' => 'America/Chicago',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_location' => array(
      'und' => array(
        0 => array(
          'country' => 'US',
          'administrative_area' => '',
          'sub_administrative_area' => NULL,
          'locality' => '',
          'dependent_locality' => NULL,
          'postal_code' => '',
          'thoroughfare' => '',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => NULL,
          'name_line' => '',
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
  );

return $content;
}

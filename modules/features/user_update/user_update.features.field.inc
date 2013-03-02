<?php
/**
 * @file
 * user_update.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function user_update_field_default_fields() {
  $fields = array();

  // Exported field: 'user-user-field_availability'.
  $fields['user-user-field_availability'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_availability',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'availability_calendar',
      'settings' => array(
        'allocation_type' => 'day',
        'allowed_states' => array(
          1 => 0,
          2 => '2',
          3 => '3',
          4 => '4',
        ),
        'default_state' => '2',
      ),
      'translatable' => '0',
      'type' => 'availability_calendar',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'availability_calendar',
          'settings' => array(
            'first_day_of_week' => 1,
            'selectable' => TRUE,
            'show_number_of_months' => 12,
            'show_only_first_letter' => 0,
            'show_split_day' => 0,
            'show_week_number' => 0,
            'viewport' => array(
              'button_placement' => 'after',
              'cols' => 3,
              'dimensions_calculation' => 'fixed',
              'rows' => 1,
              'scroll' => 1,
            ),
          ),
          'type' => 'availability_calendar_viewport',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_availability',
      'label' => 'Availability',
      'required' => 1,
      'settings' => array(
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'availability_calendar',
        'settings' => array(
          'allow_disable' => 1,
          'first_day_of_week' => '1',
          'show_number_of_months' => '1',
          'show_only_first_letter' => 0,
          'show_split_day' => FALSE,
          'show_week_number' => 0,
        ),
        'type' => 'availability_calendar',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'user-user-field_book_availability'.
  $fields['user-user-field_book_availability'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_book_availability',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'availability_calendar_booking_formlet',
      'settings' => array(
        'booked_state' => '3',
        'define_per_language' => 0,
        'post_url' => array(
          'und' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'availability_calendar_booking_formlet',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'availability_calendar_booking_formlet',
          'settings' => array(
            'preset_begin_date_key' => '',
            'preset_begin_date_source' => 'none',
            'preset_end_date_key' => '',
            'preset_end_date_source' => 'none',
            'single_day_only' => FALSE,
            'submit_only' => FALSE,
          ),
          'type' => 'availability_calendar_booking_formlet',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_book_availability',
      'label' => 'Book Availability',
      'required' => 0,
      'settings' => array(
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'availability_calendar_booking_formlet',
        'settings' => array(),
        'type' => 'availability_calendar_booking_formlet',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'user-user-field_first_name'.
  $fields['user-user-field_first_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_first_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_first_name',
      'label' => 'First Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'user-user-field_last_name'.
  $fields['user-user-field_last_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_last_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_last_name',
      'label' => 'Last Name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Availability');
  t('Book Availability');
  t('First Name');
  t('Last Name');

  return $fields;
}

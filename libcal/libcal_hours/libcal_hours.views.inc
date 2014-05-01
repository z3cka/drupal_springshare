<?php

function libcal_hours_views_data() {
	$data = array();
	// basic table info
	$data['libcal_hours_date']['table']['group'] = t('LibCal');
	$data['libcal_hours_time']['table']['group'] = t('LibCal');
	// two-step join
	$data['libcal_hours_time']['table']['join']['node'] = array(
	  'left_table' => 'libcal_hours_date',
	  'left_field' => 'did',
	  'field' => 'did'
	);
	$data['libcal_hours_date']['table']['join']['node'] = array(
	  'left_field' => 'nid',
	  'field' => 'nid',
	);
	// location date field
	$data['libcal_hours_date']['date'] = array(
	  'title' => t('Location date'),
	  'help' => t('One date for one location'),
	  'field' => array(
	    'handler' => 'views_handler_field_date',
	  ),
	  'sort' => array(
	    'handler' => 'views_handler_sort_date',
	  ),
	  'filter' => array(
	    'handler' => 'views_handler_filter_date',
	  ),
	);
	// status field
	$data['libcal_hours_date']['status'] = array(
	  'title' => t('Location date status'),
	  'help' => t('The status for one date at one location'),
	  'field' => array(
	    'handler' => 'views_handler_field',
	  ),
	  'sort' => array(
	    'handler' => 'views_handler_sort',
	  ),
	  'filter' => array(
	    'handler' => 'views_handler_filter',
	  ),
	);
	// note field
	$data['libcal_hours_date']['note'] = array(
	  'title' => t('Location date note'),
	  'help' => t('The note for date at one location'),
	  'field' => array(
	    'handler' => 'views_handler_field',
	  ),
	  'sort' => array(
	    'handler' => 'views_handler_sort',
	  ),
	  'filter' => array(
	    'handler' => 'views_handler_filter',
	  ),
	);
	// time spans
	$data['libcal_hours_time']['from_time'] = array(
	  'title' => t('Span start time'),
	  'help' => t('The start of a span of open hours.'),
	  'field' => array(
	    'handler' => 'views_handler_field_date',
	  ),
	  'sort' => array(
	    'handler' => 'views_handler_sort_date',
	  ),
	  'filter' => array(
	    'handler' => 'views_handler_filter_date',
	  ),
	);
	$data['libcal_hours_time']['to_time'] = array(
	  'title' => t('Span end time'),
	  'help' => t('The end of a span of open hours.'),
	  'field' => array(
	    'handler' => 'views_handler_field_date',
	  ),
	  'sort' => array(
	    'handler' => 'views_handler_sort_date',
	  ),
	  'filter' => array(
	    'handler' => 'views_handler_filter_date',
	  ),
	);
	return $data;
}

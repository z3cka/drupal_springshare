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
	  'title' => t('Location Date'),
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

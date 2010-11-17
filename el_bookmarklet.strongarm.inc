<?php

/**
 * Implementation of hook_strongarm().
 */
function el_bookmarklet_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bookmarklet_blog';
  $strongarm->value = array(
    'title' => 0,
    'taxonomy' => 1,
    'menu' => 0,
    'body_field' => 1,
    'teaser_js' => 0,
    'teaser_include' => 0,
    'body' => 0,
    'format' => 0,
    '1' => 0,
    '2' => 0,
    '3' => 0,
    'buttons' => 1,
    'submit' => 0,
    'preview' => 0,
    'author' => 0,
    'name' => 0,
    'date' => 0,
    'revision_information' => 0,
    'revision' => 0,
    'log' => 0,
    'options' => 0,
    'status' => 0,
    'promote' => 0,
    'sticky' => 0,
    'comment_settings' => 0,
    'comment' => 0,
    'field_link' => 1,
  );

  $export['bookmarklet_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bookmarklet_constant';
  $strongarm->value = '';

  $export['bookmarklet_constant'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bookmarklet_default_node_type';
  $strongarm->value = 'blog';

  $export['bookmarklet_default_node_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bookmarklet_node_types';
  $strongarm->value = array(
    'blog' => 'blog',
    'page' => 0,
    'story' => 0,
  );

  $export['bookmarklet_node_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bookmarklet_stylesheet';
  $strongarm->value = 'http://servicesintegration.ergonlogic.net/sites/servicesintegration.ergonlogic.net/modules/bookmarklet/css/bookmarklet.css';

  $export['bookmarklet_stylesheet'] = $strongarm;
  return $export;
}

<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function el_bookmarklet_taxonomy_default_vocabularies() {
  return array(
    'bookmarklet_tags' => array(
      'name' => 'Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_bookmarklet_tags',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
  );
}

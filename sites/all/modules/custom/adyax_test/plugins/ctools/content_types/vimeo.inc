<?php

/**
 * @file:
 *  Ctools content type - Vimeo
 */

$plugin = [
  'title' => t('Vimeo'),
  'description' => t('Vimeo content type.'),
  'single' => TRUE,
  'content_types' => ['no_context_content_type'],
  'render callback' => 'adyax_test_vimeo_render_callback',
  'defaults' => [],
  'edit form' => 'adyax_test_vimeo_edit_form',
  'category' => [t('Vimeo')],
];

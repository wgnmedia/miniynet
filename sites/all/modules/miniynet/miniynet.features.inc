<?php

/**
 * Implementation of hook_content_default_fields().
 */
function miniynet_content_default_fields() {
  module_load_include('inc', 'miniynet', 'miniynet.defaults');
  $args = func_get_args();
  return call_user_func_array('_miniynet_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function miniynet_ctools_plugin_api() {
  module_load_include('inc', 'miniynet', 'miniynet.defaults');
  $args = func_get_args();
  return call_user_func_array('_miniynet_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_flag_default_flags().
 */
function miniynet_flag_default_flags() {
  module_load_include('inc', 'miniynet', 'miniynet.defaults');
  $args = func_get_args();
  return call_user_func_array('_miniynet_flag_default_flags', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function miniynet_imagecache_default_presets() {
  module_load_include('inc', 'miniynet', 'miniynet.defaults');
  $args = func_get_args();
  return call_user_func_array('_miniynet_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function miniynet_node_info() {
  module_load_include('inc', 'miniynet', 'miniynet.features.node');
  $args = func_get_args();
  return call_user_func_array('_miniynet_node_info', $args);
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function miniynet_default_page_manager_pages() {
  module_load_include('inc', 'miniynet', 'miniynet.defaults');
  $args = func_get_args();
  return call_user_func_array('_miniynet_default_page_manager_pages', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function miniynet_strongarm() {
  module_load_include('inc', 'miniynet', 'miniynet.defaults');
  $args = func_get_args();
  return call_user_func_array('_miniynet_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function miniynet_views_default_views() {
  module_load_include('inc', 'miniynet', 'miniynet.features.views');
  $args = func_get_args();
  return call_user_func_array('_miniynet_views_default_views', $args);
}

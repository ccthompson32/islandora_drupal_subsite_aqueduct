<?php
/**
 * @file
 * laadp_arch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function laadp_arch_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
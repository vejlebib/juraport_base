<?php
/**
 * @file
 * juraport_base.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function juraport_base_locale_default_languages() {
  $languages = array();

  // Exported language: da.
  $languages['da'] = array(
    'language' => 'da',
    'name' => 'Danish',
    'native' => 'Dansk',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'da',
    'weight' => 0,
  );
  return $languages;
}

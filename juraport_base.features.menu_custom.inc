<?php
/**
 * @file
 * juraport_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function juraport_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'A menu for the footer of the Juraport site.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu for the footer of the Juraport site.');
  t('Footer menu');


  return $menus;
}

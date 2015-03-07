<?php
/**
 * @file
 * juraport_base.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function juraport_base_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name]',
      ),
      'description' => array(
        'value' => 'Bibliotekernes JURAPORT er et tilbud fra bibliotekerne til dem der har brug for en håndsrækning til hverdagens juridiske spørgsmål. Ved hver af de juridiske emner på Bibliotekernes JURAPORT finder du også selvbetjeningsløsnin-ger, der passer til.',
      ),
      'abstract' => array(
        'value' => 'Bibliotekernes JURAPORT er et tilbud fra bibliotekerne til dem der har brug for en håndsrækning til hverdagens juridiske spørgsmål. Ved hver af de juridiske emner på Bibliotekernes JURAPORT finder du også selvbetjeningsløsnin-ger, der passer til.',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  return $config;
}

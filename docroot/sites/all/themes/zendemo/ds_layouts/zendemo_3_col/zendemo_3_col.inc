<?php

/**
 * @file
 * Display Suite Zendemo 3 col configuration.
 */

function ds_zendemo_3_col() {
  return array(
    'label' => t('Zendemo 3 col'),
    'regions' => array(
      'left' => t('Left'),
      'center' => t('Center'),
      'right' => t('Right'),
    ),
    // Uncomment if you want to include a CSS file for this layout (zendemo_3_col.css)
    'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (zendemo_3_col.png)
    // 'image' => TRUE,
  );
}

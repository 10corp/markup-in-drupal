<?php

// Function name is ds_LAYOUT_KEY
function ds_zendemo_2col() {
    return array(
        'label' => t('Zendemo 2col'),
        'regions' => array(
            // The key of this region name is also the variable used in
            // the template to print the content of that region.
            'left' => t('Left'),
            'right' => t('Right'),
        ),
        // Add this if there is a default css file.
        'css' => TRUE,
        // Add this if there is a default preview image
        'image' => TRUE,
    );
}
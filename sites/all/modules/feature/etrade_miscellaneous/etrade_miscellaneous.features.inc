<?php
/**
 * @file
 * etrade_miscellaneous.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function etrade_miscellaneous_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function etrade_miscellaneous_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function etrade_miscellaneous_image_default_styles() {
  $styles = array();

  // Exported image style: md_slider_1_bg.
  $styles['md_slider_1_bg'] = array(
    'label' => 'md_slider_1_bg',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 500,
          'scaleup' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: md_slider_1_thumb.
  $styles['md_slider_1_thumb'] = array(
    'label' => 'md_slider_1_thumb',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
          'scaleup' => FALSE,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_install().
 */
function etrade_miscellaneous_install() {
$sliders = array(
  1 => array(
    'slid' => 1,
    'title' => 'Home page slider',
    'description' => '',
    'machine_name' => 'home-page-slider',
    'settings' => 'a:30:{s:10:"full_width";i:0;s:5:"width";s:3:"960";s:6:"height";s:3:"500";s:11:"touch_swipe";i:1;s:10:"responsive";i:1;s:8:"videobox";i:0;s:4:"loop";i:1;s:10:"loadingbar";s:3:"bar";s:12:"bar_position";s:6:"bottom";s:21:"show_next_prev_button";i:1;s:9:"auto_play";i:1;s:11:"pause_hover";i:1;s:11:"show_bullet";i:0;s:15:"bullet_position";s:1:"5";s:14:"show_thumbnail";i:1;s:18:"thumbnail_position";s:1:"1";s:12:"border_style";s:1:"0";s:16:"dropshadow_style";s:1:"0";s:9:"animation";s:4:"fade";s:5:"delay";s:4:"8000";s:9:"transtime";s:3:"800";s:11:"thumb_width";s:3:"100";s:12:"thumb_height";s:2:"75";s:18:"create_bg_imgstyle";i:1;s:10:"dmf_google";s:0:"";s:15:"enable_font_css";i:0;s:17:"generate_css_file";i:0;s:8:"on_start";s:0:"";s:6:"on_end";s:0:"";s:11:"color_saved";s:13:"ff9900,CC0000";}',
  ),
);
foreach ($sliders as $slider) {
	$slider = (object)$slider;
	$slider = _md_slider_recast('MDSlider',$slider);
	$slider->slid = NULL;

	if (!MDSlider::get_by_machine_name($slider->machine_name))
		$slider->save();
}
}

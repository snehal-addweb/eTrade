<?php
/**
 * @file
 * etrade_blocks_and_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function etrade_blocks_and_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'countrywise_commodities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Countrywise Commodities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Countrywise Commodities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Price per metric ton */
  $handler->display->display_options['fields']['field_price_per_metric_ton']['id'] = 'field_price_per_metric_ton';
  $handler->display->display_options['fields']['field_price_per_metric_ton']['table'] = 'field_data_field_price_per_metric_ton';
  $handler->display->display_options['fields']['field_price_per_metric_ton']['field'] = 'field_price_per_metric_ton';
  $handler->display->display_options['fields']['field_price_per_metric_ton']['label'] = '';
  $handler->display->display_options['fields']['field_price_per_metric_ton']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_per_metric_ton']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Total Quantity */
  $handler->display->display_options['fields']['field_total_quantity']['id'] = 'field_total_quantity';
  $handler->display->display_options['fields']['field_total_quantity']['table'] = 'field_data_field_total_quantity';
  $handler->display->display_options['fields']['field_total_quantity']['field'] = 'field_total_quantity';
  $handler->display->display_options['fields']['field_total_quantity']['label'] = '';
  $handler->display->display_options['fields']['field_total_quantity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_total_quantity']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Load Port */
  $handler->display->display_options['fields']['field_load_port']['id'] = 'field_load_port';
  $handler->display->display_options['fields']['field_load_port']['table'] = 'field_data_field_load_port';
  $handler->display->display_options['fields']['field_load_port']['field'] = 'field_load_port';
  $handler->display->display_options['fields']['field_load_port']['label'] = '';
  $handler->display->display_options['fields']['field_load_port']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_load_port']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commodity' => 'commodity',
  );
  /* Filter criterion: Location: Country */
  $handler->display->display_options['filters']['country']['id'] = 'country';
  $handler->display->display_options['filters']['country']['table'] = 'location';
  $handler->display->display_options['filters']['country']['field'] = 'country';
  $handler->display->display_options['filters']['country']['value'] = array(
    'af' => 'af',
    'ax' => 'ax',
    'al' => 'al',
    'dz' => 'dz',
    'as' => 'as',
    'ad' => 'ad',
    'ao' => 'ao',
    'ai' => 'ai',
    'aq' => 'aq',
    'ag' => 'ag',
    'ar' => 'ar',
    'am' => 'am',
    'aw' => 'aw',
    'au' => 'au',
    'at' => 'at',
    'az' => 'az',
    'bs' => 'bs',
    'bh' => 'bh',
    'bd' => 'bd',
    'bb' => 'bb',
    'by' => 'by',
    'be' => 'be',
    'bz' => 'bz',
    'bj' => 'bj',
    'bm' => 'bm',
    'bt' => 'bt',
    'bo' => 'bo',
    'ba' => 'ba',
    'bw' => 'bw',
    'bv' => 'bv',
    'br' => 'br',
    'io' => 'io',
    'vg' => 'vg',
    'bn' => 'bn',
    'bg' => 'bg',
    'bf' => 'bf',
    'bi' => 'bi',
    'kh' => 'kh',
    'cm' => 'cm',
    'ca' => 'ca',
    'cv' => 'cv',
    'bq' => 'bq',
    'ky' => 'ky',
    'cf' => 'cf',
    'td' => 'td',
    'cl' => 'cl',
    'cn' => 'cn',
    'cx' => 'cx',
    'cc' => 'cc',
    'co' => 'co',
    'km' => 'km',
    'cg' => 'cg',
    'cd' => 'cd',
    'ck' => 'ck',
    'cr' => 'cr',
    'hr' => 'hr',
    'cu' => 'cu',
    'cw' => 'cw',
    'cy' => 'cy',
    'cz' => 'cz',
    'dk' => 'dk',
    'dj' => 'dj',
    'dm' => 'dm',
    'do' => 'do',
    'ec' => 'ec',
    'eg' => 'eg',
    'sv' => 'sv',
    'gq' => 'gq',
    'er' => 'er',
    'ee' => 'ee',
    'et' => 'et',
    'fk' => 'fk',
    'fo' => 'fo',
    'fj' => 'fj',
    'fi' => 'fi',
    'fr' => 'fr',
    'gf' => 'gf',
    'pf' => 'pf',
    'tf' => 'tf',
    'ga' => 'ga',
    'gm' => 'gm',
    'ge' => 'ge',
    'de' => 'de',
    'gh' => 'gh',
    'gi' => 'gi',
    'gr' => 'gr',
    'gl' => 'gl',
    'gd' => 'gd',
    'gp' => 'gp',
    'gu' => 'gu',
    'gt' => 'gt',
    'gg' => 'gg',
    'gn' => 'gn',
    'gw' => 'gw',
    'gy' => 'gy',
    'ht' => 'ht',
    'hm' => 'hm',
    'hn' => 'hn',
    'hk' => 'hk',
    'hu' => 'hu',
    'is' => 'is',
    'in' => 'in',
    'id' => 'id',
    'ir' => 'ir',
    'iq' => 'iq',
    'ie' => 'ie',
    'im' => 'im',
    'il' => 'il',
    'it' => 'it',
    'ci' => 'ci',
    'jm' => 'jm',
    'jp' => 'jp',
    'je' => 'je',
    'jo' => 'jo',
    'kz' => 'kz',
    'ke' => 'ke',
    'ki' => 'ki',
    'kw' => 'kw',
    'kg' => 'kg',
    'la' => 'la',
    'lv' => 'lv',
    'lb' => 'lb',
    'ls' => 'ls',
    'lr' => 'lr',
    'ly' => 'ly',
    'li' => 'li',
    'lt' => 'lt',
    'lu' => 'lu',
    'mo' => 'mo',
    'mk' => 'mk',
    'mg' => 'mg',
    'mw' => 'mw',
    'my' => 'my',
    'mv' => 'mv',
    'ml' => 'ml',
    'mt' => 'mt',
    'mh' => 'mh',
    'mq' => 'mq',
    'mr' => 'mr',
    'mu' => 'mu',
    'yt' => 'yt',
    'mx' => 'mx',
    'fm' => 'fm',
    'md' => 'md',
    'mc' => 'mc',
    'mn' => 'mn',
    'me' => 'me',
    'ms' => 'ms',
    'ma' => 'ma',
    'mz' => 'mz',
    'mm' => 'mm',
    'na' => 'na',
    'nr' => 'nr',
    'np' => 'np',
    'nl' => 'nl',
    'an' => 'an',
    'nc' => 'nc',
    'nz' => 'nz',
    'ni' => 'ni',
    'ne' => 'ne',
    'ng' => 'ng',
    'nu' => 'nu',
    'nf' => 'nf',
    'mp' => 'mp',
    'kp' => 'kp',
    'no' => 'no',
    'om' => 'om',
    'pk' => 'pk',
    'pw' => 'pw',
    'ps' => 'ps',
    'pa' => 'pa',
    'pg' => 'pg',
    'py' => 'py',
    'pe' => 'pe',
    'ph' => 'ph',
    'pn' => 'pn',
    'pl' => 'pl',
    'pt' => 'pt',
    'pr' => 'pr',
    'qa' => 'qa',
    're' => 're',
    'ro' => 'ro',
    'ru' => 'ru',
    'rw' => 'rw',
    'bl' => 'bl',
    'sh' => 'sh',
    'kn' => 'kn',
    'lc' => 'lc',
    'mf' => 'mf',
    'pm' => 'pm',
    'vc' => 'vc',
    'ws' => 'ws',
    'sm' => 'sm',
    'st' => 'st',
    'sa' => 'sa',
    'sn' => 'sn',
    'rs' => 'rs',
    'sc' => 'sc',
    'sl' => 'sl',
    'sg' => 'sg',
    'sx' => 'sx',
    'sk' => 'sk',
    'si' => 'si',
    'sb' => 'sb',
    'so' => 'so',
    'za' => 'za',
    'gs' => 'gs',
    'kr' => 'kr',
    'ss' => 'ss',
    'es' => 'es',
    'lk' => 'lk',
    'sd' => 'sd',
    'sr' => 'sr',
    'sj' => 'sj',
    'sz' => 'sz',
    'se' => 'se',
    'ch' => 'ch',
    'sy' => 'sy',
    'tw' => 'tw',
    'tj' => 'tj',
    'tz' => 'tz',
    'th' => 'th',
    'tl' => 'tl',
    'tg' => 'tg',
    'tk' => 'tk',
    'to' => 'to',
    'tt' => 'tt',
    'tn' => 'tn',
    'tr' => 'tr',
    'tm' => 'tm',
    'tc' => 'tc',
    'tv' => 'tv',
    'vi' => 'vi',
    'ug' => 'ug',
    'ua' => 'ua',
    'ae' => 'ae',
    'gb' => 'gb',
    'us' => 'us',
    'um' => 'um',
    'uy' => 'uy',
    'uz' => 'uz',
    'vu' => 'vu',
    'va' => 'va',
    've' => 've',
    'vn' => 'vn',
    'wf' => 'wf',
    'eh' => 'eh',
    'ye' => 'ye',
    'zm' => 'zm',
    'zw' => 'zw',
  );
  $handler->display->display_options['filters']['country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['country']['expose']['operator_id'] = 'country_op';
  $handler->display->display_options['filters']['country']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['country']['expose']['operator'] = 'country_op';
  $handler->display->display_options['filters']['country']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['country']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'commodities';

  /* Display: Commodities */
  $handler = $view->new_display('block', 'Commodities', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
global $user;
global $base_url;
$commodity_link = $base_url .\'/dashboard\';
?>
<div class="user-name"><?php echo $user->name; ?></div><div class="user-link"><a href="<?php print $commodity_link ;?>" target="_blank">View Profile</a></div>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = TRUE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php
global $user;
global $base_url;
$commodity_link = $base_url .\'/node/add/commodity\';
?>
<div class="add-commodity"><a href="<?php print $commodity_link ;?>" target="_blank">Add Commodity</a></div>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div>No Commodities Available</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Price per metric ton */
  $handler->display->display_options['fields']['field_price_per_metric_ton']['id'] = 'field_price_per_metric_ton';
  $handler->display->display_options['fields']['field_price_per_metric_ton']['table'] = 'field_data_field_price_per_metric_ton';
  $handler->display->display_options['fields']['field_price_per_metric_ton']['field'] = 'field_price_per_metric_ton';
  $handler->display->display_options['fields']['field_price_per_metric_ton']['label'] = '';
  $handler->display->display_options['fields']['field_price_per_metric_ton']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_per_metric_ton']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Total Quantity */
  $handler->display->display_options['fields']['field_total_quantity']['id'] = 'field_total_quantity';
  $handler->display->display_options['fields']['field_total_quantity']['table'] = 'field_data_field_total_quantity';
  $handler->display->display_options['fields']['field_total_quantity']['field'] = 'field_total_quantity';
  $handler->display->display_options['fields']['field_total_quantity']['label'] = '';
  $handler->display->display_options['fields']['field_total_quantity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_total_quantity']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Load Port */
  $handler->display->display_options['fields']['field_load_port']['id'] = 'field_load_port';
  $handler->display->display_options['fields']['field_load_port']['table'] = 'field_data_field_load_port';
  $handler->display->display_options['fields']['field_load_port']['field'] = 'field_load_port';
  $handler->display->display_options['fields']['field_load_port']['label'] = '';
  $handler->display->display_options['fields']['field_load_port']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_load_port']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commodity' => 'commodity',
  );
  $export['countrywise_commodities'] = $view;

  $view = new view();
  $view->name = 'how_it_works';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'How it works';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'How it works';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_home_image']['id'] = 'field_home_image';
  $handler->display->display_options['fields']['field_home_image']['table'] = 'field_data_field_home_image';
  $handler->display->display_options['fields']['field_home_image']['field'] = 'field_home_image';
  $handler->display->display_options['fields']['field_home_image']['label'] = '';
  $handler->display->display_options['fields']['field_home_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_home_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'how_it_works' => 'how_it_works',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_home_image']['id'] = 'field_home_image';
  $handler->display->display_options['fields']['field_home_image']['table'] = 'field_data_field_home_image';
  $handler->display->display_options['fields']['field_home_image']['field'] = 'field_home_image';
  $handler->display->display_options['fields']['field_home_image']['label'] = '';
  $handler->display->display_options['fields']['field_home_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_home_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = '[title]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Growth */
  $handler->display->display_options['fields']['field_growth']['id'] = 'field_growth';
  $handler->display->display_options['fields']['field_growth']['table'] = 'field_data_field_growth';
  $handler->display->display_options['fields']['field_growth']['field'] = 'field_growth';
  $handler->display->display_options['fields']['field_growth']['label'] = '';
  $handler->display->display_options['fields']['field_growth']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'how-it-works';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_home_image']['id'] = 'field_home_image';
  $handler->display->display_options['fields']['field_home_image']['table'] = 'field_data_field_home_image';
  $handler->display->display_options['fields']['field_home_image']['field'] = 'field_home_image';
  $handler->display->display_options['fields']['field_home_image']['label'] = '';
  $handler->display->display_options['fields']['field_home_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_home_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = '[title]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Growth */
  $handler->display->display_options['fields']['field_growth']['id'] = 'field_growth';
  $handler->display->display_options['fields']['field_growth']['table'] = 'field_data_field_growth';
  $handler->display->display_options['fields']['field_growth']['field'] = 'field_growth';
  $handler->display->display_options['fields']['field_growth']['label'] = '';
  $handler->display->display_options['fields']['field_growth']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $export['how_it_works'] = $view;

  $view = new view();
  $view->name = 'testimonials';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'testimonials';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'testimonials';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '"No Quotes Available"';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonials' => 'testimonials',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'testimonials';

  /* Display: Block for register page */
  $handler = $view->new_display('block', 'Block for register page', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';

  /* Display: Block for header */
  $handler = $view->new_display('block', 'Block for header', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $export['testimonials'] = $view;

  $view = new view();
  $view->name = 'user_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Profile';
  $handler->display->display_options['css_class'] = 'user-profile-dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[uid]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Field: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['label'] = '';
  $handler->display->display_options['fields']['field_company_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_name']['element_label_colon'] = FALSE;
  /* Field: User: Business Type */
  $handler->display->display_options['fields']['field_business_type']['id'] = 'field_business_type';
  $handler->display->display_options['fields']['field_business_type']['table'] = 'field_data_field_business_type';
  $handler->display->display_options['fields']['field_business_type']['field'] = 'field_business_type';
  $handler->display->display_options['fields']['field_business_type']['label'] = '';
  $handler->display->display_options['fields']['field_business_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_business_type']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'user-profile-dashboard-link';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Profile';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_class'] = 'trade-profile-dashboard-link';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return $row;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
global $base_url;
global $user;
$selQry = "SELECT nid FROM node WHERE uid = $row->uid and type = \'user_profile\'";
$execQry = db_query($selQry);
$result = $execQry->fetchAllAssoc(\'nid\');
if(isset($result) && !empty($result)){
	foreach ($result as $key => $value) {
		$nid = $value->nid;
	}
	$profilelink = \'<a href="\'.$base_url.\'/node\'. \'/\' . $nid .\'/edit">Edit Trade Profile</a>\';
}
else{
	$profilelink = \'<a href="\'.$base_url.\'/node/add/user-profile">Create Trade Profile</a>\';
}
echo $profilelink;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-profile';

  /* Display: Profile */
  $handler = $view->new_display('block', 'Profile', 'block_1');
  $export['user_profile'] = $view;

  $view = new view();
  $view->name = 'user_trade_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User Trade Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Trade Profile';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type of Company */
  $handler->display->display_options['fields']['field_company_type']['id'] = 'field_company_type';
  $handler->display->display_options['fields']['field_company_type']['table'] = 'field_data_field_company_type';
  $handler->display->display_options['fields']['field_company_type']['field'] = 'field_company_type';
  $handler->display->display_options['fields']['field_company_type']['label'] = '';
  $handler->display->display_options['fields']['field_company_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['label'] = '';
  $handler->display->display_options['fields']['field_company_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'user_profile' => 'user_profile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-trade-profile';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['user_trade_profile'] = $view;

  return $export;
}

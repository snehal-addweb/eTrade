<?php
/**
 * @file
 * etrade_miscellaneous.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function etrade_miscellaneous_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Dashboard';
  $page->admin_description = '';
  $page->path = 'dashboard';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard__panel';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'dashboard_right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'main-custom-content',
        'hide_empty' => 0,
      ),
      'dashboard_right' => array(
        'type' => 'region',
        'title' => 'Dashboard-right',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'dashboard-rightbar main-custom-content-right',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'dashboard_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'User Dashboard';
  $display->uuid = 'bfdfaf58-836a-4d58-a776-5c25d644f0d2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-abeba2d7-960a-4dfb-94ff-46ef202a0f11';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-dashboard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'abeba2d7-960a-4dfb-94ff-46ef202a0f11';
    $display->content['new-abeba2d7-960a-4dfb-94ff-46ef202a0f11'] = $pane;
    $display->panels['center'][0] = 'new-abeba2d7-960a-4dfb-94ff-46ef202a0f11';
    $pane = new stdClass();
    $pane->pid = 'new-189a2d1f-b449-4658-acfc-4f59a2d17604';
    $pane->panel = 'dashboard_right';
    $pane->type = 'block';
    $pane->subtype = 'block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '189a2d1f-b449-4658-acfc-4f59a2d17604';
    $display->content['new-189a2d1f-b449-4658-acfc-4f59a2d17604'] = $pane;
    $display->panels['dashboard_right'][0] = 'new-189a2d1f-b449-4658-acfc-4f59a2d17604';
    $pane = new stdClass();
    $pane->pid = 'new-9725388e-e149-4b1e-b3c2-5766468aec6c';
    $pane->panel = 'dashboard_right';
    $pane->type = 'block';
    $pane->subtype = 'views-testimonials-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'block-views-testimonials-block-1',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9725388e-e149-4b1e-b3c2-5766468aec6c';
    $display->content['new-9725388e-e149-4b1e-b3c2-5766468aec6c'] = $pane;
    $display->panels['dashboard_right'][1] = 'new-9725388e-e149-4b1e-b3c2-5766468aec6c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'home-about-quote',
        'column_class' => '',
        'row_class' => 'row-page-block',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
        ),
        'parent' => 'canvas',
        'class' => 'home-page-block',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'home_page_bottom_region',
          1 => 'home_page_right_region',
        ),
        'parent' => 'main',
        'class' => 'home-about-quote',
        'hide_empty' => 0,
      ),
      'home_page_bottom_region' => array(
        'type' => 'region',
        'title' => 'Home page bottom region',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'home_page_right_region' => array(
        'type' => 'region',
        'title' => 'Home page right region',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'home_page_right_side_bar' => NULL,
      'home_page_bottom_region' => NULL,
      'home_page_right_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a2d41d20-d880-41db-92bf-0019ae5c3903';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3cde77da-de70-451d-9b73-6a3d115e1d94';
    $pane->panel = 'home_page_bottom_region';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'About Us',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3cde77da-de70-451d-9b73-6a3d115e1d94';
    $display->content['new-3cde77da-de70-451d-9b73-6a3d115e1d94'] = $pane;
    $display->panels['home_page_bottom_region'][0] = 'new-3cde77da-de70-451d-9b73-6a3d115e1d94';
    $pane = new stdClass();
    $pane->pid = 'new-53803ee3-c2d8-4899-9a2b-e43c9772a662';
    $pane->panel = 'home_page_bottom_region';
    $pane->type = 'block';
    $pane->subtype = 'views-how_it_works-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'How it Works?',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '53803ee3-c2d8-4899-9a2b-e43c9772a662';
    $display->content['new-53803ee3-c2d8-4899-9a2b-e43c9772a662'] = $pane;
    $display->panels['home_page_bottom_region'][1] = 'new-53803ee3-c2d8-4899-9a2b-e43c9772a662';
    $pane = new stdClass();
    $pane->pid = 'new-e8a601db-64fd-4cbc-8534-4d2314961b5b';
    $pane->panel = 'home_page_right_region';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Get a Quote',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'get-a-qoute',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e8a601db-64fd-4cbc-8534-4d2314961b5b';
    $display->content['new-e8a601db-64fd-4cbc-8534-4d2314961b5b'] = $pane;
    $display->panels['home_page_right_region'][0] = 'new-e8a601db-64fd-4cbc-8534-4d2314961b5b';
    $pane = new stdClass();
    $pane->pid = 'new-3657f68a-90d2-4ce2-bafd-a4eb56414f7b';
    $pane->panel = 'home_page_right_region';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3657f68a-90d2-4ce2-bafd-a4eb56414f7b';
    $display->content['new-3657f68a-90d2-4ce2-bafd-a4eb56414f7b'] = $pane;
    $display->panels['home_page_right_region'][1] = 'new-3657f68a-90d2-4ce2-bafd-a4eb56414f7b';
    $pane = new stdClass();
    $pane->pid = 'new-0fb66c7a-37a1-4fb0-8ef3-c364dc883dab';
    $pane->panel = 'home_page_right_region';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0fb66c7a-37a1-4fb0-8ef3-c364dc883dab';
    $display->content['new-0fb66c7a-37a1-4fb0-8ef3-c364dc883dab'] = $pane;
    $display->panels['home_page_right_region'][2] = 'new-0fb66c7a-37a1-4fb0-8ef3-c364dc883dab';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}

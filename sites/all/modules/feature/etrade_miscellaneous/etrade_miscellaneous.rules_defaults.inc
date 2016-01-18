<?php
/**
 * @file
 * etrade_miscellaneous.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function etrade_miscellaneous_default_rules_configuration() {
  $items = array();
  $items['rules_blocked_users_after_registration'] = entity_import('rules_config', '{ "rules_blocked_users_after_registration" : {
      "LABEL" : "Blocked Users after Registration",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "user register" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [ { "user_block" : { "account" : [ "account" ] } } ]
    }
  }');
  $items['rules_create_user_trade_profile'] = entity_import('rules_config', '{ "rules_create_user_trade_profile" : {
      "LABEL" : "Create User Trade Profile after Registration",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "user register" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "user_profile",
              "param_title" : [ "account:name" ],
              "param_author" : [ "account" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : { "data" : [ "entity-created:title" ], "value" : "[account:name]" } },
        { "data_set" : {
            "data" : [ "entity-created:field-company-name" ],
            "value" : [ "account:field-company-name" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_redirect_to_dashboard'] = entity_import('rules_config', '{ "rules_redirect_to_dashboard" : {
      "LABEL" : "Redirect to dashboard",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [
        { "redirect" : { "url" : "\\u003C?php\\r\\n       global $base_url;\\r\\n        $user_id = $account-\\u003Euid;\\r\\n\\t$query_userprofle = new EntityFieldQuery();\\r\\n\\t$query_userprofle\\r\\n\\t  -\\u003EentityCondition(\\u0027entity_type\\u0027, \\u0027node\\u0027, \\u0027=\\u0027)\\r\\n\\t  -\\u003EpropertyCondition(\\u0027type\\u0027, \\u0027user_profile\\u0027)\\r\\n\\t  -\\u003EpropertyCondition(\\u0027status\\u0027, NODE_PUBLISHED)\\r\\n\\t  -\\u003EpropertyCondition(\\u0027uid\\u0027, $user_id);\\r\\n\\r\\n  $result_user_nodes = $query_userprofle-\\u003Eexecute();\\r\\n  if(isset($result_user_nodes[\\u0027node\\u0027])) {\\r\\n     foreach ($result_user_nodes[\\u0027node\\u0027] as $nid1 =\\u003E $arrVal) {\\r\\n       $userNid = $arrVal-\\u003Enid;\\r\\n     }\\r\\n   }\\r\\n\\r\\n  $userprofile_link = $base_url . \\u0027\\/node\\/\\u0027 . $userNid . \\u0027\\/edit\\u0027 ;\\r\\n  echo $userprofile_link;\\r\\n?\\u003E" } }
      ]
    }
  }');
  return $items;
}

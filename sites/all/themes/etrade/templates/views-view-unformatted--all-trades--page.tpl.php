<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php
global $user;
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="buy-main-container"><?php print views_embed_view('all_trades','block_2', $user->uid); ?></div>
<div class="sell-main-container"><?php print views_embed_view('all_trades','block_3', $user->uid); ?></div>
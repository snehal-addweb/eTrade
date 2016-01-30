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
<div class="buy-main-container"><?php print views_embed_view('filter_based_on_commodity','block_1', arg(2)); ?></div>
<div class="sell-main-container"><?php print views_embed_view('filter_based_on_commodity','block_2', arg(2)); ?></div>
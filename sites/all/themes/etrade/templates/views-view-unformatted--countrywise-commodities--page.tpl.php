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
<div class="buy-main-container"><?php print views_embed_view('countrywise_commodities','block_4', $user->uid); ?></div>
<div class="sell-main-container"><?php print views_embed_view('countrywise_commodities','block_5', $user->uid); ?></div>
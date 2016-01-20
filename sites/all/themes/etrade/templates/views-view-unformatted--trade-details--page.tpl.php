<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<div class="main-trade-container"><?php
	global $base_url;
	global $user;
	$rows = $view->style_plugin->rendered_fields;
	foreach ($rows as $id => $row): 
		$title = $row['title'];
		$userinfo = user_load($row['uid']);
		$username = $userinfo->name;
		$picture = $row['field_commodity_picture'];
		$qnty = $row['field_total_quantity'];
		$price = $row['field_price_per_metric_ton'];
		$port = $row['field_load_port'];
		$wishlist = $row['ops'];

		?><div class="main-trade-inner-container">
			<div class="main-title-container">
				<div class="trade-title-left">
					<div class="trade-title"><?php print $title;?></div>
			  </div>
				<div class="trade-title-right">
				  <div><span class="yellow-dot"></span><span class="trade-status">Pending</span></div>
					<div class="trade-user"><label>User :</label><span><?php print $username;?></span></div>
				</div>	
		  </div>
			<div class="main-trade-content">
				<div class="trade-content-left">
					<div class="trade-img"><?php print $picture; ?></div>
					<div class="trade-accept">Accept</div>
					<div class="trade-decline">Decline</div>
				</div>
				<div class="trade-content-right">
					<div class="trade-intention"><label>Intention of Trade</label><span></span></div>
					<div class="trade-qnty"><label>Quantity</label><span><?php print $qnty; ?></span></div>
					<div class="trade-price"><label>Price</label><span><?php print $price; ?></span></div>
					<div class="trade-port"><label>Load Port:</label><span><?php print $port; ?></span></div>
					<div class="see-more"><a href="#">See More</a></div>
					<div class="add-to-wishlist"><?php print $wishlist; ?></div>
				</div>
			</div>
    </div>
	<?php endforeach; ?>
</div>
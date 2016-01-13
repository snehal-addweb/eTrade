
<div id="user-login-block-container">
  <div id="user-login-block-form-fields">
    <?php print $name; // Display username field ?>
    <?php print $pass; // Display Password field ?>
    <div class="links forget-pass">
    	<a href="/user/password">Forgot Password</a>
  	</div>
    <?php print $rendered; // Display hidden elements (required for successful login) ?> 
    <?php print $submit; // Display submit button ?>
  </div>
  <div class="links register-now">
  		<label>Become a member</label>
    	<a href="/user/register">Register Now</a> 
  </div>
</div>
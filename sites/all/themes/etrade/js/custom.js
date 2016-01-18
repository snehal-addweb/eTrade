jQuery(document).ready(function() {
  jQuery('.navbar ul.menu').addClass("navbar-nav");

  // User Register Page Header design 
  jQuery('.page-user-register .main-white-header div.container .page-header').html( "<span class='red-text'>User</span>Account" );
  jQuery('.not-logged-in.page-user .main-white-header div.container .page-header').html( "<span class='red-text'>User</span>Account" );
  jQuery('.not-logged-in.page-user-password .main-white-header div.container .page-header').html( "<span class='red-text'>User</span>Account" );
  
  // User Login Page Header design
  jQuery('#block-user-login .block-title').html( "<span class='red-text'>User</span>Login" );

  /* Custom radio button & Checkbox design */
  jQuery('input[type="radio"], input[type="checkbox"]').wrap('<div class="input-rc"></div>');
  jQuery('.input-rc').append('<span class="input-rc-span"></span>');
  /* End */

  jQuery('#views-exposed-form-countrywise-commodities-page div.location_auto_country a').click(function() {
	  jQuery('.view-countrywise-commodities #views-exposed-form-countrywise-commodities-page select#edit-country option').each(function(){

	      var val = jQuery(this).val();
	    	var html_txt = jQuery(this).text();
	      var html_txt = html_txt.replace(" ", "_");
	      var html_txt = html_txt.toLowerCase();
	      
	      jQuery('#views-exposed-form-countrywise-commodities-page div.location_auto_country .chosen-drop ul li').each(function(){
	        var li_html_val = jQuery(this).html();
	        var li_html_txt = jQuery(this).text();
	        var li_html_txt = li_html_txt.replace(" ", "_");
	        var li_html_txt = li_html_txt.toLowerCase();

	        if (li_html_txt == html_txt) {
	          var str_img = '<img src="/sites/all/themes/etrade/images/flags/' + val + '.gif" />';
	          var new_li_val = str_img + li_html_val;
	          jQuery(this).html(new_li_val);
	          jQuery(this).addClass(val);
	        }
	      });
  	});
 	});

});
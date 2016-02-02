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

  /* Custom input file design */
  jQuery('input[type="file"]').wrap('<div class="input-file"><div class="input-file-sub"></div></div>');
  jQuery('.input-file').prepend('<span class="input-file-name"></span>');

  /* Get select file name value */
  jQuery('.input-file-sub input').change(function() {
  var filename = jQuery(this).val();
  jQuery(this).parent().parent().children(".input-file-name").text(filename);
  });
  /* End */

  /* Verified order design*/
  jQuery(".views-table td.views-field-field-guarantee-stamp" ).each(function() {
    var td_class = jQuery(this).text();
    if(td_class == 0) {
      jQuery(this).append('<div class="not-verified">-</div>');
    }
    else {
      jQuery(this).append('<div class="verified">Verified</div>');
    }
  });
  /* End */

  /* Ajax call function */
  jQuery(document).ajaxComplete(function() {
    jQuery('.input-file').removeClass('input-file');
    jQuery('input[type="file"]').unwrap('<div class="input-file"><div class="input-file-sub"></div></div>');
    jQuery('.input-file-name').remove('.input-file-name');
    jQuery('input[type="file"]').wrap('<div class="input-file"><div class="input-file-sub"></div></div>');
    jQuery('.input-file').prepend('<span class="input-file-name"></span>');
    jQuery('.input-file-sub input').change(function() {
      var filename = jQuery(this).val();
      jQuery(this).parents().children(".input-file-name").text(filename);
    });

   /* Custom radio button & Checkbox design */
    jQuery('input[type="radio"], input[type="checkbox"]').wrap('<div class="input-rc"></div>');
    jQuery('.input-rc').append('<span class="input-rc-span"></span>');
  /* End */

  }); 
  /* End */

  /* Commodities Slider */
  jQuery(".view-home-page-ticker .view-content").simplyScroll();
  /* End */

  /* Header Slider */
    jQuery(".view-testimonials .view-content").owlCarousel({
      autoplay:true,
      autoplayTimeout:2000,
      infinite: true,
      direction: "left",
      items : 1,
      loop : true,
      slidesToScroll: 1,
      itemsDesktop : [1199,1],
      itemsDesktopSmall : [979,1]
    });
  /* End */

  jQuery('#views-exposed-form-countrywise-commodities-page div.location_auto_country a').click(function() {
    jQuery('#views-exposed-form-countrywise-commodities-page select#edit-country option').each(function(){

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

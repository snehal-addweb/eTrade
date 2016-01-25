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

 /* jQuery('.ctools-auto-submit-full-form .form-radios .form-type-radio label').click(function() {
    jQuery('.ctools-auto-submit-full-form .form-radios .form-type-radio label').removeClass('radio-active');
    jQuery(this).addClass('radio-active');
  });*/

  /*jQuery('#edit-field-commodity-type-value-0').parents('.form-type-radio label').addClass('radio-active');
  jQuery('#edit-field-commodity-type-value-0').click(function() {
    jQuery('#edit-field-commodity-type-value-1').parents('.form-type-radio label').removeClass('radio-active');
    jQuery('#edit-field-commodity-type-value-0').parents('.form-type-radio label').addClass('radio-active');
  });
  jQuery('#edit-field-commodity-type-value-1').click(function() {
    jQuery('#edit-field-commodity-type-value-0').parents('.form-type-radio label').removeClass('radio-active');
    jQuery('#edit-field-commodity-type-value-1').parents('.form-type-radio label').addClass('radio-active');
  });*/

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

    /* */

   /* if(jQuery('#edit-field-commodity-type-value-0').attr('checked','true')){
      jQuery(this).parents('div.form-type-radio label').addClass('radio-active');
    }
    if(jQuery('#edit-field-commodity-type-value-1').attr('checked','true')){
      jQuery(this).parents('div.form-type-radio').addClass('radio-active');
    }*/
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

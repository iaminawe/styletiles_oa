<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see bootstrap_preprocess_html()
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
$node = menu_get_object();
$bg_patt=$node->field_bg_pattern['und'][0]['target_id'];

$bg_image=$node->field_tile_background_image;

$bg_color="#".$node->field_tile_background_color['und'][0]['jquery_colorpicker'];
$page_bg_color="#".$node->field_color_page['und'][0]['jquery_colorpicker'];
$headline_color="#".$node->field_st_colors['und'][0]['jquery_colorpicker'];
$subhead_color="#".$node->field_secondary_font_color['und'][0]['jquery_colorpicker'];
$paragraph_color="#".$node->field_paragraph_color['und'][0]['jquery_colorpicker'];
$headline_size= $node->field_headline_size['und'][0]['value']."px";

$term=taxonomy_term_load($bg_patt);

$result= $term->field_pattern['und'][0]['uri'];

$bg_path= $bg_image['und'][0]['uri'];



$url = file_create_url($result);
$url = parse_url($url);

$url2 = file_create_url($bg_path);
$url2 = parse_url($url2);



$pattpath = $url['path'];
$bg_path_final = $url2['path'];

?>
<!DOCTYPE html>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?> style="background: url('<?php print $pattpath; ?>'); background-color:<?php print $bg_color; ?>;">
<head profile="<?php print $grddl_profile; ?>">
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <style>
  h1,h2{color:<?php print $headline_color; ?>; font-size: <?php print $headline_size; ?>}
  h3,h4,h5{color:<?php print $subhead_color; ?>}
  body,p{color:<?php print $paragraph_color; ?>}
  </style>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <?php print $scripts; ?>
</head>
<body style="background-image:url('<?php print $bg_path_final; ?>');background-repeat: no-repeat; background-size:contain !important;" class="<?php print $classes; ?> <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>

  <?php print $page_bottom; ?>
</body>
</html>

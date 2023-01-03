<?php
/**
 * @file
 * Defines some field group types.
 */

/**
 * Implements hook_field_group_formatter_info().
 */
function field_group_field_group_formatter_info() {

  return array(
    'form' => array(
      'html-element' => array(
        'label' => t('HTML element'),
        'description' => t('This fieldgroup renders the inner content in a HTML element with classes and attributes.'),
        'instance_settings' => array('element' => 'div', 'show_label' => 0, 'label_element' => 'div', 'classes' => '', 'attributes' => '', 'required_fields' => 1, 'id' => ''),
      ),
      'div' => array(
        'label' => t('Div'),
        'description' => t('This fieldgroup renders the inner content in a simple div with the title as legend.'),
        'format_types' => array('open', 'collapsible', 'collapsed'),
        'instance_settings' => array('description' => '', 'show_label' => 1, 'label_element' => 'h3', 'effect' => 'none', 'speed' => 'fast', 'classes' => '', 'required_fields' => 1, 'id' => ''),
        'default_formatter' => 'open',
      ),
      'html5' => array(
        'label' => t('HTML5'),
        'description' => t('This fieldgroup renders the inner content in a semantic HTML5 wrapper'),
        'instance_settings' => array('wrapper' => '', 'classes' => '', 'id' => ''),
      ),
      'fieldset' => array(
        'label' => t('Fieldset'),
        'description' => t('This fieldgroup renders the inner content in a fieldset with the title as legend.'),
        'format_types' => array('open', 'collapsible', 'collapsed'),
        'instance_settings' => array('description' => '', 'classes' => '', 'required_fields' => 1, 'id' => ''),
        'default_formatter' => 'collapsible',
      ),
      'details' => array(
        'label' => t('Details'),
        'description' => t('This fieldgroup renders the inner content in a Details element with the title as summary.'),
        'format_types' => array('open', 'closed'),
        'instance_settings' => array('description' => '', 'classes' => '', 'required_fields' => 1, 'id' => '', 'label_element' => 'span'),
        'default_formatter' => 'closed',
      ),
      'tabs' => array(
        'label' => t('Vertical tabs group'),
        'description' => t('This fieldgroup renders child groups in its own vertical tabs wrapper.'),
        'instance_settings' => array('classes' => '', 'id' => ''),
      ),
      'tab' => array(
        'label' => t('Vertical tab'),
        'description' => t('This fieldgroup renders the content in a fieldset, part of vertical tabs group.'),
        'format_types' => array('open', 'closed'),
        'instance_settings' => array('description' => '', 'classes' => '', 'required_fields' => 1),
        'default_formatter' => 'closed',
      ),
      'htabs' => array(
        'label' => t('Horizontal tabs group'),
        'description' => t('This fieldgroup renders child groups in its own horizontal tabs wrapper.'),
        'instance_settings' => array('classes' => '', 'id' => ''),
      ),
      'htab' => array(
        'label' => t('Horizontal tab'),
        'format_types' => array('open', 'closed'),
        'description' => t('This fieldgroup renders the content in a fieldset, part of horizontal tabs group.'),
        'default_formatter' => 'closed',
        'instance_settings' => array('description' => '', 'classes' => '', 'required_fields' => 1),
      ),
      'multipage-group' => array(
        'label' => t('Multipage group'),
        'description' => t('This fieldgroup renders groups on separate pages.'),
        'instance_settings' => array('classes' => '', 'page_header' => 3, 'move_additional' => 1, 'page_counter' => 1, 'move_button' => 0),
      ),
      'multipage' => array(
        'label' => t('Multipage'),
        'format_types' => array('start', 'no-start'),
        'description' => t('This fieldgroup renders the content in a page.'),
        'default_formatter' => 'no-start',
        'instance_settings' => array('description' => '', 'classes' => '', 'required_fields' => 1),
      ),
      'accordion' => array(
        'label' => t('Accordion group'),
        'description' => t('This fieldgroup renders child groups as jQuery accordion.'),
        'instance_settings' => array('effect' => 'none', 'classes' => '', 'id' => ''),
      ),
      'accordion-item' => array(
        'label' => t('Accordion item'),
        'format_types' => array('open', 'closed'),
        'description' => t('This fieldgroup renders the content in a div, part of accordion group.'),
        'default_formatter' => 'closed',
        'instance_settings' => array('description' => '', 'classes' => '', 'required_fields' => 1),
      ),
    ),
    'display' => array(
      'html-element' => array(
        'label' => t('HTML element'),
        'description' => t('This fieldgroup renders the inner content in a HTML element with classes and attributes.'),
        'instance_settings' => array('element' => 'div', 'show_label' => 0, 'label_element' => 'div', 'classes' => '', 'attributes' => '', 'required_fields' => 1, 'id' => ''),
      ),
      'div' => array(
        'label' => t('Div'),
        'description' => t('This fieldgroup renders the inner content in a simple div with the title as legend.'),
        'format_types' => array('open', 'collapsible', 'collapsed'),
        'instance_settings' => array('description' => '', 'show_label' => 1, 'label_element' => 'h3', 'effect' => 'none', 'speed' => 'fast', 'classes' => '', 'id' => ''),
        'default_formatter' => 'collapsible',
      ),
      'html5' => array(
        'label' => t('HTML5'),
        'description' => t('This fieldgroup renders the inner content in a semantic HTML5 wrapper'),
        'instance_settings' => array('wrapper' => '', 'classes' => '', 'id' => ''),
      ),
      'fieldset' => array(
        'label' => t('Fieldset'),
        'description' => t('This fieldgroup renders the inner content in a fieldset with the title as legend.'),
        'format_types' => array('open', 'collapsible', 'collapsed'),
        'instance_settings' => array('description' => '', 'classes' => '', 'id' => ''),
        'default_formatter' => 'collapsible',
      ),
      'details' => array(
        'label' => t('Details'),
        'description' => t('This fieldgroup renders the inner content in a Details element with the title as summary.'),
        'format_types' => array('open', 'closed'),
        'instance_settings' => array('description' => '', 'classes' => '', 'required_fields' => 1, 'id' => ''),
        'default_formatter' => 'closed',
      ),
      'tabs' => array(
        'label' => t('Vertical tabs group'),
        'description' => t('This fieldgroup renders child groups in its own vertical tabs wrapper.'),
        'instance_settings' => array('classes' => '', 'id' => ''),
      ),
      'tab' => array(
        'label' => t('Vertical tab'),
        'description' => t('This fieldgroup renders the content in a fieldset, part of vertical tabs group.'),
        'format_types' => array('open', 'closed'),
        'instance_settings' => array('description' => '', 'classes' => ''),
        'default_formatter' => 'closed',
      ),
      'htabs' => array(
        'label' => t('Horizontal tabs group'),
        'description' => t('This fieldgroup renders child groups in its own horizontal tabs wrapper.'),
        'instance_settings' => array('classes' => '', 'id' => ''),
      ),
      'htab' => array(
        'label' => t('Horizontal tab item'),
        'format_types' => array('open', 'closed'),
        'description' => t('This fieldgroup renders the content in a fieldset, part of horizontal tabs group.'),
        'instance_settings' => array('description' => '', 'classes' => '', 'id' => ''),
        'default_formatter' => 'closed',
      ),
      'accordion' => array(
        'label' => t('Accordion group'),
        'description' => t('This fieldgroup renders child groups as jQuery accordion.'),
        'instance_settings' => array('description' => '', 'classes' => '', 'effect' => 'bounceslide', 'id' => ''),
      ),
      'accordion-item' => array(
        'label' => t('Accordion item'),
        'format_types' => array('open', 'closed'),
        'description' => t('This fieldgroup renders the content in a div, part of accordion group.'),
        'instance_settings' => array('classes' => ''),
        'default_formatter' => 'closed',
      ),
    ),
  );
}

/**
 * Implements hook_theme().
 */
function field_group_theme() {
  return array(
    'horizontal_tabs' => array(
      'render element' => 'element',
      'file' => 'field_group.theme.inc',
    ),
    'multipage' => array(
      'render element' => 'element',
      'file' => 'field_group.theme.inc',
    ),
    'multipage_pane' => array(
      'render element' => 'element',
      'file' => 'field_group.theme.inc',
    ),
  );
}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Fieldset.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_fieldset(&$element, $group, &$form) {

  $element += array(
    '#type' => 'fieldset',
    '#title' => check_plain(t($group->label)),
    '#collapsible' => $group->collapsible,
    '#collapsed' => $group->collapsed,
    '#pre_render' => array(),
    '#attributes' => array('class' => explode(' ', $group->classes)),
    '#description' => $group->description,
  );

  if ($group->collapsible || $group->collapsed) {
    $element['#attached']['library'][] = array('system', 'backdrop.collapse');
  }
}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Details.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_details(&$element, $group, &$form) {
  $label_element = isset($group->format_settings['instance_settings']['label_element']) ? $group->format_settings['instance_settings']['label_element'] : 'span';
  $element += array(
    '#type' => 'details',
    '#summary' => '<' . $label_element . '>' . check_plain(t($group->label)) . '</' . $label_element . '>',
    '#attributes' => array('class' => explode(' ', $group->classes)),
    '#details' => $group->description,
  );
  if (!empty($element['#id'])) {
    $element['#attributes']['id'] = $element['#id'];
  }
  if (!$group->collapsed) {
    $element['#attributes']['open'] = TRUE;
  }
}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: HTML element.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_html_element(&$element, $group, &$form) {
  $html_element = isset($group->format_settings['instance_settings']['element']) ? $group->format_settings['instance_settings']['element'] : 'div';
  $show_label = isset($group->format_settings['instance_settings']['show_label']) ? $group->format_settings['instance_settings']['show_label'] : 0;
  $label_element = isset($group->format_settings['instance_settings']['label_element']) ? $group->format_settings['instance_settings']['label_element'] : 'div';
  $configured_attributes = isset($group->format_settings['instance_settings']['attributes']) ? ' ' . $group->format_settings['instance_settings']['attributes'] : '';
  $group->classes = trim($group->classes);

  // This regex split the attributes string so that we can pass that
  // later to backdrop_attributes().
  preg_match_all('/([^\s=]+)="([^"]+)"/', $configured_attributes, $matches);

  $element_attributes = array();
  // Put the attribute and the value together.
  foreach ($matches[1] as $key => $attribute) {
    $element_attributes[$attribute] = $matches[2][$key];
  }

  // Add the classes to the attributes array.
  if (!isset($element_attributes['class']) && $group->classes) {
    $element_attributes['class'] = $group->classes;
  }
  elseif (isset($element_attributes['class']) && $group->classes) {
    $element_attributes['class'] .= ' ' . $group->classes;
  }

  if (isset($element['#id'])) {
    $element_attributes['id'] = $element['#id'];
  }

  // Sanitize the attributes.
  $element_attributes = _filter_xss_attributes(backdrop_attributes($element_attributes));
  $attributes = $element_attributes ? ' ' . implode(' ', $element_attributes) : '';

  $element['#prefix'] = '<' . $html_element . $attributes . '>';
  if ($show_label) {
    $element['#prefix'] .= '<' . $label_element . '><span>' . check_plain(t($group->label)) . '</span></' . $label_element . '>';
  }
  $element['#suffix'] = '</' . $html_element . '>';
}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Div.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_div(&$element, $group, &$form) {

  $show_label = isset($group->format_settings['instance_settings']['show_label']) ? $group->format_settings['instance_settings']['show_label'] : 0;
  $label_element = isset($group->format_settings['instance_settings']['label_element']) ? $group->format_settings['instance_settings']['label_element'] : 'h2';
  $effect = isset($group->format_settings['instance_settings']['effect']) ? $group->format_settings['instance_settings']['effect'] : 'none';

  $element['#type'] = 'markup';
  $id = isset($element['#id']) ? ' id="' . $element['#id'] . '"' : '';

  if ($group->format_settings['formatter'] != 'open') {

    $element['#prefix'] = '<div' . $id . ' class="' . $group->classes . '">
      <' . $label_element . '><span class="field-group-format-toggler">' . check_plain(t($group->label)) . '</span></' . $label_element . '>
      <div class="field-group-format-wrapper" style="display: ' . (!empty($group->collapsed) ? 'none' : 'block') . ';">';
    $element['#suffix'] = '</div></div>';
  }
  else {
    $class_attribute = !empty($group->classes) ? ' class="' . $group->classes . '"' : '';

    $element['#prefix'] = '<div' . $id . $class_attribute . '>';
    if ($show_label) {
      $element['#prefix'] .= '<' . $label_element . '><span>' . check_plain(t($group->label)) . '</span></' . $label_element . '>';
    }
    $element['#suffix'] = '</div>';
  }
  if (!empty($group->description)) {
    $element['#prefix'] .= '<div class="description">' . $group->description . '</div>';
  }

  if ($effect == 'blind') {
    $element['#attached']['library'][] = array('system', 'effects.blind');
  }

}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: HTML5.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_html5(&$element, $group, &$form) {
  $id = !empty($element['#id']) ? ' id="' . $element['#id'] . '"' : '';
  $class = !empty($group->classes) ? ' class="' . $group->classes . '"' : '';
  $element += array(
    '#type' => 'markup',
    '#prefix' => '<' . $group->format_settings['instance_settings']['wrapper'] . $id . $class . '>',
    '#suffix' => '</' . $group->format_settings['instance_settings']['wrapper'] . '>',
  );
}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Accordion.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_accordion(&$element, $group, &$form) {

  // Add the jQuery UI accordion.
  $element['#attached']['library'][] = array('system', 'ui.accordion');

  $id = !empty($element['#id']) ? ' id="' . $element['#id'] . '"' : '';

  $element += array(
    '#type' => 'markup',
    '#prefix' => '<div class="' . $group->classes . '"' . $id .'>',
    '#suffix' => '</div>',
  );
}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Accordion item.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_accordion_item(&$element, $group, &$form) {

  $element += array(
    '#type' => 'markup',
    '#prefix' => '<h3 class="field-group-format-toggler ' . $group->format_type . ($group->collapsed ? '' : ' field-group-accordion-active') . '"><a href="#">' . check_plain(t($group->label)) . '</a></h3>
    <div class="field-group-format-wrapper ' . $group->classes . '">',
    '#suffix' => '</div>',
    //'#attributes' => array('class' => array($group->format_type)),
  );
  if (!empty($group->description)) {
    $element['#prefix'] .= '<div class="description">' . $group->description . '</div>';
  }

}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Horizontal tabs group.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_htabs(&$element, $group, &$form) {

  $classes = 'field-group-' . $group->format_type . '-wrapper';
  if (!empty($group->classes)) {
    $classes .= ' ' . $group->classes;
  }

  $id = !empty($element['#id']) ? ' id="' . $element['#id'] . '"' : '';

  $element += array(
    '#type' => 'horizontal_tabs',
    '#title' => check_plain(t($group->label)),
    '#theme_wrappers' => array('horizontal_tabs'),
    '#prefix' => '<div class="' . $classes . '"' . $id . '>',
    '#suffix' => '</div>',
  );

  // By default vertical_tabs don't have titles but you can override it in the theme.
  if (!empty($group->label)) {
    $element['#title'] = check_plain($group->label);
  }

  // Only add form.js on forms.
  if (!empty($form['#type']) && $form['#type'] == 'form') {
    $element['#attached']['library'][] = array('system', 'backdrop.form');
  }

  $element['#attached']['library'][] = array('field_group', 'horizontal-tabs');
}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Horizontal tab.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_htab(&$element, $group, &$form) {

  $element += array(
    '#type' => 'fieldset',
    '#title' => check_plain(t($group->label)),
    '#collapsible' => $group->collapsible,
    '#collapsed' => $group->collapsed,
    '#attributes' => array('class' => explode(" ", $group->classes)),
    '#group' => $group->parent_name,
    // very important. Cannot be added on the form!
    '#parents' => array($group->parent_name),
    '#description' => $group->description,
  );

}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Multipage group.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_multipage_group(&$element, &$group, &$form) {

  $multipage_element = array(
    '#type' => 'multipage',
    '#theme_wrappers' => array('multipage'),
    '#prefix' => '<div class="field-group-' . $group->format_type . '-wrapper ' . $group->classes . '">',
    '#suffix' => '</div>',
  );

  $element += $multipage_element;

  $move_additional = isset($group->format_settings['instance_settings']['move_additional']) ? ($group->format_settings['instance_settings']['move_additional'] && isset($form['additional_settings'])) : isset($form['additional_settings']);
  $move_button = isset($group->format_settings['instance_settings']['move_button']) ? $group->format_settings['instance_settings']['move_button'] : 0;

  backdrop_add_js(array(
    'field_group' => array(
      'multipage_move_submit' => (bool) $move_button,
      'multipage_move_additional' => (bool) $move_additional
    )
  ), 'setting');

}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Multipage.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_multipage(&$element, $group, &$form) {

  $group->classes .= $group->format_settings['formatter'] == 'start' ? ' multipage-open' : ' multipage-closed';
  $element += array(
    '#type' => 'multipage_pane',
    '#title' => check_plain(t($group->label)),
    '#collapsible' => $group->collapsible,
    '#collapsed' => $group->collapsed,
    '#attributes' => array('class' => explode(" ", $group->classes)),
    '#group' => $group->parent_name,
    '#group_object' => $group,
    '#parent_group_object' => $form['#groups'][$group->parent_name],
    // very important. Cannot be added on the form!
    '#parents' => array($group->parent_name),
    '#description' => $group->description,
  );

  $element['#attached']['library'][] = array('field_group', 'multipage');
}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Vertical tabs wrapper.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_tabs(&$element, $group, &$form) {

  $classes = 'field-group-' . $group->format_type . '-wrapper';
  if (!empty($group->classes)) {
    $classes .= ' ' . $group->classes;
  }

  $id = !empty($element['#id']) ? ' id="' . $element['#id'] . '"' : '';

  $element += array(
    '#type' => 'vertical_tabs',
    '#theme_wrappers' => array('vertical_tabs'),
    '#prefix' => '<div class="' . $classes . '"' . $id . '>',
    '#suffix' => '</div>',
  );

  // By default vertical_tabs don't have titles but you can override it in the theme.
  if (!empty($group->label)) {
    $element['#title'] = check_plain($group->label);
  }

  $element[$group->group_name . '__active_tab'] = array(
    '#type' => 'hidden',
    '#default_value' => '',
    '#attributes' => array('class' => array('vertical-tabs-active-tab')),
  );

  $element['#attached']['library'][] = array('system', 'backdrop.collapse');
}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Vertical tab.
 *
 * @param $element The field group form element.
 * @param $group The Field group object prepared for pre_render.
 * @param $form The root element or form.
 */
function field_group_pre_render_tab(&$element, $group, &$form) {

  $view_mode = isset($form['#view_mode']) ? $form['#view_mode'] : 'form';

  // Could be it never runs through htab.
  $form['#attached']['js'][] = array(
    'data' => array('field_group' => array('tabs' => $view_mode)),
    'type' => 'setting',
  );

  $add = array(
    '#type' => 'fieldset',
    '#id' => 'edit-' . $group->group_name,
    '#title' => check_plain(t($group->label)),
    '#collapsible' => $group->collapsible,
    '#collapsed' => $group->collapsed,
    '#attributes' => array('class' => explode(" ", $group->classes)),
    '#description' => $group->description,
  );

  // Front-end and back-end on configuration will lead
  // to vertical tabs nested in a separate vertical group.
  if ($view_mode != 'form') {
    $add['#group'] = empty($group->parent_name) ? 'additional_settings' : $group->parent_name;
    $add['#parents'] = array($add['#group']);
    $element += $add;
  }
  // Form fieldgroups which are nested into a vertical tab group
  // are handled a little different.
  elseif (!empty($group->parent_name)) {
    $add['#group'] = $group->parent_name;
    $element += $add;
  }
  // Forms "can" have additional settins. We'll try to locate it first, if not
  // exists, field_group will create a parallel additional settings entry.
  else {
    // Create the fieldgroup element.
    $add['#parents'] = array('additional_settings');
    $add['#group'] = 'additional_settings';
    $add['#weight'] = -30 + $group->weight; // hardcoded to bring our extra additional vtabs on top.

    // Check if the additional_settings exist for this type of form.
    if (isset($form['additional_settings']['group']['#groups']['additional_settings'])) {

      // Merge fieldgroups with the core additional settings.
      $form['additional_settings']['group']['#groups']['additional_settings'][$group->group_name] = $add;
      $form['additional_settings']['group']['#groups'][$group->group_name] = array('#group_exists' => TRUE);
      // Nest the fields inside the appropriate structure.
      foreach (element_children($element) as $fieldname) {
        $form['additional_settings']['group']['#groups']['additional_settings'][$group->group_name][$fieldname] = &$element[$fieldname];
        unset($element[$fieldname]);
      }
    }
    // Assumption the wrapper is in the root. This could be done by field_group itself
    // in previous loop of tabs in same wrapper or even some other contrib / custom module.
    else {
      if (!isset($form['additional_settings']['#type'])) {
        $form['additional_settings'] = array(
          '#type' => 'vertical_tabs',
          '#weight' => $group->weight,
          '#theme_wrappers' => array('vertical_tabs'),
          '#prefix' => '<div class="field-group-' . $group->format_type . '-wrapper">',
          '#suffix' => '</div>',
        );
        $form['#attached']['library'][] = array('system', 'backdrop.collapse');
      }
      $form['additional_settings'][$group->group_name] = $add;
      // Nest the fields inside the appropriate structure.
      foreach (element_children($element) as $fieldname) {
        $form['additional_settings'][$group->group_name][$fieldname] = &$element[$fieldname];
        unset($element[$fieldname]);
      }
    }
  }

}

/**
 * Implements hook_element_info().
 */
function field_group_element_info() {
  $types['horizontal_tabs'] = array(
    '#theme_wrappers' => array('horizontal_tabs'),
    '#default_tab' => '',
    '#process' => array('form_process_horizontal_tabs'),
  );
  $types['multipage'] = array(
    '#theme_wrappers' => array('multipage'),
    '#default_tab' => '',
    '#process' => array('form_process_multipage'),
  );
  $types['multipage_pane'] = array(
    '#value' => NULL,
    '#process' => array('form_process_fieldset', 'ajax_process_form'),
    '#pre_render' => array('form_pre_render_fieldset'),
    '#theme_wrappers' => array('multipage_pane'),
  );
  return $types;
}

/**
 * Implements hook_library_info().
 */
function field_group_library_info() {

  $path = backdrop_get_path('module', 'field_group');
  // Horizontal Tabs.
  $libraries['horizontal-tabs'] = array(
    'title' => 'Horizontal Tabs',
    'website' => 'http://drupal.org/node/323112',
    'version' => '1.0',
    'js' => array(
      $path . '/js/horizontal-tabs/horizontal-tabs.js' => array(),
    ),
    'css' => array(
      $path . '/css/horizontal-tabs/horizontal-tabs.css' => array(),
    ),
  );
  // Multipage Tabs.
  $libraries['multipage'] = array(
    'title' => 'Multipage',
    'website' => 'http://drupal.org/node/323112',
    'version' => '1.0',
    'js' => array(
      $path . '/js/multipage/multipage.js' => array(),
    ),
    'css' => array(
      $path . '/css/multipage/multipage.css' => array(),
    ),
  );

  return $libraries;
}

/**
 * Creates a group formatted as horizontal tabs.
 * This function will never be callable from within field_group rendering. Other
 * modules using #type horizontal_tabs will have the benefit of this processor.
 *
 * @param $element
 *   An associative array containing the properties and children of the
 *   fieldset.
 * @param $form_state
 *   The $form_state array for the form this horizontal tab widget belongs to.
 * @return
 *   The processed element.
 */
function form_process_horizontal_tabs($element, &$form_state) {
  // Inject a new fieldset as child, so that form_process_fieldset() processes
  // this fieldset like any other fieldset.
  $element['group'] = array(
    '#type' => 'fieldset',
    '#theme_wrappers' => array(),
    '#parents' => $element['#parents'],
  );

  // The JavaScript stores the currently selected tab in this hidden
  // field so that the active tab can be restored the next time the
  // form is rendered, e.g. on preview pages or when form validation
  // fails.
  $name = implode('__', $element['#parents']);
  if (isset($form_state['values'][$name . '__active_tab'])) {
    $element['#default_tab'] = $form_state['values'][$name . '__active_tab'];
  }
  $element[$name . '__active_tab'] = array(
    '#type' => 'hidden',
    '#default_value' => $element['#default_tab'],
    '#attributes' => array('class' => array('horizontal-tabs-active-tab')),
  );

  return $element;
}

/**
 * Creates a group formatted as multipage.
 * This function will never be callable from within field_group rendering. Other
 * modules using #type multipage will have the benefit of this processor.
 *
 * @param $element
 *   An associative array containing the properties and children of the
 *   fieldset.
 * @param $form_state
 *   The $form_state array for the form this multipage tab widget belongs to.
 * @return
 *   The processed element.
 */
function form_process_multipage($element, &$form_state) {
  // Inject a new fieldset as child, so that form_process_fieldset() processes
  // this fieldset like any other fieldset.
  $element['group'] = array(
    '#type' => 'fieldset',
    '#theme_wrappers' => array(),
    '#parents' => $element['#parents'],
  );

  // The JavaScript stores the currently selected tab in this hidden
  // field so that the active control can be restored the next time the
  // form is rendered, e.g. on preview pages or when form validation
  // fails.
  $name = implode('__', $element['#parents']);
  if (isset($form_state['values'][$name . '__active_control'])) {
    $element['#default_tab'] = $form_state['values'][$name . '__active_control'];
  }
  $element[$name . '__active_control'] = array(
    '#type' => 'hidden',
    '#default_value' => $element['#default_control'],
    '#attributes' => array('class' => array('multipage-active-control')),
  );

  return $element;
}


/**
 * Implements hook_field_group_html_classes_alter().
 */
function field_group_field_group_html_classes_alter(&$classes, &$group) {
  // Open or closed horizontal or vertical tabs will be collapsible by default.
  if ($group->format_type == 'tab' || $group->format_type == 'htab') {
    $classes->required[] = 'collapsible';
  }

  if ($group->format_type == 'multipage') {
    $class_group_type = 'field-group-multipage';
    $classes->required[] = $class_group_type;
    if ((array_search($class_group_type, $classes->optional)) !== false){
      unset($classes->optional[$class_group_type]);
    }
  }

  if (isset($group->format_settings['instance_settings'])) {
    // Extra required classes for div.
    if ($group->format_type == 'div') {
      if ($group->format_settings['formatter'] != 'open') {

        $speed = isset($group->format_settings['instance_settings']['speed']) ? $group->format_settings['instance_settings']['speed'] : 'none';
        $classes->required[] = 'speed-' . $speed;

        $effect = isset($group->format_settings['instance_settings']['effect']) ? $group->format_settings['instance_settings']['effect'] : 'none';
        $classes->required[] = 'effect-' . $effect;
      }
    }
    // Extra required classes for accordions.
    elseif ($group->format_type == 'accordion') {
      $classes->required[] = 'field-group-' . $group->format_type . '-wrapper';
      $effect = isset($group->format_settings['instance_settings']['effect']) ? $group->format_settings['instance_settings']['effect'] : 'none';
      $classes->required[] = 'effect-' . $effect;
    }
  }
}

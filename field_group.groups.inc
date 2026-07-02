<?php
/**
 * @file
 * Defines some field group types.
 */

/**
 * Field group formatters.
 *
 * @see field_group_field_group_formatter_info()
 */
function _field_group_field_group_formatter_info() {

  return array(
    'form' => array(
      'div' => array(
        'label' => t('Div'),
        'description' => t('This fieldgroup renders the inner content in a simple div with the title as legend.'),
        'format_types' => array('open', 'collapsible', 'collapsed'),
        'instance_settings' => array(
          'description' => '', 'show_label' => 1, 'label_element' => 'h3',
          'effect' => 'none', 'speed' => 'fast', 'classes' => '',
          'required_fields' => 1, 'id' => '',
        ),
        'default_formatter' => 'open',
      ),
      'fieldset' => array(
        'label' => t('Fieldset'),
        'description' => t('This fieldgroup renders the inner content in a fieldset with the title as legend.'),
        'format_types' => array('open', 'collapsible', 'collapsed'),
        'instance_settings' => array(
          'description' => '', 'classes' => '', 'required_fields' => 1,
          'id' => '',
        ),
        'default_formatter' => 'open',
      ),
      'details' => array(
        'label' => t('Details'),
        'description' => t('This fieldgroup renders the inner content in a Details element with the title as summary.'),
        'format_types' => array('open', 'closed'),
        'instance_settings' => array(
          'description' => '', 'classes' => '', 'required_fields' => 1,
          'id' => '', 'label_element' => 'span', 'name' => '',
        ),
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
        'instance_settings' => array(
          'description' => '', 'classes' => '', 'required_fields' => 1,
        ),
        'default_formatter' => 'closed',
      ),
    ),
    'display' => array(
      'div' => array(
        'label' => t('Div'),
        'description' => t('This fieldgroup renders the inner content in a simple div with the title as legend.'),
        'format_types' => array('open', 'collapsible', 'collapsed'),
        'instance_settings' => array(
          'description' => '', 'show_label' => 1, 'label_element' => 'h3',
          'effect' => 'none', 'speed' => 'fast', 'classes' => '', 'id' => '',
        ),
        'default_formatter' => 'open',
      ),
      'fieldset' => array(
        'label' => t('Fieldset'),
        'description' => t('This fieldgroup renders the inner content in a fieldset with the title as legend.'),
        'format_types' => array('open', 'collapsible', 'collapsed'),
        'instance_settings' => array(
          'description' => '', 'classes' => '', 'id' => '',
        ),
        'default_formatter' => 'open',
      ),
      'details' => array(
        'label' => t('Details'),
        'description' => t('This fieldgroup renders the inner content in a Details element with the title as summary.'),
        'format_types' => array('open', 'closed'),
        'instance_settings' => array(
          'description' => '', 'label_element' => 'span', 'classes' => '',
          'required_fields' => 1, 'id' => '', 'name' => '',
        ),
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
    ),
  );
}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Fieldset.
 *
 * @param array $element
 *   The field group form element.
 * @param object $group
 *   The Field group object prepared for pre_render.
 * @param array $form
 *   The root element or form.
 */
function field_group_pre_render_fieldset(array &$element, $group, array &$form) {

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
 * @param array $element
 *   The field group form element.
 * @param object $group
 *   The Field group object prepared for pre_render.
 * @param array $form
 *   The root element or form.
 */
function field_group_pre_render_details(array &$element, $group, array &$form) {
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
  if (!empty($group->format_settings['instance_settings']['name'])) {
    $element['#attributes']['name'] = $group->format_settings['instance_settings']['name'];
  }
  if (!$group->collapsed) {
    $element['#attributes']['open'] = TRUE;
  }
}

/**
 * Implements field_group_pre_render_<format-type>.
 * Format type: Div.
 *
 * @param array $element
 *   The field group form element.
 * @param object $group
 *   The Field group object prepared for pre_render.
 * @param array $form
 *   The root element or form.
 */
function field_group_pre_render_div(array &$element, $group, array &$form) {

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
 * Format type: Vertical tabs wrapper.
 *
 * @param array $element
 *   The field group form element.
 * @param object $group
 *   The Field group object prepared for pre_render.
 * @param array $form
 *   The root element or form.
 */
function field_group_pre_render_tabs(array &$element, $group, array &$form) {

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

  // By default vertical_tabs don't have titles but you can override it in the
  // theme.
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
 * @param array $element
 *   The field group form element.
 * @param object $group
 *   The Field group object prepared for pre_render.
 * @param array $form
 *   The root element or form.
 */
function field_group_pre_render_tab(array &$element, $group, array &$form) {

  $view_mode = isset($form['#view_mode']) ? $form['#view_mode'] : 'form';

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
  // Forms "can" have additional settings. We'll try to locate it first, if not
  // exists, field_group will create a parallel additional settings entry.
  else {
    // Create the fieldgroup element.
    $add['#parents'] = array('additional_settings');
    $add['#group'] = 'additional_settings';
    $add['#weight'] = -30 + $group->weight;

    // Hardcoded to bring our extra additional vtabs on top.
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
    // Assumption the wrapper is in the root. This could be done by field_group
    // itself in previous loop of tabs in same wrapper or even some other
    // contrib / custom module.
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
 * Field group format settings
 *
 * @see field_group_field_group_format_settings_alter()
 */
function _field_group_field_group_format_settings_alter(&$form, &$group) {
  $field_group_types = field_group_formatter_info();
  $mode = $group->mode == 'form' ? 'form' : 'display';
  $formatter = $field_group_types[$mode][$group->format_type];

  // Add optional instance_settings.
  switch ($group->format_type) {
    case 'div':
      $form['label']['#description'] = t('Please enter a label for collapsible elements');
      $form['instance_settings']['show_label'] = array(
        '#title' => t('Show label'),
        '#type' => 'select',
        '#options' => array(0 => t('No'), 1 => t('Yes')),
        '#default_value' => isset($group->format_settings['instance_settings']['show_label']) ? $group->format_settings['instance_settings']['show_label'] : $formatter['instance_settings']['show_label'],
        '#weight' => 2,
      );
      $form['instance_settings']['label_element'] = array(
        '#title' => t('Label element'),
        '#type' => 'select',
        '#options' => array('h2' => t('Header 2'), 'h3' => t('Header 3')),
        '#default_value' => isset($group->format_settings['instance_settings']['label_element']) ? $group->format_settings['instance_settings']['label_element'] : $formatter['instance_settings']['label_element'],
        '#weight' => 3,
        '#states' => array(
          'visible' => array(
            'select[name="fields[' . $group->group_name . '][format_settings][settings][instance_settings][show_label]"]' => array('value' => 1),
          ),
        ),
      );
      $form['instance_settings']['effect'] = array(
        '#title' => t('Effect'),
        '#description' => t('The effect to use if collapsible.'),
        '#type' => 'select',
        '#options' => array('none' => t('None'), 'blind' => t('Blind')),
        '#default_value' => isset($group->format_settings['instance_settings']['effect']) ? $group->format_settings['instance_settings']['effect'] : $formatter['instance_settings']['effect'],
        '#weight' => 4,
      );
      $form['instance_settings']['speed'] = array(
        '#title' => t('Speed'),
        '#description' => t('The speed of the effect if collapsible.'),
        '#type' => 'select',
        '#options' => array(
          'none' => t('None'), 'slow' => t('Slow'), 'fast' => t('Fast'),
        ),
        '#default_value' => isset($group->format_settings['instance_settings']['speed']) ? $group->format_settings['instance_settings']['speed'] : $formatter['instance_settings']['speed'],
        '#weight' => 5,
      );
      break;
    case 'fieldset':
      $form['label']['#description'] = t('Please enter a label for collapsible elements');
      break;
    case 'details':
      $form['label']['#description'] = t('Please enter a label for the summary');
      $form['instance_settings']['label_element'] = array(
        '#title' => t('Label element'),
        '#type' => 'select',
        '#options' => array(
          'span' => t('Span'), 'strong' => t('Strong'),  'em' => t('Emphasis'),
          'h2' => t('Header 2'), 'h3' => t('Header 3')),
        '#default_value' => isset($group->format_settings['instance_settings']['label_element']) ? $group->format_settings['instance_settings']['label_element'] : $formatter['instance_settings']['label_element'],
        '#weight' => 2,
      );
      $form['instance_settings']['name'] = array(
        '#title' => t('Name attribute'),
        '#type' => 'textfield',
        '#default_value' => isset($group->format_settings['instance_settings']['name']) ? $group->format_settings['instance_settings']['name'] : $formatter['instance_settings']['name'],
        '#description' => t('The name attribute specifies a group name, as per the <a href="@url">HTML specification</a>. Give multiple <code>details</code> elements the same name value to group them. Only one of the grouped <code>details</code> elements can be open at a time — opening one will cause another to close — so do not use if that behaviour is not desired. If multiple grouped <code>details</code> elements are given the open attribute, only the first one in the source order will be rendered open.', array('@url' => 'https://html.spec.whatwg.org/multipage/interactive-elements.html#the-details-element')),
        '#weight' => 5,
      );
      break;
    case 'tabs':
      break;
    case 'tab':
    default:
  }
}

/**
 * Pre render alter
 *
 * @see field_group_field_group_build_pre_render_alter()
 */
function _field_group_field_group_build_pre_render_alter(&$element) {
  // Add the default field_group javascript.
  $element['#attached']['js'][] = backdrop_get_path('module', 'field_group') . '/js/field_groups.js';
}

/**
 * Parent requirements.
 *
 * @see field_group_field_group_field_ui_parent_requirements_alter()
 */
function _field_group_field_group_field_ui_parent_requirements_alter(&$parent_requirements, &$context) {
  // On display overview tabs need to be checked.
  if ($context['display_overview']) {
    $parent_requirements['tab'] = array(
      'parent' => 'tabs',
      'message' => 'Each <em>Vertical tab</em> element needs to have a parent <em>Vertical tabs</em> group element.',
    );
  } else {
    $parent_requirements['tab'] = array(
      'parent' => 'tabs',
      'message' => 'A <em>Vertical tab</em> element without a parent will be shown in the <em>Additional settings</em> tab group. If this was unintended, create a new parent <em>Vertical tabs</em> group element.',
    );
  }
}

/**
 * Alters classes.
 *
 * @see field_group_field_group_html_classes_alter()
 */
function _field_group_field_group_html_classes_alter(&$classes, &$group) {
  // Open or closed horizontal or vertical tabs will be collapsible by default.
  if ($group->format_type == 'tab') {
    $classes->required[] = 'collapsible';
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
  }
}

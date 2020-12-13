#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_BTN1, KC_BTN1,
	  KC_RCTL, KC_RSFT,
	  KC_RALT, KC_RGUI,
	  KC_DOWN, KC_UP,
    KC_LEFT, KC_RGHT,
    KC_SPC,  KC_ENT
  )
};

char DRAG_DIRECTION = 0x00;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (keycode == KC_BTN1) {
    if (record->event.pressed) {
      // Do something when pressed
    } else {
      // Do something else when release
      DRAG_DIRECTION = 0x00;
    }
  }

  return true;
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
  oled_write_char(DRAG_DIRECTION, false);
}
#endif

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    /* Left encoder */
    if (clockwise) {
      tap_code(KC_MS_UP);
      DRAG_DIRECTION = 0x18;
    } else {
      tap_code(KC_MS_DOWN);
      DRAG_DIRECTION = 0x19;
    }
  } else if (index == 1) {
    /* Right encoder */
    if (clockwise) {
      tap_code(KC_MS_RIGHT);
      DRAG_DIRECTION = 0x1A;
    } else {
      tap_code(KC_MS_LEFT);
      DRAG_DIRECTION = 0x1B;
    }
  }
}

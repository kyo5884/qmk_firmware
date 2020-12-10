#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_ENTER, KC_SPACE,
	  KC_P0,    KC_P1,
	  KC_P2,    KC_P3,
    KC_P4,    KC_P5,
	  KC_P6,    KC_P7,
    KC_P8,    KC_P9
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

#include "sidebar0210.h"

void matrix_init_kb(void) {
	matrix_init_user();
}

void matrix_scan_kb(void) {
	matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
	return process_record_gfx(keycode, record) && process_record_user(keycode, record);
}

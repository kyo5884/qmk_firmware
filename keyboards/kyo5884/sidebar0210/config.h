#pragma once

#include "config_common.h"

#define VENDOR_ID 0x5884
#define PRODUCT_ID 0x0210
#define DEVICE_VER 0
#define MANUFACTURER kyo5884
#define PRODUCT sidebar0210

#define MATRIX_ROWS 7
#define MATRIX_COLS 2

#define MATRIX_ROW_PINS { F5, F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B4, B5 }
#define UNUSED_PINS { D4, C6, D7, F4 }
#define DIODE_DIRECTION COL2ROW

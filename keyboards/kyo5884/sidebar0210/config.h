#pragma once

#include "config_common.h"

#define VENDOR_ID 0x5884
#define PRODUCT_ID 0x0210
#define DEVICE_VER 0
#define MANUFACTURER kyo5884
#define PRODUCT sidebar0210

#define MATRIX_ROWS 6
#define MATRIX_COLS 2

#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B5, B4 }
#define UNUSED_PINS { F4, F5 }
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { E6, C6 }
#define ENCODERS_PAD_B { D7, D4 }
#define ENCODER_RESOLUTION 4

/*
Copyright 2022 avianto / BA Keyboards

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4545
#define PRODUCT_ID      0x4545
#define DEVICE_VER      0x0001
#define MANUFACTURER    MechVault
#define PRODUCT         Phoenix 45

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

/* Planck PCB default pin-out */
#define MATRIX_ROW_PINS { F0, F1, F5, B4 }
#define MATRIX_COL_PINS { F4, D7, B5, B6, C6, C7, D4, D6, D5, D0, D1, D2, B0 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define ENCODERS_PAD_A { F6, D3, B2 }
#define ENCODERS_PAD_B { F7, B1, B3 }
#define ENCODER_RESOLUTION 1

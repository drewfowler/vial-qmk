/* Copyright 2021 Nathan Spears
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// #define TAPPING_TOGGLE 2
#define VIAL_KEYBOARD_UID \
    { 0xF5, 0xD2, 0x9E, 0x35, 0xD6, 0x5D, 0x96, 0x98 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define VIAL_COMBO_ENTRIES 8

// top left + top right keys
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 11 }

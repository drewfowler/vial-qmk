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

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_ortho_2x3u(
    RESET,        KC_Q,    KC_W,    KC_F,     KC_P,    KC_G, KC_PGUP,    KC_J,    KC_L,    KC_U,       KC_Y,  KC_SCLN, KC_BSPC,
    CTL_T(KC_ESC), KC_A,    KC_R,    KC_S,     KC_T,    KC_D, KC_PGDN,    KC_H,    KC_N,    KC_E,       KC_I,     KC_O, KC_QUOT,
    KC_LSFT,       KC_Z,    KC_X,    KC_C,     KC_V,    KC_B, KC_HOME,    KC_K,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,  KC_ENT,
    KC_GRV,        KC_LGUI, KC_LALT,               TT(1),                    LT(2, KC_SPC),           KC_DOT,  KC_RALT, KC_CAPS
  ),

  [1] = LAYOUT_ortho_2x3u(
      KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
      KC_SLSH, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
      _______, _______, _______, _______, _______, _______, _______, _______, KC_PPLS, KC_EQL,  _______, _______, _______,
      KC_ESC,  KC_DOT, KC_DOT,                   _______,                    _______,          KC_NUBS, KC_GRV,  _______
  ),

  [2] = LAYOUT_ortho_2x3u(
      _______, _______, _______, KC_UP,   _______, _______, _______, _______, KC_UNDS, _______, KC_LBRC, KC_RBRC, _______,
      _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_MINS, _______, KC_LCBR, KC_RCBR, _______,
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   _______,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
      RESET,   _______, _______,                 _______,                     _______,           _______, _______, _______
  )
};


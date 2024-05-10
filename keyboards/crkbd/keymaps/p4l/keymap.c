/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include "enums.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x6_3(
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                                     KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,

      KC_LSFT, KC_A, KC_S, MT(MOD_LSFT,KC_D), KC_F, KC_G,                       KC_H, KC_J, MT(MOD_LSFT | MOD_RSFT,KC_K), KC_L, KC_SCLN, KC_QUOT,

      KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B,                                    KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC,

                                KC_LGUI, MO(_NUM), KC_SPC,                   KC_ENT, MO(_SYM), KC_LALT
  ),

  [_NUM] = LAYOUT_split_3x6_3(
      KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5,                                     KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,

      KC_LSFT, KC_GRV, KC_NO, KC_INS, KC_DEL, KC_PSCR,                          KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,

      KC_LCTL, KC_VOLD, KC_VOLU, KC_MPLY, KC_MPRV, KC_MNXT,                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

                                KC_LGUI, KC_TRNS, KC_SPC,                   KC_ENT, MO(_ADJ), KC_LALT
  ),

  [_SYM] = LAYOUT_split_3x6_3(
      KC_TAB, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                      S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_BSPC,

      KC_LSFT, KC_MS_WH_UP, KC_MS_WH_DOWN, KC_NO, KC_NO, KC_NO,                 KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,

      KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                               S(KC_MINS), S(KC_EQL), S(KC_LBRC), S(KC_RBRC), S(KC_BSLS), S(KC_GRV),

                                KC_LGUI, MO(_ADJ), KC_SPC,                   KC_ENT, KC_TRNS, KC_LALT
  ),

  [_ADJ] = LAYOUT_split_3x6_3(
      KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                 KC_MS_WH_UP, KC_MS_WH_LEFT, KC_MS_UP, KC_MS_WH_RIGHT, KC_NO, KC_NO,

      KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,                              KC_MS_WH_DOWN, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_NO, KC_NO,

      KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                               KC_MS_BTN1, KC_MS_BTN1, KC_MS_BTN2, KC_NO, KC_NO, KC_NO,

                                KC_LGUI, KC_TRNS, KC_SPC,                   KC_ENT, KC_TRNS, KC_LALT
  ),

  [_SWITCH] = LAYOUT_split_3x6_3(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

                                      KC_NO, KC_NO, KC_NO,                        KC_NO, KC_NO, KC_NO
  ),

  [_GAME] = LAYOUT_split_3x6_3(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

                                      KC_NO, KC_NO, KC_NO,                        KC_NO, KC_NO, KC_NO
  ),

  [_WEAPON] = LAYOUT_split_3x6_3(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

                                      KC_NO, KC_NO, KC_NO,                        KC_NO, KC_NO, KC_NO
  )
};

enum combos {
  UI_BSPC
};

const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};

combo_t key_combos[] = {
  [UI_BSPC] = COMBO(ui_combo, KC_BSPC)
};

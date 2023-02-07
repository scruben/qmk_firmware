/* Copyright
 *  2020 Qurn
 *  2022 Pascal Jaeger
 *  ______     _____
 * |_   __ \  |_   _|
 *   | |__) |   | |
 *   |  ___/ _  | |
 *  _| |_   | |_| |
 * |_____|  \.___.'
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.	If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "../../trackball_functions.h"

#define _QWERTY 0

#define _LOWER 1
#define _RAISE 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_5x6(
    KC_GRV    , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                          KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL ,
    KC_TAB    , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                                          KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC,
    MO(_LOWER), KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                                          KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_BSLS,
    KC_LSFT   , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                                          KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LSFT, KC_LSFT,
                         LSG(KC_TAB), LGUI(KC_LEFT),                                                                LGUI(KC_RGHT), LGUI(KC_TAB),
                                           LGUI_T(KC_BSPC), RCTL_T(KC_ENT),                                    KC_SPC ,
                                                            RALT_T(KC_BTN1), KC_DEL , KC_DEL,         KC_ENT ,
                                                            LSFT_T(KC_ESC) , KC_TAB ,         KC_BSPC
    ),

    [_LOWER] = LAYOUT_5x6(
    KC_TILD   , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5   ,                                         KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11,  KC_F12 ,
    KC_TAB    , KC_Q   , KC_MNXT, KC_VOLD, KC_VOLU, KC_T   ,                                          KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC,
    KC_ESC    , KC_HOME, KC_MPLY, KC_DEL , KC_BSPC, KC_G   ,                                          KC_LEFT, KC_DOWN, KC_UP  , KC_RIGHT,KC_END,  KC_QUOT, KC_ENT ,
    KC_LSFT   , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                                          KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LSFT, KC_LSFT,
                        KC_LEFT, KC_RIGHT,                                                                              KC_VOLU, KC_VOLD,
                                           KC_TAB , KC_CAPS,                                                   KC_ENT,
                                                            TD(GUI_TM), TD(ALT_TM),   KC_DEL ,          KC_ENT ,
                                                            TD(CTL_TM), TD(LOW_TM),            KC_TAB
    ),

    [_RAISE] = LAYOUT_5x6(
    KC_TILD   , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                          KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL ,
    KC_TAB    , KC_Q   , KC_W   , KC_E   , KC_LCBR, KC_RCBR,                                          KC_Y   , KC_1   , KC_2   , KC_3   , KC_MINS, KC_LBRC, KC_RBRC,
    KC_CAPS   , KC_A   , KC_S   , KC_DEL , KC_LPRN, KC_RPRN,                                          KC_H   , KC_4   , KC_5   , KC_6   , KC_0   , KC_QUOT, KC_ENT ,
    KC_LSFT   , KC_Z   , KC_X   , KC_C   , KC_LBRC, KC_RBRC,                                          KC_N   , KC_7   , KC_8   , KC_9   , KC_EQL , KC_LSFT, KC_LSFT,
                        KC_LEFT, KC_RIGHT,                                                                                KC_UP  , KC_DOWN,
                                        KC_BTN1, TD(RAI_TM),                                                   KC_BSPC ,
                                                            TD(GUI_TM), TD(ALT_TM),   KC_DEL ,          KC_ENT ,
                                                            TD(CTL_TM), TD(LOW_TM),            KC_BSPC
    )
};

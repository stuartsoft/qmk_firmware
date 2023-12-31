/* Copyright 2023 @ Keychron (https://www.keychron.com) (with modifications by Stu)
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

// clang-format off
enum layers{
  MAC_BASE,
  WIN_BASE,
  MAC_FN1,
  WIN_FN1,
  FN2,
};


enum custom_unicodes {
    CC_LOGICAL_AND,
    CC_LOGICAL_OR,
    CC_INTERSECTION,
    CC_UNION,
    CC_SUBSET_OF,
    CC_SUPERSET_OF,
    CC_FOR_ALL,
    CC_INFINITY,
    CC_THERE_EXISTS,
    CC_PARTIAL_DIFFERENTIAL,
    CC_UP_TACK,
    CC_DOWN_TACK,
    CC_RIGHT_TACK,
    CC_LEFT_TACK,
    CC_UPWARDS_ARROW,
    CC_DOWNWARDS_ARROW,
    CC_LEFTWARDS_ARROW,
    CC_RIGHTWARDS_ARROW,
    CC_LEFT_RIGHT_ARROW,
    CC_RIGHT_ANGLE,
    CC_RIGHT_ANGLE_SUBSTITUTION_MARKER,
    CC_NOT_EQUAL_TO,
    CC_ASYPTOTICALLY_EQUAL_TO,
    CC_IDENTICAL_TO,
    CC_LESS_THAN_OR_EQUAL_TO,
    CC_GREATER_THAN_OR_EQUAL_TO
};

const uint32_t unicode_map[] PROGMEM = {
    [CC_LOGICAL_AND] = 0x2227,
    [CC_LOGICAL_OR] = 0x2228,
    [CC_INTERSECTION] = 0x2229,
    [CC_UNION] = 0x222A,
    [CC_SUBSET_OF] = 0x2282,
    [CC_SUPERSET_OF] = 0x2283,
    [CC_FOR_ALL] = 0x2200,
    [CC_INFINITY] = 0x221E,
    [CC_THERE_EXISTS] = 0x2203,
    [CC_PARTIAL_DIFFERENTIAL] = 0x2202,
    [CC_UP_TACK] = 0x22A5,
    [CC_DOWN_TACK] = 0x22A4,
    [CC_RIGHT_TACK] = 0x22A2,
    [CC_LEFT_TACK] = 0x22A3,
    [CC_UPWARDS_ARROW] = 0x2191,
    [CC_DOWNWARDS_ARROW] = 0x2193,
    [CC_LEFTWARDS_ARROW] = 0x2190,
    [CC_RIGHTWARDS_ARROW] = 0x2192,
    [CC_LEFT_RIGHT_ARROW] = 0x2194,
    [CC_RIGHT_ANGLE] = 0x221F,
    [CC_RIGHT_ANGLE_SUBSTITUTION_MARKER] = 0x2E00,
    [CC_NOT_EQUAL_TO] = 0x2260,
    [CC_ASYPTOTICALLY_EQUAL_TO] = 0x2243,
    [CC_IDENTICAL_TO] = 0x2261,
    [CC_LESS_THAN_OR_EQUAL_TO] = 0x2264,
    [CC_GREATER_THAN_OR_EQUAL_TO] = 0x2265
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_61_ansi(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD,MO(MAC_FN1),MO(FN2), KC_RCTL),

    [WIN_BASE] = LAYOUT_61_ansi(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN1),MO(FN2), KC_RCTL),

    [MAC_FN1] = LAYOUT_61_ansi(
        KC_GRV,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  RGB_MOD,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  KC_INS,   KC_PGUP,  KC_HOME,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  KC_UP,    KC_SNAP,  KC_PGDN,  KC_END,             _______,
        _______,            RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_DEL,             _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),

    [WIN_FN1] = LAYOUT_61_ansi(
        KC_GRV,   KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  RGB_MOD,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  KC_APP,   KC_SCRL,  KC_INS,   KC_PGUP,  KC_HOME,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  KC_UP,    KC_DOWN,  KC_LEFT,  KC_RIGHT, KC_PSCR,  KC_PGDN,  KC_END,             _______,
        _______,            RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  _______,  NK_TOGG,  RGB_SPI,  RGB_SPD,  _______,  KC_DEL,             _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),

    [FN2] = LAYOUT_61_ansi(
        KC_TILD,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,
        _______,  X(CC_LOGICAL_AND),  X(CC_LOGICAL_OR),  X(CC_INTERSECTION),  X(CC_UNION),  X(CC_SUBSET_OF),  X(CC_SUPERSET_OF),  X(CC_FOR_ALL),  X(CC_INFINITY),  X(CC_THERE_EXISTS),  X(CC_PARTIAL_DIFFERENTIAL),  _______,  _______,  _______,
        _______,  X(CC_UP_TACK),  X(CC_DOWN_TACK),  X(CC_RIGHT_TACK),  X(CC_LEFT_TACK),  X(CC_UPWARDS_ARROW),  X(CC_DOWNWARDS_ARROW),  X(CC_LEFTWARDS_ARROW), X(CC_RIGHTWARDS_ARROW),  X(CC_LEFT_RIGHT_ARROW),  _______,  _______,            _______,
        KC_J,               X(CC_RIGHT_ANGLE),  X(CC_RIGHT_ANGLE_SUBSTITUTION_MARKER),  X(CC_NOT_EQUAL_TO),  X(CC_ASYPTOTICALLY_EQUAL_TO),  X(CC_IDENTICAL_TO),  X(CC_LESS_THAN_OR_EQUAL_TO),  X(CC_GREATER_THAN_OR_EQUAL_TO),  _______,  _______,  _______,               KC_Z,
        _______,  _______,  _______,                                BAT_LVL,                                _______,  _______,  _______,  _______),
};

/* Copyright 2021 @ Keychron (https://www.keychron.com) & (modified by Stu)
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
  FN2
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
[MAC_BASE] = LAYOUT_ansi_68(
     KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, KC_DEL,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS, KC_END,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,  KC_PGUP,
     QK_SPACE_CADET_LEFT_SHIFT_PARENTHESIS_OPEN,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  QK_SPACE_CADET_RIGHT_SHIFT_PARENTHESIS_CLOSE,  KC_UP,    KC_PGDN,
     KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                       KC_RCMMD,MO(MAC_FN1),MO(FN2), KC_LEFT,  KC_DOWN, KC_RGHT),

[WIN_BASE] = LAYOUT_ansi_68(
     KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, KC_DEL,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS, KC_END,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,  KC_PGUP,
     QK_SPACE_CADET_LEFT_SHIFT_PARENTHESIS_OPEN,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  QK_SPACE_CADET_RIGHT_SHIFT_PARENTHESIS_CLOSE,  KC_UP,    KC_PGDN,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                       KC_RALT, MO(WIN_FN1),MO(FN2), KC_LEFT,  KC_DOWN, KC_RGHT),

[MAC_FN1] = LAYOUT_ansi_68(
     KC_GRV,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LNPD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[WIN_FN1] = LAYOUT_ansi_68(
     KC_GRV,   KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[FN2] = LAYOUT_ansi_68(
     KC_Z,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_TRNS,  KC_J,
     KC_TRNS,  X(CC_LOGICAL_AND),  X(CC_LOGICAL_OR),  X(CC_INTERSECTION),  X(CC_UNION),  X(CC_SUBSET_OF), X(CC_SUPERSET_OF), X(CC_FOR_ALL), X(CC_INFINITY), X(CC_THERE_EXISTS), X(CC_PARTIAL_DIFFERENTIAL), KC_TRNS, KC_TRNS,  KC_TRNS,  QK_UNICODE_MODE_MACOS,
     KC_TRNS,  X(CC_UP_TACK), X(CC_DOWN_TACK), X(CC_RIGHT_TACK), X(CC_LEFT_TACK), X(CC_UPWARDS_ARROW), X(CC_DOWNWARDS_ARROW), X(CC_LEFTWARDS_ARROW), X(CC_RIGHTWARDS_ARROW), X(CC_LEFT_RIGHT_ARROW), KC_TRNS,  KC_TRNS, KC_TRNS, QK_UNICODE_MODE_WINCOMPOSE,
     KC_MS_BTN1,  X(CC_RIGHT_ANGLE), X(CC_RIGHT_ANGLE_SUBSTITUTION_MARKER), X(CC_NOT_EQUAL_TO), X(CC_ASYPTOTICALLY_EQUAL_TO), X(CC_IDENTICAL_TO), X(CC_LESS_THAN_OR_EQUAL_TO), X(CC_GREATER_THAN_OR_EQUAL_TO), KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MS_BTN2, KC_MS_UP,  QK_UNICODE_MODE_LINUX,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                BAT_LVL,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT),
};

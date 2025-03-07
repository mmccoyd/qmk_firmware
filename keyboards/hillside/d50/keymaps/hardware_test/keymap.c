// Copyright 2025 Michael McCoyd (@mmccoyd)
// SPDX-License-Identifier: GPL-2.0-or-later

// A simple keymap to test the hardware.

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
     // column pins:
     // 0      1        2        3        4        5                                               5        4        3        2        1        0
     KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                           KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    KC_0,    // row pin 0
     UG_TOGG, UG_VALU, UG_NEXT, KC_E,    KC_R,    EE_CLR,                                         EE_CLR,  KC_K,    KC_J,    UG_NEXT, UG_VALU, UG_TOGG, // row pin 1
     KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_F,    KC_1,   KC_2,        KC_2,    KC_1,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,  // row pin 2
                       KC_X,    KC_C,             KC_5,    KC_4,   KC_3,        KC_3,    KC_4,    KC_5,             KC_COMM, KC_DOT,                    // row pin 3
    ),                                         // The thumbs are row pin 4 and should return their column pin
};

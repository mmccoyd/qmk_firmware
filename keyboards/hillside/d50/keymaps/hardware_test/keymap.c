// Copyright 2025 Michael McCoyd (@mmccoyd)
// SPDX-License-Identifier: GPL-2.0-or-later

// A simple keymap to test the hardware.

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
     // The key rows are organized as follows:
     //
     // - Top: QWERTY top row for an easy check of expected left vs right and position.
     // - Middle: System control keys for LEDs, or the key from the middle row to show that row works.
     //           Symmetric between left and right sides.
     // - Lower: Pin numbers on each half.
     // - Utility: QWERTY lower row.
     // - Thumbs: Pin numbers.
     //
     // column pins:
     // 0      1        2        3        4        5                                               5        4        3        2        1        0
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, // row pin 0
     UG_TOGG, UG_VALU, UG_NEXT, KC_D,    KC_F,    EE_CLR,             EE_CLR,  KC_J,    KC_K,    UG_NEXT, UG_VALU, UG_TOGG, // row pin 1
     KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,               KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    KC_0,    // row pin 2
                       KC_X,    KC_C,        KC_1,   KC_2,        KC_2,    KC_1,        KC_COMM, KC_DOT,                    // row pin 3
                                    KC_5,    KC_4,   KC_3,        KC_3,    KC_4,    KC_5
    ),                                         // Row pin 4 are the thumbs, which return their column pin
};

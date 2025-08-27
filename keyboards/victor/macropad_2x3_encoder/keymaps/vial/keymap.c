// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ - │ + │ P │
     * ├───┼───┼───┤
     * │ P │ N │ M │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_1(
        KC_P7,   KC_P8,   KC_P9,
        KC_P4,   KC_P5,   KC_P6
    )
};

#if defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
};

#endif

#include QMK_KEYBOARD_H

#define ___ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x3(
        LGUI_T(KC_Q), KC_W, KC_E,
        KC_I, KC_O, LGUI_T(KC_P),

        LCTL_T(KC_A), KC_S, KC_D,
        KC_K, KC_L, LCTL_T(KC_SCLN),

        LSFT_T(KC_Z), KC_X, KC_C,
        KC_COMM, KC_DOT, RSFT_T(KC_SLSH)

    )

};

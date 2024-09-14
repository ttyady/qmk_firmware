// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,
        JP_EISU,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,                      JP_6,    JP_7,    JP_8,    JP_9,    JP_0,     JP_MINS,  KC_PSCR,
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_AT,    KC_INS,
        KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    JP_SCLN,  JP_COLN,  KC_QUES,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC,          KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  JP_UNDS,
        KC_LCTL,  KC_LWIN, KC_LALT, KC_QUES, KC_SPC,  JP_HENK, KC_DEL,           KC_BSPC, KC_ENT,  KC_HOME, KC_UP,   KC_END,   JP_CIRC,  JP_PIPE,
                                                                                          KC_LEFT, KC_DOWN, KC_RGHT, KC_QUES,  KC_QUES,  KC_QUES
    ),
    [1] = LAYOUT(
        KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,
        JP_EISU,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,                      JP_6,    JP_7,    JP_8,    JP_9,    JP_0,     JP_MINS,  KC_PSCR,
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_AT,    KC_INS,
        KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    JP_SCLN,  JP_COLN,  KC_QUES,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC,          KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  JP_UNDS,
        KC_LCTL,  KC_LWIN, KC_LALT, KC_QUES, KC_SPC,  JP_HENK, KC_DEL,           KC_BSPC, KC_ENT,  KC_HOME, KC_UP,   KC_END,   JP_CIRC,  JP_PIPE,
                                                                                          KC_LEFT, KC_DOWN, KC_RGHT, KC_QUES,  KC_QUES,  KC_QUES
    ),
    [2] = LAYOUT(
        KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,
        JP_EISU,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,                      JP_6,    JP_7,    JP_8,    JP_9,    JP_0,     JP_MINS,  KC_PSCR,
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_AT,    KC_INS,
        KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    JP_SCLN,  JP_COLN,  KC_QUES,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC,          KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  JP_UNDS,
        KC_LCTL,  KC_LWIN, KC_LALT, KC_QUES, KC_SPC,  JP_HENK, KC_DEL,           KC_BSPC, KC_ENT,  KC_HOME, KC_UP,   KC_END,   JP_CIRC,  JP_PIPE,
                                                                                          KC_LEFT, KC_DOWN, KC_RGHT, KC_QUES,  KC_QUES,  KC_QUES
    ),
    [3] = LAYOUT(
        KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,
        JP_EISU,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,                      JP_6,    JP_7,    JP_8,    JP_9,    JP_0,     JP_MINS,  KC_PSCR,
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_AT,    KC_INS,
        KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    JP_SCLN,  JP_COLN,  KC_QUES,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC,          KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  JP_UNDS,
        KC_LCTL,  KC_LWIN, KC_LALT, KC_QUES, KC_SPC,  JP_HENK, KC_DEL,           KC_BSPC, KC_ENT,  KC_HOME, KC_UP,   KC_END,   JP_CIRC,  JP_PIPE,
                                                                                          KC_LEFT, KC_DOWN, KC_RGHT, KC_QUES,  KC_QUES,  KC_QUES
    )
};

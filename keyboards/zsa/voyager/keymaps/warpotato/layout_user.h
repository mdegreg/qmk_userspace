//
// Created by matthew degregorio on 3/7/25.
//

#pragma once

#include "dances_user.h"
#include "layers_user.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [OS_WIN_LAYOUT] = LAYOUT(
        KC_GRAVE,               KC_Q,           KC_W,           KC_E,                   KC_R,               KC_T,                         KC_Y,     KC_U,  KC_I,    KC_O,        KC_P,        KC_VOLU,
        KC_CAPS_LOCK,           KC_A,           KC_S,           KC_D,                   TD(DNC_FIND),       KC_G,                         KC_H,     KC_J,  KC_K,    KC_L,        KC_SCLN,     KC_VOLD,
        KC_LSFT,                KC_Z,           TD(DNC_XCUT),   TD(DNC_COPY),           TD(DNC_CPS),        KC_B,                         KC_SLASH, KC_N,  KC_M,    KC_COMMA,    KC_DOT,      KC_RSFT,
        TD(DNC_ESC_LS),         KC_LALT,        MO(NAV_LAYOUT), MO(NUM_LAYOUT),         MO(FKEYS_LAYOUT),   TD(DNC_BACKSPACE),            TD(DNC_BACKSPACE),      MO(FKEYS_LAYOUT), MO(NUM_LAYOUT), KC_TRANSPARENT, KC_RALT, KC_LGUI,
        MT(MOD_LSFT, KC_SPC),   MT(MOD_LCTL, KC_ENTER),         MT(MOD_LCTL, KC_EQUAL), MT(MOD_LSFT, KC_SPC)
            ),
    [OS_MAC_LAYOUT] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, KC_LCTL,
        _______, MT(MOD_LGUI, KC_ENTER), MT(MOD_LGUI, KC_EQUAL), _______
        ),
    [FKEYS_LAYOUT] = LAYOUT(
        _______, _______, _______,      KC_COMMA, KC_DOT,     KC_BSLS,             KC_SLASH,    KC_MINUS, KC_EQUAL, _______, _______,  _______,
        _______, S(KC_1), S(KC_2),      S(KC_3),  S(KC_4),    S(KC_5),             S(KC_7),     S(KC_8),  S(KC_9),  S(KC_0), _______, _______,
        _______, _______, S(KC_LBRC),   S(KC_9),  KC_LBRC,    S(KC_COMMA),         S(KC_DOT),   KC_RBRC,  S(KC_0),  S(KC_RBRC),S(KC_0),   _______,
        _______, _______, _______,      _______, S(KC_MINUS), _______,              _______,     KC_SCLN,  _______, _______, _______, _______,
        MT(MOD_LSFT, KC_TAB), _______,  _______, MT(MOD_LSFT, KC_SCLN)
        ),
    [NUM_LAYOUT] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, KC_LCTL,
        _______, _______, _______, _______
        ),
    [NAV_LAYOUT] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        KC_PGUP, _______,      KC_UP,   KC_ENTER,      _______, _______,           _______, KC_HOME,      KC_PGUP, KC_PGDN, KC_END,  _______,
        KC_PGDN, TD(DNC_LEFT), KC_DOWN, TD(DNC_RIGHT), C(KC_C), _______,           _______, TD(DNC_LEFT), KC_UP,   KC_DOWN, TD(DNC_RIGHT), _______,
        _______, _______, _______,      _______, _______,       _______,           _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______
        ),
    [UTIL_LAYOUT] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, TD(DNC_BOOTLOADER), QK_REBOOT, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______
        ),
};

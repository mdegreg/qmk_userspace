#pragma once

#ifndef KEYBOARD_HEADERS_INITIALIZED
#define KEYBOARD_HEADERS_INITIALIZED
#include QMK_KEYBOARD_H
#endif
#include "dances_user.h"
#include "layers_user.h"
#include "custom_keycodes.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [OS_WIN_LAYOUT] = LAYOUT_moonlander(
      // baseline layout - mostly qwerty, with some keys shifted to emphasize
      // left hand typing + habitual movements
    TD(DNC_ESC_LS),     KC_1,    KC_2,         KC_3,                 KC_4,                   KC_5, _______,            _______,                 KC_6,                   KC_7,           KC_8,     KC_9,     KC_0,    _______,
    KC_GRAVE,           KC_Q,    KC_W,         KC_E,                 KC_R,                   KC_T, _______,            KC_BSLS,                 KC_Y,                   KC_U,           KC_I,     KC_O,     KC_P,    KC_VOLU,
    KC_CAPS_LOCK,       KC_A,    KC_S,         KC_D,                 TD(DNC_FIND),           KC_G, _______,            KC_QUOTE,                KC_H,                   KC_J,           KC_K,     KC_L,     KC_SCLN, KC_VOLD,
    KC_LSFT,            KC_Z,    TD(DNC_XCUT), TD(DNC_COPY),         TD(DNC_CPS),            KC_B,                                              KC_SLASH,               KC_N,           KC_M,     KC_COMMA, KC_DOT,  KC_RSFT,
    TT(NUMKEYS_LAYOUT), KC_LALT, _______,      MO(NAV_LAYOUT),       MO(FKEYS_LAYOUT),       TD(DNC_BACKSPACE),        TD(DNC_BACKSPACE),       MO(FKEYS_LAYOUT),       MO(NAV_LAYOUT), _______,  KC_RALT,  KC_LGUI,
                                               MT(MOD_LSFT, KC_SPC), MT(MOD_LCTL, KC_ENTER), MT(MOD_LALT, KC_QUOTE),   MT(MOD_LALT, KC_QUOTE),  MT(MOD_LCTL, KC_EQUAL), MT(MOD_LSFT, KC_SPC)
  ),  [OS_MAC_LAYOUT] = LAYOUT_moonlander(
      // minor modifications for mac os; most are handled via generic tapdance defs,1
      // but ctrl/cmd swapping and layer switch cue are replaced here for simplicity
      // keeping this layer is handy for catching and triggering os-specific
      // keypress interception, even if its mostly duplicative
    _______, _______, _______, _______, _______, _______,                _______,                 _______, _______,                _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                _______,                 _______, _______,                _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                _______,                 _______, _______,                _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                                                  _______,                _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,                         _______,                 _______,                         _______, _______, _______, _______, KC_LCTL,
                                        _______, MT(MOD_LGUI, KC_ENTER), _______,                 _______, MT(MOD_LGUI, KC_EQUAL), _______
  ),
  [NAV_LAYOUT] = LAYOUT_moonlander(
    _______, _______, _______,      _______, _______,       _______, _______,                 _______, _______, _______,      _______, _______, KC_NO,   KC_NO,
    _______, KC_PGUP, _______,      KC_UP,   KC_ENTER,      _______, _______,                 _______, _______, KC_HOME,      KC_PGUP,          KC_PGDN, KC_END,        KC_NO,
    _______, KC_PGDN, TD(DNC_LEFT), KC_DOWN, TD(DNC_RIGHT), C(KC_C), _______,                 _______, _______, TD(DNC_LEFT), KC_UP,            KC_DOWN, TD(DNC_RIGHT), KC_NO,
    _______, _______, _______,      _______, _______,       _______,                                            _______,      _______, _______, _______, _______,       _______,
    _______, _______, _______,      _______, _______,                _______,                 _______,                        _______, _______, _______, _______,       _______,
                                             _______,       _______, _______,                 _______, _______, KC_ENTER
  ),
    [NUMKEYS_LAYOUT] = LAYOUT_moonlander(
      // phone-style numpad plus arrowkey layer
    _______, MS_ACL0, MS_ACL1, MS_ACL2, _______, _______, _______,                     _______, _______, KC_NUM_LOCK, KC_KP_SLASH, KC_KP_ASTERISK, _______,     _______,
    _______, _______, _______, MS_UP,   _______, MS_WHLU, _______,                     _______, _______, KC_KP_7,     KC_KP_8,     KC_KP_9,        KC_KP_MINUS, _______,
    _______, _______, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD, _______,                     _______, _______, KC_KP_4,     KC_KP_5,     KC_KP_6,        KC_KP_PLUS,  _______,
    _______, _______, _______, _______, _______, _______,                              _______, KC_KP_1, KC_KP_2,     KC_KP_3,     KC_KP_ENTER,    _______,
    _______, _______, _______, KC_PGUP, KC_PGDN,          _______,                     _______,          KC_KP_0,     KC_KP_0,     KC_KP_DOT,      KC_KP_ENTER, _______,
                                        MS_BTN1, MS_BTN2, _______,                     _______, _______, KC_BSPC
  ),
    [FKEYS_LAYOUT] = LAYOUT_moonlander(
      // traditional 10 key numpad plus fn-key access, general layout
    _______, KC_F1,   KC_F2,      KC_F3,      KC_F4,                KC_F5,       _______,       _______,   KC_F6, 	  KC_F7,      KC_F8,    KC_F9,    KC_F10,   _______,
    _______, _______, _______,    KC_DOT,     KC_COMMA,             KC_BSLS,     _______,       _______,   KC_SLASH,  KC_EQUAL, KC_MINUS, _______,  _______,  _______,
    _______, S(KC_1), S(KC_2),    S(KC_3),    S(KC_4),              S(KC_5),     _______,       _______,   S(KC_6),   S(KC_7),    S(KC_8),  S(KC_9),  S(KC_0),   _______,
    _______, _______, KC_LBRC,    S(KC_LBRC), S(KC_9),              S(KC_COMMA),                S(KC_DOT), S(KC_0),   S(KC_RBRC), KC_RBRC,  _______,  _______,
    _______, _______, _______,    _______,    S(KC_MINUS),                       _______,       _______,              KC_SCLN,    _______,  _______,  _______,  _______,
                                              MT(MOD_LSFT, KC_TAB), _______,     _______,       _______,   _______,   MT(MOD_LSFT, KC_SCLN)
  ),
  [GAMING_LAYOUT] = LAYOUT_moonlander(
      // gaming layout; adding additional access for number keys and
      // eliminating most tapdance options to reduce input lag.
      // set up to allow easy access for number and fn key layers
    _______,           _______, _______, _______,            _______, _______, _______,                 _______, _______, _______, _______, _______, _______, KC_NO,
    KC_TAB,            _______, _______, _______,            _______, _______, _______,                 _______, _______, _______, _______, _______, _______, KC_NO,
    TD(DNC_GMODESWAP), _______, _______, _______,            KC_F,    _______, _______,                 _______, _______, _______, _______, _______, _______, _______,
    KC_LSFT,           _______, KC_X,    KC_C,               KC_V,    _______,                                   _______, _______, _______, _______, _______, _______,
    KC_LCTL,           KC_LALT, _______, MO(NUMKEYS_GAMING), MO(FKEYS_GAMING), KC_BSPC,                 KC_BSPC,          _______, _______, _______, _______, _______,
                                         KC_SPACE,           KC_ENTER,         _______,                 _______, _______, _______

  ),
  [GAMINGFAST_LAYOUT] = LAYOUT_moonlander(
      // gaming layout; adding additional access for number keys and
      // eliminating most tapdance options to reduce input lag.
      // set up to allow easy access for number and fn key layers
    _______,  _______, _______, _______,     _______, _______,    _______,                 _______, _______, _______, _______, _______, _______, _______,
    _______,  _______, _______, _______,     _______, _______,    _______,                 _______, _______, _______, _______, _______, _______, _______,
    _______,  _______, _______, _______,     _______, _______,    _______,                 _______, _______, _______, _______, _______, _______, _______,
    KC_LSFT,  _______, _______, _______,     _______, _______,                                      _______, _______, _______, _______, _______, _______,
    KC_LCTL,  _______, _______, KC_LSFT,     KC_LCTL,             _______,                 _______,          _______, _______, _______, _______, _______,
                                             _______, KC_LALT,    KC_ENTER,                _______, _______, _______

  ),
  [FKEYS_GAMING] = LAYOUT_moonlander(
      // traditional 10 key numpad plus fn-key access, gaming layout
    _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,     _______, _______,                 _______, _______, _______, _______, _______, _______, _______,
    _______,  KC_F5,   KC_F6,   KC_F7,   KC_F8,     _______, _______,                 _______, _______, _______, _______, _______, _______, _______,
    _______,  KC_F9,   KC_F10,  KC_PGUP, KC_EQUAL,  KC_HOME, _______,                 _______, _______, _______, _______, _______, _______, _______,
    _______,  _______, _______, KC_PGDN, KC_MINUS,  KC_END,                                    _______, _______, _______, _______, _______, _______,
    _______,  _______, _______, _______, _______,            _______,                 _______,          _______, _______, _______, _______, _______,
                                         _______,   _______, _______,                 _______, _______, _______
  ),
  [NUMKEYS_GAMING] = LAYOUT_moonlander(
      // phone-style numpad plus arrowkey layer
    _______, KC_1,    KC_2,    KC_3,    KC_4,     _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
    _______, KC_5,    KC_6,    KC_7,    KC_8,     _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
    _______, KC_9,    KC_0,    KC_UP,   _______,  _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
    _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______,                                     _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,           _______,                   _______,          _______, _______, _______, _______, _______,
                                        _______,  _______, _______,                   _______, _______, _______
  ),
  [UTIL_LAYOUT] = LAYOUT_moonlander(
      // Quick access for momentary toggle off of base layer
    _______,           TD(DNC_BOOTLOADER), QK_REBOOT,              DB_TOGG, _______, _______, STORE_SETUPS,          _______, _______, _______, _______, _______, _______, _______,
    KC_AUDIO_VOL_UP,   KC_BRMU,            KC_MEDIA_NEXT_TRACK,    _______, _______, _______, PRINT_SETUPS,          _______, _______, _______, _______, _______, _______, _______,
    KC_AUDIO_VOL_DOWN, KC_BRMD,            KC_MEDIA_PREV_TRACK,    _______, _______, _______, _______,               _______, _______, _______, _______, _______, _______, _______,
    KC_AUDIO_MUTE,     _______,            KC_MEDIA_PLAY_PAUSE,    _______, _______, _______,                                 _______, _______, _______, _______, _______, _______,
    _______,           _______,            _______,                _______, _______,          _______,               _______,          _______, _______, _______, _______, _______,
                                                                            _______, _______, _______,               _______, _______, _______
  ),
};

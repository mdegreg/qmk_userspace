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
    TD(DNC_ESC_LS),     KC_1,           KC_2,           KC_3,               KC_4,           KC_5,                KC_6,                           KC_TRANSPARENT,    KC_TRANSPARENT,    KC_7,        KC_8,                      KC_9,        KC_0, KC_TRANSPARENT,
    KC_GRAVE,           KC_Q,           KC_W,           KC_E,               KC_R,           KC_T,                KC_Y,                           KC_BSLS,     KC_EQUAL,   KC_U,        KC_I,                      KC_O,        KC_P,        KC_VOLU,
    KC_CAPS_LOCK,       KC_A,           KC_S,           KC_D,               TD(DNC_FIND),   KC_G,                KC_H,                           KC_QUOTE,  KC_MINUS,   KC_J,        KC_K,                      KC_L,        KC_SCLN,       KC_VOLD,
    SC_LSPO,            KC_Z,           TD(DNC_XCUT),   TD(DNC_COPY),       TD(DNC_CPS),    KC_B,                                                            KC_SLASH,   KC_N,        KC_M,                      KC_COMMA,    KC_TRANSPARENT,      SC_RSPC,
    TT(NUMKEYS_LAYOUT), KC_LALT,        TD(DNC_RTN_L0), TT(NAV_LAYOUT),     MO(FKEYS_LAYOUT),           TD(DNC_BACKSPACE),                  TD(DNC_BACKSPACE),      MO(FKEYS_LAYOUT), LT(NAV_LAYOUT, KC_LBRC), KC_RBRC, KC_RALT, KC_LGUI,
                                                        TD(DNC_SPACE),      MT(MOD_LCTL, KC_ENTER),   MT(MOD_LALT, KC_QUOTE),                    MT(MOD_LALT, KC_QUOTE),  MT(MOD_LCTL, KC_EQUAL),    MT(MOD_LSFT, KC_DOT)
  ),  [OS_MAC_LAYOUT] = LAYOUT_moonlander(
      // minor modifications for mac os; most are handled via generic tapdance defs,1
      // but ctrl/cmd swapping and layer switch cue are replaced here for simplicity
      // keeping this layer is handy for catching and triggering os-specific
      // keypress interception, even if its mostly duplicative
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                         KC_TRANSPARENT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                         KC_TRANSPARENT,                 KC_TRANSPARENT,                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LCTL,
                                                                    KC_TRANSPARENT, MT(MOD_LGUI, KC_ENTER), KC_TRANSPARENT,                 KC_TRANSPARENT, MT(MOD_LGUI, KC_EQUAL),   KC_TRANSPARENT
  ),
  [NAV_LAYOUT] = LAYOUT_moonlander(
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,
    KC_TRANSPARENT,     KC_PGUP,        KC_TRANSPARENT, KC_UP,          KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT,         KC_HOME,        KC_PGUP,        KC_PGDN,        KC_END,         KC_NO,
    KC_TRANSPARENT,     KC_PGDN,        TD(DNC_LEFT),   KC_DOWN,        TD(DNC_RIGHT),  C(KC_C),        KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT,         TD(DNC_LEFT),   KC_UP,          KC_DOWN,        TD(DNC_RIGHT),  KC_NO,
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                 KC_TRANSPARENT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT,                 KC_TRANSPARENT,                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT,   KC_ENTER
  ),
    [NUMKEYS_LAYOUT] = LAYOUT_moonlander(
      // phone-style numpad plus arrowkey layer
    KC_TRANSPARENT,     MS_ACL0,        MS_ACL1,        MS_ACL2,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM_LOCK,     KC_KP_SLASH,    KC_KP_ASTERISK, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, MS_UP,          KC_TRANSPARENT, MS_WHLU,        KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_7,         KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT, MS_LEFT,        MS_DOWN,        MS_RGHT,        MS_WHLD,        KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_4,         KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                     KC_TRANSPARENT, KC_KP_1,         KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_PGUP,        KC_PGDN,        KC_TRANSPARENT,                                     KC_TRANSPARENT,                 KC_KP_0,         KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_TRANSPARENT,
                                                                        MS_BTN1,        MS_BTN2,        KC_TRANSPARENT,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC
  ),
    [FKEYS_LAYOUT] = LAYOUT_moonlander(
      // traditional 10 key numpad plus fn-key access, general layout
    KC_TRANSPARENT,         KC_F1,          KC_F2,          KC_F3,          KC_F4,                  KC_F5,          KC_F6,                          KC_TRANSPARENT, KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,          KC_TRANSPARENT,
    KC_TRANSPARENT,         S(KC_1),        S(KC_LBRC),     KC_LBRC,        S(KC_9),                S(KC_COMMA),    S(KC_6),                        KC_TRANSPARENT, S(KC_DOT),      S(KC_0),        KC_RBRC,        S(KC_RBRC),     S(KC_0),         KC_TRANSPARENT,
    KC_TRANSPARENT,         S(KC_1),        S(KC_2),        S(KC_3),        S(KC_4),                S(KC_5),        S(KC_6),                        KC_TRANSPARENT, KC_SCLN,        S(KC_7),        S(KC_8),        S(KC_9),        S(KC_0),         KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,         KC_TRANSPARENT,                                                 KC_BSLS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB,                                 KC_TRANSPARENT,                 KC_TRANSPARENT,                 KC_SCLN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  KC_TRANSPARENT,
                                                                            MT(MOD_LSFT, KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LSFT, KC_SCLN)
  ),
  [GAMING_LAYOUT] = LAYOUT_moonlander(
      // gaming layout; adding additional access for number keys and
      // eliminating most tapdance options to reduce input lag.
      // set up to allow easy access for number and fn key layers
    KC_TRANSPARENT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,
    KC_TAB,            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,
    TD(DNC_GMODESWAP), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,     KC_F,           KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSFT,           KC_TRANSPARENT, KC_X,           KC_C,               KC_V,           KC_TRANSPARENT,                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LCTL,           KC_LALT,        KC_TRANSPARENT, MO(NUMKEYS_GAMING), MO(FKEYS_GAMING),               KC_BSPC,                        KC_BSPC,                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                           KC_SPACE,       KC_ENTER,       KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT

  ),
  [GAMINGFAST_LAYOUT] = LAYOUT_moonlander(
      // gaming layout; adding additional access for number keys and
      // eliminating most tapdance options to reduce input lag.
      // set up to allow easy access for number and fn key layers
    KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,    KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,    KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,    KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSFT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LCTL,         KC_TRANSPARENT, KC_TRANSPARENT, KC_LSFT,            KC_LCTL,                           KC_TRANSPARENT,                 KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                         KC_TRANSPARENT, KC_LALT,           KC_ENTER,                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT

  ),
  [FKEYS_GAMING] = LAYOUT_moonlander(
      // traditional 10 key numpad plus fn-key access, gaming layout
    KC_TRANSPARENT,  KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,  KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,  KC_F9,          KC_F10,         KC_PGUP,        KC_EQUAL,       KC_HOME,        KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_PGDN,        KC_MINUS,       KC_END,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT,                 KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [NUMKEYS_GAMING] = LAYOUT_moonlander(
      // phone-style numpad plus arrowkey layer
    KC_TRANSPARENT,     KC_1,           KC_2,           KC_3,           KC_4,           KC_TRANSPARENT, KC_TRANSPARENT,                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_5,           KC_6,           KC_7,           KC_8,           KC_TRANSPARENT, KC_TRANSPARENT,                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_9,           KC_0,           KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,                                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT,                   KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [UTIL_LAYOUT] = LAYOUT_moonlander(
      // Quick access for momentary toggle off of base layer
    KC_TRANSPARENT,         TD(DNC_BOOTLOADER), QK_REBOOT,              DB_TOGG ,          KC_TRANSPARENT, KC_TRANSPARENT, STORE_SETUPS,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_AUDIO_VOL_UP,        KC_BRMU,            KC_MEDIA_NEXT_TRACK,    KC_TRANSPARENT,    KC_TRANSPARENT, KC_TRANSPARENT, PRINT_SETUPS,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_AUDIO_VOL_DOWN,      KC_BRMD,            KC_MEDIA_PREV_TRACK,    KC_TRANSPARENT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,               KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_AUDIO_MUTE,          KC_TRANSPARENT,     KC_MEDIA_PLAY_PAUSE,    KC_TRANSPARENT,    KC_TRANSPARENT, KC_TRANSPARENT,                                               KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,    KC_TRANSPARENT,                 KC_TRANSPARENT,               KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,               KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

// Copyright 2023 ZSA Technology Labs, Inc <@zsa>
// Copyright 2023 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#ifndef KEYBOARD_HEADERS_INITIALIZED
#define KEYBOARD_HEADERS_INITIALIZED
#include QMK_KEYBOARD_H
#endif

#include "os_swap.h"
#include "ledmap_user.h"
#include "layout_user.h"

#define getarraylength(x) (sizeof(x) / sizeof((x)[0]))

tap_dance_action_t tap_dance_actions[];

HSV os_color_win = {HSV_CORAL};
HSV os_color_mac = {HSV_CHILLGREEN};
HSV (*os_indicator_hsv_color) = {&os_color_win};

bool process_detected_host_os_user(os_variant_t detected_os) {
    set_os(detected_os);
    switch (detected_os) {
        case OS_MACOS:
        case OS_IOS:

            layer_on(OS_MAC_LAYOUT);
            break;
        case OS_WINDOWS:
            break;
        case OS_LINUX:
            break;
        case OS_UNSURE:
            break;
    }

    return true;
}

// layer color and swapping controls
void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color( i, 0, 0, 0 );
        } else {
            RGB rgb = hsv_to_rgb( hsv );
            float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
        }
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
# ifdef ORYX_ENABLE
    layer_state_set_oryx(state);
# endif
    if (layer_state_is(OS_MAC_LAYOUT)){
        set_os(OS_MACOS);
        os_indicator_hsv_color = &os_color_mac;
    } else {
        set_os(OS_WINDOWS);
        os_indicator_hsv_color = &os_color_win;
    }
    return state;
}

bool rgb_matrix_indicators_user(void) {
    int current_layer;

    if (keyboard_config.disable_layer_led) { return true; }

    current_layer = biton32(layer_state);
    if (0 <= current_layer && current_layer <= getarraylength(ledmap)) {
        set_layer_color(current_layer);
    } else if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
        rgb_matrix_set_color_all(0, 0, 0);
    }
    return false;
}


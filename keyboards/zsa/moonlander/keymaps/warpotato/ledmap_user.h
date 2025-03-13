#pragma once

#ifndef KEYBOARD_HEADERS_INITIALIZED
#define KEYBOARD_HEADERS_INITIALIZED
#include QMK_KEYBOARD_H
#endif
#include "layers_user.h"
#include "colors_user.h"

// LEDs are assigned top-down by column, approximately, from outside to inside,
// starting with the left half of the keyboard.
const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [OS_WIN_LAYOUT] = {
        // main keys - left
        {HSV_ORANGE}, {HSV_WHITE}, {HSV_LIGHTBLUE}, {HSV_MAGENTA}, {HSV_WHITE}, // 4
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF}, // 9
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF}, // 14
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_CORAL}, // 19
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_CORAL}, // 24
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, // 28
        {HSV_OFF}, {HSV_OFF}, {HSV_LIGHTBLUE}, // 31

        // thumb keys
        {HSV_LIGHTBLUE}, {HSV_CHILLGREEN}, {HSV_ORANGE}, // 34
        {HSV_RED}, // left red key 35

        // main keys - right
        // note that these start from the rightmost column
        {HSV_OFF}, {HSV_CYAN}, {HSV_CORAL}, {HSV_MAGENTA}, {HSV_RED}, // 40
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF}, // 45
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF}, // 50
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_CORAL}, // 55
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_CORAL}, // 60
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, // 64
        {HSV_OFF}, {HSV_WHITE}, {HSV_WHITE}, // 67

        // thumb keys
        {HSV_LIGHTBLUE}, {HSV_ORANGE}, {HSV_ORANGE}, // 70
        {HSV_RED}  // right red key, 71
    },

    [OS_MAC_LAYOUT] = {
        {HSV_ORANGE}, {HSV_WHITE}, {HSV_LIGHTBLUE}, {HSV_MAGENTA}, {HSV_WHITE},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_CHILLGREEN},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_CHILLGREEN},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE},
        {HSV_OFF}, {HSV_OFF}, {HSV_LIGHTBLUE},
        {HSV_LIGHTBLUE}, {HSV_CHILLGREEN}, {HSV_ORANGE},
        {HSV_RED},

        {HSV_OFF}, {HSV_CYAN}, {HSV_CORAL}, {HSV_MAGENTA}, {HSV_CHILLGREEN},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_CHILLGREEN},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_CHILLGREEN},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE},
        {HSV_OFF}, {HSV_WHITE}, {HSV_WHITE},
        {HSV_LIGHTBLUE}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_RED}
    },

    [NAV_LAYOUT] = {
        {HSV_ORANGE}, {HSV_OFF}, {HSV_OFF}, {HSV_MAGENTA}, {HSV_OFF},
        {HSV_OFF}, {HSV_GREEN}, {HSV_GREEN}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_MINTGREEN}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_CHILLGREEN}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_WHITE},
        {HSV_OFF}, {HSV_OFF}, {HSV_RED}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},

        {HSV_LIGHTBLUE}, {HSV_CHILLGREEN}, {HSV_WHITE},
        {HSV_RED},

        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_ORANGE}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_GREEN}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_GREEN}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_ORANGE}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},

        {HSV_CHILLGREEN}, {HSV_OFF}, {HSV_OFF},
        {HSV_RED}
    },

    [NUMKEYS_LAYOUT] = {
        {HSV_ORANGE}, {HSV_OFF}, {HSV_LIGHTBLUE}, {HSV_MAGENTA}, {HSV_SEAGREEN},
        {HSV_WHITE}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_WHITE}, {HSV_OFF}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_WHITE},
        {HSV_WHITE}, {HSV_MINTGREEN}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_GREEN},
        {HSV_OFF}, {HSV_OFF}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_GREEN},
        {HSV_OFF}, {HSV_LIGHTBLUE}, {HSV_LIGHTBLUE}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_LIGHTBLUE}, {HSV_CHILLGREEN}, {HSV_WHITE},
        {HSV_RED},

        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_LIGHTBLUE}, {HSV_LIGHTBLUE}, {HSV_CHILLGREEN}, {HSV_CHILLGREEN},
        {HSV_LIGHTBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_LIGHTBLUE},
        {HSV_LIGHTBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF},
        {HSV_SEAGREEN}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_RED}, {HSV_OFF}, {HSV_OFF},
        {HSV_SEAGREEN}
    },

    [FKEYS_LAYOUT] = {
        {HSV_ORANGE}, {HSV_OFF}, {HSV_LIGHTBLUE}, {HSV_MAGENTA}, {HSV_OFF},
        {HSV_CHILLGREEN}, {HSV_OFF}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_OFF},
        {HSV_CHILLGREEN}, {HSV_WHITE}, {HSV_MINTGREEN}, {HSV_WHITE}, {HSV_OFF},
        {HSV_CHILLGREEN}, {HSV_WHITE}, {HSV_MINTGREEN}, {HSV_WHITE}, {HSV_OFF},
        {HSV_CHILLGREEN}, {HSV_WHITE}, {HSV_MINTGREEN}, {HSV_WHITE}, {HSV_WHITE},
        {HSV_CHILLGREEN}, {HSV_WHITE}, {HSV_MINTGREEN}, {HSV_WHITE},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_LIGHTBLUE}, {HSV_CHILLGREEN}, {HSV_WHITE},
        {HSV_RED},

        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_MAGENTA}, {HSV_CHILLGREEN},
        {HSV_CHILLGREEN}, {HSV_OFF}, {HSV_MINTGREEN}, {HSV_OFF}, {HSV_OFF},
        {HSV_CHILLGREEN}, {HSV_WHITE}, {HSV_MINTGREEN}, {HSV_WHITE}, {HSV_OFF},
        {HSV_CHILLGREEN}, {HSV_YELLOW}, {HSV_MINTGREEN}, {HSV_WHITE}, {HSV_OFF},
        {HSV_CHILLGREEN}, {HSV_YELLOW}, {HSV_MINTGREEN}, {HSV_WHITE}, {HSV_OFF},
        {HSV_CHILLGREEN}, {HSV_WHITE}, {HSV_MINTGREEN}, {HSV_WHITE},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_MAGENTA}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_RED}
    },

    [GAMING_LAYOUT] = {
        {HSV_ORANGE}, {HSV_LIGHTBLUE}, {HSV_OFF}, {HSV_MAGENTA}, {HSV_ORANGE},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_RED}, {HSV_WHITE}, {HSV_ORANGE},
        {HSV_ICEBLUE}, {HSV_RED}, {HSV_RED}, {HSV_WHITE}, {HSV_COOLWHITE},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_RED}, {HSV_WHITE}, {HSV_COOLWHITE},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_COOLWHITE},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE},
        {HSV_LIGHTBLUE}, {HSV_CHILLGREEN}, {HSV_WHITE},
        {HSV_RED},

        {HSV_OFF}, {HSV_CYAN}, {HSV_CORAL}, {HSV_MAGENTA}, {HSV_RED}, // 40
        {HSV_OFF}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF}, // 45
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, // 50
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, // 55
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, // 60
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, // 64
        {HSV_OFF}, {HSV_YELLOW}, {HSV_YELLOW}, // 67

        // thumb keys
        {HSV_MAGENTA}, {HSV_ORANGE}, {HSV_ORANGE}, // 70
        {HSV_REDKEYWHITE}  // right red key, 71
    },

    [GAMINGFAST_LAYOUT] = {
        {HSV_ORANGE}, {HSV_LIGHTBLUE}, {HSV_OFF}, {HSV_MAGENTA}, {HSV_ORANGE},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_RED}, {HSV_WHITE}, {HSV_ORANGE},
        {HSV_ICEBLUE}, {HSV_RED}, {HSV_RED}, {HSV_WHITE}, {HSV_COOLWHITE},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_RED}, {HSV_WHITE}, {HSV_MAGENTA},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_ORANGE},
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE},
        {HSV_ICEBLUE}, {HSV_ICEBLUE}, {HSV_ICEBLUE},
        {HSV_LIGHTBLUE}, {HSV_ORANGE}, {HSV_CHILLGREEN},
        {HSV_RED},

        {HSV_OFF}, {HSV_CYAN}, {HSV_CORAL}, {HSV_MAGENTA}, {HSV_RED}, // 40
        {HSV_OFF}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF}, // 45
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, // 50
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, // 55
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, // 60
        {HSV_ICEBLUE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, // 64
        {HSV_OFF}, {HSV_YELLOW}, {HSV_YELLOW}, // 67

        // thumb keys
        {HSV_MAGENTA}, {HSV_ORANGE}, {HSV_ORANGE}, // 70
        {HSV_REDKEYWHITE}  // right red key, 7
    },

    [FKEYS_GAMING] = {
        {HSV_ORANGE}, {HSV_LIGHTBLUE}, {HSV_OFF}, {HSV_MAGENTA}, {HSV_ORANGE},
        {HSV_CHILLGREEN}, {HSV_CHILLGREEN}, {HSV_CHILLGREEN}, {HSV_OFF}, {HSV_OFF},
        {HSV_CHILLGREEN}, {HSV_CHILLGREEN}, {HSV_CHILLGREEN}, {HSV_OFF}, {HSV_WHITE},
        {HSV_CHILLGREEN}, {HSV_CHILLGREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_WHITE},
        {HSV_CHILLGREEN}, {HSV_CHILLGREEN}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_WHITE},
        {HSV_OFF}, {HSV_OFF}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_WHITE},
        {HSV_RED},

        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}
    },

    [NUMKEYS_GAMING] = {
        {HSV_ORANGE}, {HSV_LIGHTBLUE}, {HSV_OFF}, {HSV_MAGENTA}, {HSV_ORANGE},
        {HSV_ICEBLUE}, {HSV_ICEBLUE}, {HSV_ICEBLUE}, {HSV_OFF}, {HSV_ORANGE},
        {HSV_ICEBLUE}, {HSV_ICEBLUE}, {HSV_ICEBLUE}, {HSV_MINTGREEN}, {HSV_WHITE},
        {HSV_ICEBLUE}, {HSV_ICEBLUE}, {HSV_MINTGREEN}, {HSV_MINTGREEN}, {HSV_WHITE},
        {HSV_ICEBLUE}, {HSV_ICEBLUE}, {HSV_OFF}, {HSV_MINTGREEN}, {HSV_WHITE},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_LIGHTBLUE}, {HSV_CHILLGREEN}, {HSV_WHITE},
        {HSV_RED},

        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}
    },

    [UTIL_LAYOUT] = {
        {HSV_WHITE}, {HSV_MINTGREEN}, {HSV_MINTGREEN}, {HSV_RED}, {HSV_OFF},
        {HSV_RED}, {HSV_CYAN}, {HSV_CORAL}, {HSV_OFF}, {HSV_OFF},
        {HSV_RED}, {HSV_SEAGREEN}, {HSV_RED}, {HSV_ORANGE}, {HSV_WHITE},
        {HSV_RED}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_WHITE},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_WHITE},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF},

        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}
    },

};

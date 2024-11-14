#pragma once

#ifndef KEYBOARD_HEADERS_INITIALIZED
#define KEYBOARD_HEADERS_INITIALIZED
#include QMK_KEYBOARD_H
#endif
#include "layers_user.h"

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [_BASE] = {
        {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_LIGHTBLUE},
        {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_LIGHTBLUE},
        {HSV_WHITE}, {HSV_WHITE}, {HSV_WHITE}, {HSV_OFF},
        {HSV_WHITE}, {HSV_LIGHTBLUE}, {HSV_RED}, {HSV_CHILLGREEN}
    },
    [NAVARROW] = {
        {HSV_ORANGE}, {HSV_OFF}, {HSV_GREEN}, {HSV_LIGHTBLUE},
        {HSV_LIGHTBLUE}, {HSV_OFF}, {HSV_LIGHTBLUE}, {HSV_RED},
        {HSV_ORANGE}, {HSV_MINTGREEN}, {HSV_GREEN}, {HSV_CHILLGREEN},
        {HSV_MINTGREEN}, {HSV_MINTGREEN}, {HSV_MINTGREEN}, {HSV_OFF}
    },
    [_ARROW] = {
        {HSV_OFF}, {HSV_OFF}, {HSV_GREEN}, {HSV_OFF},
        {HSV_LIGHTBLUE}, {HSV_OFF}, {HSV_LIGHTBLUE}, {HSV_OFF},
        {HSV_RED}, {HSV_MINTGREEN}, {HSV_GREEN}, {HSV_CHILLGREEN},
        {HSV_MINTGREEN}, {HSV_MINTGREEN}, {HSV_MINTGREEN}, {HSV_OFF}
    },
    [PYCHARM] = {
        {HSV_LIGHTBLUE}, {HSV_MAGENTA}, {HSV_OFF}, {HSV_ORANGE},
        {HSV_RED}, {HSV_OFF}, {HSV_OFF}, {HSV_CHILLGREEN},
        {HSV_LIGHTBLUE}, {HSV_OFF}, {HSV_OFF}, {HSV_CHILLGREEN},
        {HSV_LIGHTBLUE}, {HSV_OFF}, {HSV_OFF}, {HSV_LIGHTBLUE}
    },
    [VSCODE] = {
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_CHILLGREEN},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_CHILLGREEN},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_PURPLE}
    },
    [_FN] = {
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}
    },
    [_FN2] = {
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_RED},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF},
        {HSV_OFF}, {HSV_OFF}, {HSV_OFF}, {HSV_OFF}
    },
    [SONAR] = {
        {HSV_MINTGREEN}, {HSV_RED}, {HSV_CHILLGREEN}, {HSV_OFF},
        {HSV_LIGHTBLUE}, {HSV_RED}, {HSV_CHILLGREEN}, {HSV_OFF},
        {HSV_MAGENTA}, {HSV_RED}, {HSV_CHILLGREEN}, {HSV_OFF},
        {HSV_PURPLE}, {HSV_RED}, {HSV_CHILLGREEN}, {HSV_OFF}
    },
};
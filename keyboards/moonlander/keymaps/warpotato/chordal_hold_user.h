//
// Created by matt on 3/6/25.
//

#pragma once

#ifndef KEYBOARD_HEADERS_INITIALIZED
#define KEYBOARD_HEADERS_INITIALIZED
#include QMK_KEYBOARD_H
#endif

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_moonlander(
      // baseline layout - mostly qwerty, with some keys shifted to emphasize
      // left hand typing + habitual movements
    'L', 'L', 'L', 'L', 'L', 'L', 'L',      'R', 'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L', 'L',      'R', 'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L', 'L',      'R', 'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L',                'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L',      'L',      'R',      'R', 'R', 'R', 'R', 'R',
                        'L', 'L', 'L',      'R', 'R', 'R'
  );
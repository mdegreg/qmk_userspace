#pragma once

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layer_names {
    _BASE,
    NAVARROW,
    _ARROW,
    PYCHARM,
    VSCODE,
    _FN,
    _FN2,
    SONAR,
    NUM_LAYERS,
};

const char * layer_names[] = {
    "Numpad",
    "Arrow - Nav",
    "Arrow - Shell",
    "Pycharm",
    "VSCode",
    "Fn",
    "Util",
    "Sonar",
};

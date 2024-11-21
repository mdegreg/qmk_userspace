#pragma once

enum tap_dance_codes {
    DNC_ESC_LS,
    DNC_NUMNAV,
    DNC_FIND,
    DNC_XCUT,
    DNC_COPY,
    DNC_CPS,
    DNC_SUPER_ALT_TAB,
    DNC_RTN_L0,
    DNC_ARROWMOUSE,
    DNC_CURLY,
    DNC_SQUARE,
    DNC_BOOTLOADER,
    DNC_SPACE,
    DNC_BACKSPACE,
    DNC_LEFT,
    DNC_RIGHT,
    DNC_GMODESWAP,
    DNC_CA,
    /*
    ** Do not change or move from bottom of enum. **

    An enum by default has the value 0 for the
    first value, incrementing by 1 each time.

    Leaving this as is will take advantage of that,
    as the last item will be equal to the length of
    the array of items above, e.g. the bottom value
    will be the number of items excluding itself.

    We use the last item here to indicate dynamically
    how many tap dance functions we support within this keymap.
    */
    MAX_COUNT_TAPDANCES,
};

tap dance_state[MAX_COUNT_TAPDANCES];
extern tap_dance_action_t tap_dance_actions[MAX_COUNT_TAPDANCES];

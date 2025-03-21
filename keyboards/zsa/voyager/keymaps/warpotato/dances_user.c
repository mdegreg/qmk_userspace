//================================
// Tap dance configuration
//================================

#ifndef KEYBOARD_HEADERS_INITIALIZED
#define KEYBOARD_HEADERS_INITIALIZED
#include QMK_KEYBOARD_H
#endif

#ifdef SUPER_ALT_TAB_ENABLE
#include "alttab.h"
#endif
#include "modifiers.h"
#include "os_swap.h"
#include "layers_user.h"
#include "dances.h"
#include "dances_user.h"

/*
* Control tapdances
*
* Used to move around  between layers, trigger swaps, and other control
* flow type things.
*/

// for hopping to gaming layout
void on_dance_esc(tap_dance_state_t *state, void *user_data);
void dance_esd_finished(tap_dance_state_t *state, void *user_data);
void dance_esc_reset(tap_dance_state_t *state, void *user_data);

void on_dance_esc(tap_dance_state_t *state, void *user_data) {
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}
void dance_esc_finished(tap_dance_state_t *state, void *user_data) {
    int current_layer;
    dance_state[DNC_ESC_LS].step = dance_step(state);
    switch (dance_state[DNC_ESC_LS].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD:
            layer_on(UTIL_LAYOUT);
            break;
        case DOUBLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_HOLD:
            current_layer = get_highest_layer(layer_state);
            if (current_layer == OS_WIN_LAYOUT) {
                set_os(OS_MACOS);
                layer_on(OS_MAC_LAYOUT);
            } else if (current_layer == OS_MAC_LAYOUT) {
                set_os(OS_WINDOWS);
                layer_off(OS_MAC_LAYOUT);
            } else {
                layer_state_set(1 << OS_WIN_LAYOUT | layer_state_is(OS_MAC_LAYOUT) << OS_MAC_LAYOUT );
            }
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_ESCAPE);
            register_code16(KC_ESCAPE);
            break;
        case TRIPLE_SINGLE_TAP:
            tap_code16(KC_ESCAPE);
            tap_code16(KC_ESCAPE);
            register_code16(KC_ESCAPE);
    }
}

void dance_esc_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DNC_ESC_LS].step) {
        case SINGLE_TAP:
            unregister_code16(KC_ESCAPE);
        case SINGLE_HOLD:
            layer_off(UTIL_LAYOUT);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_ESCAPE);
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_ESCAPE);
        case TRIPLE_SINGLE_TAP:
            unregister_code16(KC_ESCAPE);
            break;
    }
    dance_state[DNC_ESC_LS].step = 0;
}


/*
* Utility tapdances
*
* These are generally used for general/productivity layers for
* making various actions and swaps easier to use, and generally
* being comfier.
*/

// keyboard shortcut triggers on hold
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    os_modkey_on_dance(state, KC_F);
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    os_modkey_dance_finished(&(dance_state[DNC_FIND]), state, KC_F);
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    os_modkey_dance_reset(&(dance_state[DNC_FIND]), state, KC_F);
}

void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    os_modkey_on_dance(state, KC_X);
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    os_modkey_dance_finished(&(dance_state[DNC_XCUT]), state, KC_X);
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    os_modkey_dance_reset(&(dance_state[DNC_XCUT]), state, KC_X);
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    os_modkey_on_dance(state, KC_C);
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    os_modkey_dance_finished(&(dance_state[DNC_COPY]), state, KC_C);
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    os_modkey_dance_reset(&(dance_state[DNC_COPY]), state, KC_C);
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    os_modkey_on_dance(state, KC_V);
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    os_modkey_dance_finished(&(dance_state[DNC_CPS]), state, KC_V);
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    os_modkey_dance_reset(&(dance_state[DNC_CPS]), state, KC_V);
}

// reduce accidental bootloader triggers while having it more accessible
// without a paperclip
void dance_bootloader_finished(tap_dance_state_t *state, void *user_data);
void dance_bootloader_reset(tap_dance_state_t *state, void *user_data);

void dance_bootloader_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_BOOTLOADER].step = dance_step(state);
    switch (dance_state[DNC_BOOTLOADER].step) {
        case DOUBLE_HOLD: reset_keyboard(); break;
    }
}

void dance_bootloader_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    dance_state[DNC_BOOTLOADER].step = 0;
}

// a few navigation utils for editing and working with
// CLI commands
#ifdef SUPER_ALT_TAB_ENABLE
void super_alt_tab_finished(tap_dance_state_t *state, void *user_data) {
    alt_tab_finished(&(dance_state[DNC_SUPER_ALT_TAB]), state, KC_LALT);
}

void super_alt_tab_reset(tap_dance_state_t *state, void *user_data) {
    alt_tab_reset(&(dance_state[DNC_SUPER_ALT_TAB]), state, KC_LALT);
}
#endif

// delete a whole word on hold
void on_dance_backspace(tap_dance_state_t* state, void* user_data) {
    on_mod_charswap_dance(
        state, KC_BSPC, KC_BSPC, os_bksp_mod
    );
}

void dance_backspace_finished(tap_dance_state_t* state, void* user_data) {
    mod_charswap_dance_finished(
        &(dance_state[DNC_BACKSPACE]), state, KC_BSPC, KC_BSPC, os_bksp_mod
    );
}

void dance_backspace_reset(tap_dance_state_t* state, void* user_data) {
    mod_charswap_dance_reset(
        &(dance_state[DNC_BACKSPACE]), state, KC_BSPC, KC_BSPC, os_bksp_mod
    );
}

// bump left or right by a full word on hold`
void on_dance_la(tap_dance_state_t* state, void* user_data) {
    on_mod_charswap_dance(
        state, KC_LEFT, KC_LEFT, os_bksp_mod
    );
}

void dance_la_finished(tap_dance_state_t* state, void* user_data) {
    mod_charswap_dance_finished(
        &(dance_state[DNC_LEFT]), state, KC_LEFT, KC_LEFT, os_bksp_mod
    );
}

void dance_la_reset(tap_dance_state_t* state, void* user_data) {
    mod_charswap_dance_reset(
        &(dance_state[DNC_LEFT]), state, KC_LEFT, KC_LEFT, os_bksp_mod
    );
}

void on_dance_ra(tap_dance_state_t* state, void* user_data) {
    on_mod_charswap_dance(
        state, KC_RIGHT, KC_RIGHT, os_bksp_mod
    );
}

void dance_ra_finished(tap_dance_state_t* state, void* user_data) {
    mod_charswap_dance_finished(
        &(dance_state[DNC_RIGHT]), state, KC_RIGHT, KC_RIGHT, os_bksp_mod
    );
}

void dance_ra_reset(tap_dance_state_t* state, void* user_data) {
    mod_charswap_dance_reset(
        &(dance_state[DNC_RIGHT]), state, KC_RIGHT, KC_RIGHT, os_bksp_mod
    );
}


tap_dance_action_t tap_dance_actions[] = {
        [DNC_ESC_LS] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_esc, dance_esc_finished, dance_esc_reset),
        [DNC_FIND] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DNC_XCUT] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DNC_COPY] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DNC_CPS] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DNC_BOOTLOADER] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_bootloader_finished, dance_bootloader_reset),
        [DNC_BACKSPACE] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_backspace, dance_backspace_finished, dance_backspace_reset),
        [DNC_LEFT] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_la, dance_la_finished, dance_la_reset),
        [DNC_RIGHT] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_ra, dance_ra_finished, dance_ra_reset),
};

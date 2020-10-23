/*
Copyright 2020 <rtwayland>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include "keymap.h"

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix = {
    KEYMAP(
        MEDIATAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, TD_MPLY_DND,
        CTRLESC, KC_A, KC_S, KC_D, NUMF, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, MEDIAQUOT,
        L_NUM, GUIZ, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, GUISLSH, L_SYM,
        L_NAV, KC_LSFT, ALTTAB, KC_ENT, SYMSPC, KC_BSPC
    )
};

void setupKeymap() {
    uint32_t qwerty_tap[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, TD_MPLY_DND_TAP,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
                                            _______, _______, _______,    _______, _______, _______
    );

    uint32_t qwerty_dtap[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, TD_MPLY_DND_DTAP,
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
                                            _______, _______, _______,    _______, _______, _______
    );

    uint32_t qwerty_taph[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        MEDIATAB_TAP, _______, _______, _______, _______, _______,                              _______, _______, _______, _______, _______, _______,
        CTRLESC_TAP, _______, _______, _______, NUMF_TAP, _______,                              _______, _______, _______, _______, _______, MEDIAQUOT_TAP,
        _______, GUIZ_TAP, _______, _______, _______, _______,                              _______, _______, _______, _______, GUISLSH_TAP, _______,
                                                _______, _______, _______,    _______, SYMSPC_TAP, _______
    );

    uint32_t qwerty_hold[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        MEDIATAB_HOLD, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
        CTRLESC_HOLD, _______, _______, _______, NUMF_HOLD, _______,                    _______, _______, _______, _______, _______, MEDIAQUOT_HOLD,
        _______, GUIZ_HOLD, _______, _______, _______, _______,                       _______, _______, _______, _______, GUISLSH_HOLD, _______,
                                                _______, _______, _______,    _______, SYMSPC_HOLD, _______
    );

    uint32_t symbol_layer[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        CTL_C, KC_TILD, KC_AT, KC_LCBR, KC_RCBR, KC_HASH, KC_ASTR, KC_CIRC, KC_AMPR, KC_PIPE, KC_BSLS, CTL_GRV,
        KC_LCTL, KC_GRV, KC_MINS, KC_LPRN, KC_RPRN, KC_EXLM, KC_QUES, KC_DLR, KC_LT, KC_GT, KC_SLSH, KC_DQUO,
        KC_LALT, KC_LGUI, KC_UNDS, KC_LBRC, KC_RBRC, KC_PLUS, KC_P0, KC_EQL, KC_PERC, KC_COLN, KC_NO, KC_NO,
        KC_NO, KC_LSFT, KC_LALT, KC_NO, KC_TRNS, KC_NO
    );

    uint32_t num_layer[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ASTR, KC_7, KC_8, KC_9, KC_SLSH, KC_EQL,
        KC_LCTL, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_PLUS, KC_4, KC_5, KC_6, KC_MINS, KC_PERC,
        KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO,  KC_0, KC_1, KC_2, KC_3, KC_DOT, KC_PENT,
        KC_NO, KC_LSFT, KC_TAB, KC_NO, KC_SPC, KC_BSPC
    );

    uint32_t nav_layer[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        KC_NO, KC_NO, NXT_WORD, PRV_TAB, NXT_TAB, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, PRV_WORD, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_SPC, KC_BSPC
    );

    uint32_t media_layer[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        KC_TRNS, SCRN, SCRN_WHL, SCRN_SLCT, SCRN_SLCT_CP, KC_VOLU, UP_LEFT_CNR, PRV_SCRN, NXT_SCRN, UP_RGHT_CNR, WND_LRG, SLEEP,
        KC_CAPS, KC_F11, KC_MPRV, KC_MNXT, KC_MPLY, KC_VOLD, WND_LEFT, WND_DOWN, WND_UP, WND_RGHT, WND_SML, KC_TRNS,
        KC_BRID, KC_BRIU, ZOOM_OUT, ZOOM_IN, NXT_WND, KC_MUTE, BTM_LEFT_CNR, WND_FULL, WND_CNTR, BTM_RGHT_CNR, WND_FULL_ALMST, RESET,
        PRV_SPACE, NXT_SPACE, KC_NO, KC_NO, KC_NO, KC_NO
    );

    uint32_t word_layer[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, PRINT_BATTERY, KC_NO,
        KC_NO, KC_NO, EM_DASH, KC_NO, COMP_MODE, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, PRINT_INFO, KC_NO,
        KC_TRNS, KC_NO, EN_DASH, KC_NO, PASTE_STYLE,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, PRINT_BLE, KC_TRNS,
        KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO, KC_DEL
    );

    uint32_t fkeys_layer[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_F17, KC_F20,
        KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_F16, KC_F19,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_F13, KC_F18,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    );

    uint32_t numpad_layer[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_PAST, KC_P7, KC_P8, KC_P9, KC_PSLS, KC_PEQL,
        KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PPLS, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_PERC,
        KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO,  KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_PENT,
        KC_NO, KC_TRNS, KC_NO, KC_NO, KC_LPRN, KC_RPRN
    );

    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_QWERTY, Method::MT_TAP,  qwerty_taph[row][col]);
            matrix[row][col].addActivation(_QWERTY, Method::MT_HOLD, qwerty_hold[row][col]);
            matrix[row][col].addActivation(_QWERTY, Method::DT_TAP,  qwerty_tap[row][col]);
            matrix[row][col].addActivation(_QWERTY, Method::DT_DOUBLETAP, qwerty_dtap[row][col]);

            matrix[row][col].addActivation(_SYM, Method::PRESS, symbol_layer[row][col]);
            matrix[row][col].addActivation(_NUM, Method::PRESS, num_layer[row][col]);
            matrix[row][col].addActivation(_NAV, Method::PRESS, nav_layer[row][col]);
            matrix[row][col].addActivation(_MEDIA, Method::PRESS, media_layer[row][col]);
            matrix[row][col].addActivation(_WORD, Method::PRESS, word_layer[row][col]);
        }
    }

}



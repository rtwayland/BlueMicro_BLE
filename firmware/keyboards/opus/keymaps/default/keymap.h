/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include <stdint.h>
#include "hid_keycodes.h"
#include "keyboard_config.h"
#include "advanced_keycodes.h"
#include "Key.h"
#include <array>

#ifndef KEYMAP_H
#define KEYMAP_H

#define KC_CAP_D MOD(MOD_LSHIFT, KC_D)

// Layer Definitions

#define _QWERTY 0
#define _SYM    1
#define _NUM    2
#define _NAV    3
#define _MEDIA  4
#define _WORD   5

// Layer Keycode Definitions

#define L_QWERTY  (LAYER_0 + _QWERTY)
#define L_SYM     (LAYER_0 + _SYM)
#define L_NUM     (LAYER_0 + _NUM)
#define L_NAV     (LAYER_0 + _NAV)
#define L_MEDIA   (LAYER_0 + _MEDIA)
#define L_WORD    (LAYER_0 + _WORD)

// Mod Combos
#define SGUI(KEY) LSFT(LGUI(KEY))
#define LCA(KEY) LCTL(LALT(KEY)) 
#define MEH(KEY) LSFT(LCTL(LALT(KEY)))
#define LCAG(KEY) LGUI(LCTL(LALT(KEY)))

// Misc
#define CTL_C LCTL(KC_C)
#define CTL_GRV LCTL(KC_GRV)
#define PRV_WORD LALT(KC_LEFT)
#define NXT_WORD LALT(KC_RGHT)
#define PRV_TAB SGUI(KC_LBRC)
#define NXT_TAB SGUI(KC_RBRC)
#define ZOOM_OUT LGUI(KC_MINS)
#define ZOOM_IN LGUI(KC_PLUS)
#define NXT_WND LGUI(KC_GRV)
#define PRV_SPACE LCTL(LSFT(KC_TAB))
#define NXT_SPACE LCTL(KC_TAB)

// Screenshots
#define SCRN SGUI(KC_5)
#define SCRN_WHL SGUI(KC_3)
#define SCRN_SLCT SGUI(KC_4)
#define SCRN_SLCT_CP MEH(KC_4)

// Window Management
#define UP_LEFT_CNR LCA(KC_U)
#define UP_RGHT_CNR LCA(KC_I)
#define BTM_LEFT_CNR LCA(KC_J)
#define BTM_RGHT_CNR LCA(KC_K)
#define WND_LEFT LCA(KC_LEFT)
#define WND_RGHT LCA(KC_RGHT)
#define WND_DOWN LCA(KC_DOWN)
#define WND_LRG LCA(KC_EQL)
#define WND_SML LCA(KC_MINS)
#define WND_UP LCA(KC_UP)
#define WND_CNTR LCA(KC_C)
#define WND_FULL LCA(KC_ENT)
#define WND_FULL_ALMST MEH(KC_UP)
#define PRV_SCRN LCAG(KC_LEFT)
#define NXT_SCRN LCAG(KC_RGHT)

// OS Functions
#define SLEEP LALT(LGUI(KC_POWER))
#define KC_BRIU KC_DISPLAY_BRIGHTI
#define KC_BRID KC_DISPLAY_BRIGHTD

// Grammar
#define EM_DASH LALT(LSFT(KC_MINS))
#define EN_DASH LALT(KC_MINS)
#define COMP_MODE LALT(LGUI(KC_F))
#define PASTE_STYLE SGUI(LALT(KC_V))

// tap/hold definitions

// MT(MOD_LCTL, KC_ESC) 
#define CTRLESC XXXXXXX
#define CTRLESC_TAP KC_ESC
#define CTRLESC_HOLD KC_LCTL

// MT(MOD_LGUI, KC_Z) 
#define GUIZ XXXXXXX
#define GUIZ_TAP KC_Z
#define GUIZ_HOLD KC_LGUI

// MT(MOD_LGUI, KC_SLSH) 
#define GUISLSH XXXXXXX
#define GUISLSH_TAP KC_SLSH
#define GUISLSH_HOLD KC_LGUI

// MT(MOD_LALT, KC_TAB) 
#define ALTTAB XXXXXXX
#define ALTTAB_TAP KC_TAB
#define ALTTAB_HOLD KC_LALT

// LT(_SYM, KC_SPC) 
#define SYMSPC XXXXXXX
#define SYMSPC_TAP KC_SPC
#define SYMSPC_HOLD L_SYM
// LT(_MEDIA, KC_QUOT) 
#define MEDIAQUOT XXXXXXX
#define MEDIAQUOT_TAP KC_QUOT
#define MEDIAQUOT_HOLD L_MEDIA
// LT(_MEDIA, KC_TAB) 
#define MEDIATAB XXXXXXX
#define MEDIATAB_TAP KC_TAB
#define MEDIATAB_HOLD L_MEDIA
// LT(_NUM, KC_F) 
#define NUMF XXXXXXX
#define NUMF_TAP KC_F
#define NUMF_HOLD L_NUM

// ACTION_TAP_DANCE_DOUBLE(KC_MPLY, KC_F6),
#define TD_MPLY_DND  XXXXXXX
#define TD_MPLY_DND_TAP  KC_MPLY
#define TD_MPLY_DND_DTAP  KC_F6

#ifndef DOUBLETAP_TIME_LIMIT
  #define DOUBLETAP_TIME_LIMIT 200
#endif
#ifndef TIME_TILL_HOLD
  #define TIME_TILL_HOLD 140
#endif
#ifndef TIME_TILL_RELEASE
  #define TIME_TILL_RELEASE 20 // was 80 
#endif


void setupKeymap();
extern std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix;

#endif /* KEYMAP_H */

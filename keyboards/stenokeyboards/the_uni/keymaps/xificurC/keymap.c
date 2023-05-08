/*
Copyright 2021 Peter C. Park <peter@stenokeyboards.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_steno.h"

enum uni_layers { BASE, MBO, MEDR, NAVR, MOUR, NSSL, NSL, FUNL, STNO };

enum custom_keycodes { PLOVER = SAFE_RANGE, EXT_PLV, I_PRNO, I_PRNC, I_BRCO, I_BRCC, I_TAG, I_QUOT, I_SQUOT,
                       I_COLN, I_SCLN, I_EQL, I_PLUS};
#include "g/keymap_combo.h"

#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT(
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   LGUI_T(KC_Q)   ,    LALT_T(KC_W)   ,    LCTL_T(KC_F)   ,    LSFT_T(KC_P)   ,    KC_B           ,    KC_J           ,    LSFT_T(KC_L)   ,    LCTL_T(KC_U)   ,    LALT_T(KC_Y)   ,    LGUI_T(KC_QUOT),    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   KC_Z           ,    KC_X           ,    KC_C           ,    KC_D           ,    KC_V           ,    KC_K           ,    KC_H           ,    KC_COMM        ,    KC_DOT         ,    KC_SLSH        ,    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
                                           MO(MEDR)       ,    MO(NAVR)       ,    MO(MOUR)       ,    MO(NSSL)       ,    MO(NSL)        ,    MO(FUNL)
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
),
[NAVR] = LAYOUT(
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   KC_LGUI        ,    KC_LALT        ,    KC_LCTL        ,    KC_LSFT        ,    XXXXXXX        ,    XXXXXXX        ,    KC_LEFT        ,    KC_DOWN        ,    KC_UP          ,    KC_RGHT        ,    KC_CAPS        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    KC_HOME        ,    KC_PGDN        ,    KC_PGUP        ,    KC_END         ,    PLOVER         ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
                                           XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
),
[MOUR] = LAYOUT(
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   KC_LGUI        ,    KC_LALT        ,    KC_LCTL        ,    KC_LSFT        ,    XXXXXXX        ,    XXXXXXX        ,    KC_7           ,    KC_8           ,    KC_9           ,    XXXXXXX        ,    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    KC_MINS        ,    KC_1           ,    KC_2           ,    KC_3           ,    XXXXXXX        ,    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
                                           XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    KC_DOT         ,    KC_0           ,    XXXXXXX
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
),
[MEDR] = LAYOUT(
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   KC_LGUI        ,    KC_LALT        ,    KC_LCTL        ,    KC_LSFT        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
                                           XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
),
[FUNL] = LAYOUT(
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   KC_F12         ,    KC_F7          ,    KC_F8          ,    KC_F9          ,    XXXXXXX        ,    XXXXXXX        ,    KC_LSFT        ,    KC_LCTL        ,    KC_LALT        ,    KC_LGUI        ,    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   KC_F10         ,    KC_F1          ,    KC_F2          ,    KC_F3          ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
                                           XXXXXXX        ,    KC_PSCR        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
),
[NSL] = LAYOUT(
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   XXXXXXX        ,    KC_7           ,    KC_8           ,    KC_9           ,    XXXXXXX        ,    XXXXXXX        ,    KC_LSFT        ,    KC_LCTL        ,    KC_LALT        ,    KC_LGUI        ,    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   XXXXXXX        ,    KC_1           ,    KC_2           ,    KC_3           ,    KC_MINS        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
                                           XXXXXXX        ,    KC_0           ,    KC_DOT         ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
),
[NSSL] = LAYOUT(
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   I_SCLN         ,    I_PLUS         ,    I_PRNO         ,    I_PRNC         ,    EXT_PLV        ,    XXXXXXX        ,    KC_LSFT        ,    KC_LCTL        ,    KC_LALT        ,    KC_LGUI        ,    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   I_COLN         ,    I_EQL          ,    I_BRCO         ,    I_BRCC         ,    KC_MINS        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX        ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
                                           KC_UNDS        ,    KC_BSLS        ,    KC_PIPE        ,    XXXXXXX        ,    XXXXXXX        ,    XXXXXXX
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
),
[STNO] = LAYOUT(
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   STN_S1         ,    STN_TL         ,    STN_PL         ,    STN_HL         ,    STN_ST1        ,    STN_ST3        ,    STN_FR         ,    STN_PR         ,    STN_LR         ,    STN_TR         ,    STN_DR         ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
   STN_S2         ,    STN_KL         ,    STN_WL         ,    STN_RL         ,    STN_ST2        ,    STN_ST3        ,    STN_RR         ,    STN_BR         ,    STN_GR         ,    STN_SR         ,    STN_ZR         ,
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
                                           EXT_PLV        ,    STN_A          ,    STN_O          ,    STN_E          ,    STN_U          ,    STN_N2
 /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/ /*---------------*/
),
};

void matrix_init_user(void) {
	steno_set_mode(STENO_MODE_GEMINI);
}

bool process_mo(uint16_t mo, uint16_t tap, uint16_t keycode, keyrecord_t *record) {
    static bool mo_tap;
    static uint16_t mo_timer;
    if (record->event.pressed && (keycode != mo)) {
        mo_tap = false;
    }
    if (keycode == mo) {
        if (record->event.pressed) {
            mo_tap = true;
            mo_timer = timer_read();
        } else if (mo_tap && (timer_elapsed(mo_timer) < TAPPING_TERM)) {
            tap_code(tap);
        }
        return true;
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(process_mo(MO(MEDR), KC_ESC, keycode, record)) return true;
    if(process_mo(MO(NAVR), KC_SPC, keycode, record)) return true;
    if(process_mo(MO(MOUR), KC_TAB, keycode, record)) return true;
    if(process_mo(MO(NSSL), KC_ENT, keycode, record)) return true;
    if(process_mo(MO(NSL), KC_BSPC, keycode, record)) return true;
    if(process_mo(MO(FUNL), KC_DEL, keycode, record)) return true;
    switch(keycode) {
    case PLOVER:
        if (record->event.pressed) layer_on(STNO);
        return false; break;
    case EXT_PLV:
        if (record->event.pressed) layer_off(STNO);
        return false; break;
    case I_PRNO:
        if (record->event.pressed) SEND_STRING("(");
        break;
    case I_PRNC:
        if (record->event.pressed) SEND_STRING(")");
        break;
    case I_BRCO:
        if (record->event.pressed) SEND_STRING("[");
        break;
    case I_BRCC:
        if (record->event.pressed) SEND_STRING("]");
        break;
    case I_COLN:
        if (record->event.pressed) SEND_STRING(":");
        break;
    case I_SCLN:
        if (record->event.pressed) SEND_STRING(";");
        break;
    case I_EQL:
        if (record->event.pressed) SEND_STRING("=");
        break;
    case I_PLUS:
        if (record->event.pressed) SEND_STRING("+");
        break;
	}
	return true;
}

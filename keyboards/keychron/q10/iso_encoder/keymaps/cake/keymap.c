/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "keymap_german.h"

enum layers{
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_PROG,
    WIN_FN,
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* [MAC_BASE] = LAYOUT_92_iso( */
    /*     KC_MUTE,  KC_ESC,   KC_BRID,    KC_BRIU,  KC_MCTL,  KC_LPAD,  RM_VALD,   RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  KC_INS,   KC_DEL,   KC_MUTE, */
    /*     _______,  KC_GRV,   DE_1,       DE_2,     DE_3,     DE_4,     DE_5,      DE_6,     DE_7,     DE_8,     DE_9,     DE_0,     DE_SS,      DE_ACUT,  KC_BSPC,            KC_PGUP, */
    /*     _______,  KC_TAB,   DE_Q,       DE_W,     DE_E,     DE_R,     DE_T,      DE_Z,     DE_U,     DE_I,     DE_O,     DE_P,     DE_UDIA,    DE_PLUS,                      KC_PGDN, */
    /*     _______,  KC_CAPS,  DE_A,       DE_S,     DE_D,     DE_F,     DE_G,      DE_H,     DE_J,     DE_K,     DE_L,     DE_ODIA,  DE_ADIA,    DE_HASH,  KC_ENT,             KC_HOME, */
    /*     _______,  KC_LSFT,  DE_LABK,    DE_Y,     DE_X,     DE_C,     DE_V,      DE_B,     DE_N,     DE_M,     DE_COMM,  DE_DOT,   DE_MINS,              KC_RSFT,  KC_UP, */
    /*     _______,  KC_LCTL,  MO(MAC_FN), KC_LOPT,  KC_LCMD,            KC_SPC,                        KC_SPC,             KC_RCMD,  MO(MAC_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT), */

    /* [MAC_FN] = LAYOUT_92_iso( */
    /*     RM_TOGG,  _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   _______,  _______,  RM_TOGG, */
    /*     _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______, */
    /*     _______,  RM_TOGG,  RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SATU,  RM_SPDU,   _______,  _______,  _______,  _______,  _______,  _______,    _______,                      _______, */
    /*     _______,  _______,  RM_PREV,  RM_VALD,  RM_HUED,  RM_SATD,  RM_SPDD,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______, */
    /*     _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______, */
    /*     _______,  _______,  _______,  _______,  _______,            _______,                       _______,            _______,  _______,    _______,  _______,  _______,  _______), */

    [MAC_BASE] = LAYOUT_iso_90(
        KC_MUTE,  KC_ESC,   KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    RM_VALD,   RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_INS,             KC_DEL,
        _______,  KC_GRV,   DE_1,     DE_2,     DE_3,     DE_4,     DE_5,      DE_6,     DE_7,     DE_8,     DE_9,     DE_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        _______,  KC_TAB,   DE_Q,     DE_W,     DE_E,     DE_R,     DE_T,      DE_Z,     DE_U,     DE_I,     DE_O,     DE_P,     KC_LBRC,  KC_RBRC,                      KC_PGDN,
        _______,  KC_CAPS,  DE_A,     DE_S,     DE_D,     DE_F,     DE_G,      DE_H,     DE_J,     DE_K,     DE_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,             KC_HOME,
        _______,  KC_LSFT,  DE_LABK,  DE_Y,     DE_X,     DE_C,     DE_V,      DE_B,     DE_B,     DE_N,     DE_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,
        _______,  KC_LCTL,  KC_LOPT,            KC_LCMD,  KC_SPC,  MO(MAC_FN),                     KC_SPC,             KC_RCMD,                      KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_iso_90(
        RM_TOGG,  _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  RM_TOGG,  RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SATU,  RM_SPDU,   _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
        _______,  _______,  RM_PREV,  RM_VALD,  RM_HUED,  RM_SATD,  RM_SPDD,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,            _______,  _______,  _______,                       _______,            _______,                      _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_iso_90(
        KC_MUTE,  KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_INS,             KC_DEL,
        _______,  KC_GRV,   DE_1,     DE_2,     DE_3,     DE_4,     DE_5,      DE_6,     DE_7,     DE_8,     DE_9,     DE_0,     DE_SS,    DE_ACUT,  KC_BSPC,            KC_PGUP,
        _______,  KC_TAB,   DE_Q,     DE_W,     DE_E,     DE_R,     DE_T,      DE_Z,     DE_U,     DE_I,     DE_O,     DE_P,     DE_UDIA,  DE_PLUS,                      KC_PGDN,
        _______,  KC_CAPS,  DE_A,     DE_S,     DE_D,     DE_F,     DE_G,      DE_H,     DE_J,     DE_K,     DE_L,     DE_ODIA,  DE_ADIA,  DE_HASH,  KC_ENT,             KC_HOME,
        _______,  KC_LSFT,  DE_LABK,  DE_Y,     DE_X,     DE_C,     DE_V,      DE_B,     DE_B,     DE_N,     DE_M,     DE_COMM,  DE_DOT,   DE_MINS,  KC_RSFT,  KC_UP,
        _______,  KC_LCTL,  KC_LWIN,            KC_LALT,  KC_SPC,  MO(WIN_FN),                     KC_SPC,             KC_RALT,                      KC_LEFT,  KC_DOWN,  KC_RGHT),


    [WIN_PROG] = LAYOUT_iso_90(
        KC_MUTE,  KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,      KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_INS,             KC_DEL,
        _______,  KC_GRV,   DE_1,     DE_2,     DE_3,     DE_4,     DE_5,       DE_6,     DE_7,     DE_8,     DE_9,     DE_0,     DE_SS,    DE_ACUT,  KC_BSPC,            KC_PGUP,
        _______,  KC_TAB,   DE_Q,     DE_W,     DE_E,     DE_R,     DE_T,       DE_Z,     DE_U,     DE_I,     DE_O,     DE_P,     DE_BSLS,  DE_PLUS,                      KC_PGDN,
        _______,  KC_CAPS,  DE_A,     DE_S,     DE_D,     DE_F,     DE_G,       DE_H,     DE_J,     DE_K,     DE_L,     DE_LBRC,  DE_RBRC,  DE_HASH,  KC_ENT,             KC_HOME,
        _______,  KC_LSFT,  DE_LABK,  DE_Y,     DE_X,     DE_C,     DE_V,       DE_B,     DE_B,     DE_N,     DE_M,     DE_COMM,  DE_DOT,   DE_MINS,  KC_RSFT,  KC_UP,
        _______,  KC_LCTL,  KC_LWIN,            KC_LALT,  KC_SPC,   MO(WIN_FN),                     KC_SPC,             KC_RALT,                      KC_LEFT,  KC_DOWN,  KC_RGHT),


    [WIN_FN] = LAYOUT_iso_90(
        RM_TOGG,  _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RM_VALD,   RM_VALU,  KC_MPRV,       KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,   KC_VOLU,  KC_PRINT_SCREEN,            _______,
        RM_TOGG,  _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RM_VALD,   RM_VALU,  KC_MPRV,       KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,   KC_VOLU,  _______,                    _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,       _______,  _______,  _______,  _______,   _______,  _______,                    _______,
        _______,  RM_TOGG,  RM_NEXT,  RM_VALU,  RM_HUEU,  RM_SATU,  RM_SPDU,   _______,  _______,       _______,  _______,  _______,  DE_UDIA,   _______,                              _______,
        _______,  _______,  RM_PREV,   RM_VALD,  RM_HUED,  RM_SATD,  RM_SPDD,  _______,  TG(WIN_PROG),  _______,  _______,  DE_ODIA,  DE_ADIA,   _______,  _______,                    _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,       NK_TOGG,  _______,  _______,  _______,   _______,  _______,           _______,
        _______,  _______,  _______,            _______,  _______,  _______,                            _______,            _______,                       _______,           _______, _______),

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [MAC_FN]   = { ENCODER_CCW_CW(RM_VALD, RM_VALU) },
    [WIN_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_PROG] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_FN]   = { ENCODER_CCW_CW(RM_VALD, RM_VALU) },
};


const key_override_t left_bracket_override = ko_make_basic(MOD_MASK_SHIFT, DE_LBRC, DE_LCBR);
const key_override_t right_bracket_override = ko_make_basic(MOD_MASK_SHIFT, DE_RBRC, DE_RCBR);
const key_override_t bsls_override = ko_make_basic(MOD_MASK_SHIFT, DE_BSLS, DE_DLR);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
	&left_bracket_override,
    &right_bracket_override,
    &bsls_override
};

#endif // ENCODER_MAP_ENABLE

/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include "keycodes.h"
#include QMK_KEYBOARD_H

#include "keydefs.c"
#include "keymap_spanish_latam.h"

// TODO Maybe remove this?
#define DNC_D(kc1,kc2) ACTION_TAP_DANCE_DOUBLE(kc1, kc2)

#define P_ESC  LT(_CONFIG,KC_ESC)
#define P_CAPS LSFT_T(KC_CAPS)
#define P_ACUT LSFT_T(ES_ACUT)
#define P_LSPC LT(_LOL2,KC_SPC)
#define P_LY   LSFT_T(KC_Y)
#define P_LBSP LT(_NUM,KC_BSPC)
#define P_LBS2 LT(_NAV,KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x6_3(
  //╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮                    ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮
        KC_LGUI,     ES_Q,     ES_W,     ES_E,     ES_R,     ES_T,                           ES_Y,     ES_U,     ES_I,     ES_O,     ES_P,    P_ESC,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
         KC_TAB,     ES_A,     ES_S,     ES_D,     ES_F,     ES_G,                           ES_H,     ES_J,     ES_K,     ES_L,  ES_NTIL,   P_ACUT,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
         P_CAPS,     ES_Z,     ES_X,     ES_C,     ES_V,     ES_B,                           ES_N,     ES_M,  ES_COMM,   ES_DOT,  ES_MINS,  KC_BSPC,
  //╰━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━╮  ╭━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╯
                                                KC_LCTL, MO(_SYM),  KC_SPC,     KC_ENT,    P_LBSP,  KC_LALT
                                        //   ╰─━━━━━━━━┻━━━━━━━━━┻━━━━━━━━╯  ╰━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━╯
  ),

    [_DVORAK] = LAYOUT_split_3x6_3(
  //╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮                    ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮
        KC_LGUI,  ES_COMM,   ES_DOT,  ES_NTIL,     ES_P,     ES_Y,                           ES_F,     ES_G,     ES_C,     ES_R,     ES_L,    P_ESC,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
         KC_TAB,     ES_A,     ES_O,     ES_E,     ES_U,     ES_I,                           ES_D,     ES_H,     ES_T,     ES_N,     ES_S,   P_ACUT,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
         P_CAPS,  ES_SCLN,     ES_Q,     ES_J,     ES_K,     ES_X,                           ES_B,     ES_M,     ES_W,     ES_V,     ES_Z,  KC_BSPC,
  //╰━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━╮  ╭━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╯
                                                KC_LCTL, MO(_SYM),  KC_SPC,     KC_ENT,    P_LBSP,  KC_LALT
                                      //     ╰─━━━━━━━━┻━━━━━━━━━┻━━━━━━━━╯  ╰━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━╯
  ),

    [_SYM] = LAYOUT_split_3x6_3(
  //╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮                    ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮
        XXXXXXX,    ES_AT,  ES_AMPR,  ES_DQUO,  ES_QUOT,  ES_UNDS,                          KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,  XXXXXXX,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
        XXXXXXX,  ES_LABK,  ES_RABK,  ES_PIPE,  ES_SLSH,  ES_BSLS,                          KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,  ES_DIAE,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
        XXXXXXX,  ES_COLN,  ES_PLUS,  ES_MINS,   ES_EQL,  ES_TILD,                         KC_F11,   KC_F12,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_BSPC,
  //╰━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━╮  ╭━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╯
                                                KC_LCTL,  _______,  KC_SPC,     KC_ENT,    P_LBS2,  KC_LALT
                                      //`--------------------------'  `--------------------------'
  ),

  [_NUM] = LAYOUT_split_3x6_3(
  //╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮                    ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮
         ES_NOT,   ES_DLR,  ES_PERC,  ES_LBRC,  ES_RBRC,  ES_MORD,                        ES_SLSH,     ES_7,     ES_8,     ES_9,  ES_MINS,  XXXXXXX,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
         ES_GRV,  ES_EXLM,  ES_QUES,  ES_LPRN,  ES_LCBR,  ES_ASTR,                        ES_ASTR,     ES_4,     ES_5,     ES_6,  ES_PLUS,  ES_CIRC,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
        XXXXXXX,  ES_IEXL,  ES_IQUE,  ES_RPRN,  ES_RCBR,  ES_HASH,                           ES_0,     ES_1,     ES_2,     ES_3,   ES_DOT,  KC_BSPC,
  //╰━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━╮  ╭━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╯
                                                KC_LCTL, MO(_NAV),  KC_SPC,     KC_ENT,   _______,  KC_LALT
                                      //`--------------------------'  `--------------------------'
  ),

  [_NAV] = LAYOUT_split_3x6_3(
  //╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮                    ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮
        XXXXXXX,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_PSCR,  KC_BRIU,                        XXXXXXX,  KC_PGUP,    KC_UP,  KC_PGDN,  XXXXXXX,    P_ESC,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
        KC_STOP,  KC_MPRV,  KC_MPLY,  KC_MNXT,   KC_DEL,  KC_BRID,                        KC_HOME,  KC_LEFT,  KC_DOWN, KC_RIGHT,   KC_END,  XXXXXXX,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
        KC_LSFT,  XXXXXXX,  KC_LCTL,  XXXXXXX,  KC_LALT,  XXXXXXX,                        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______,  XXXXXXX,     XXXXXXX, _______, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    [_PLAY] = LAYOUT_split_3x6_3(
  //╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮                    ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮
        KC_LGUI,     ES_Q,     ES_W,     ES_E,     ES_R,     ES_T,                        XXXXXXX,  XXXXXXX,    KC_UP,  XXXXXXX,  XXXXXXX,    P_ESC,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
         KC_TAB,     ES_A,     ES_S,     ES_D,     ES_F,     ES_G,                           ES_H,  KC_LEFT,  KC_DOWN, KC_RIGHT,  XXXXXXX,  XXXXXXX,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
        KC_LSFT,     ES_Z,     ES_X,     ES_C,     ES_V,     ES_B,                        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //╰━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━╮  ╭━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╯
                                                KC_LCTL,  XXXXXXX,  KC_SPC,     KC_ENT,   XXXXXXX,  KC_LALT
                                      //`--------------------------'  `--------------------------'
  ),

    [_LOL] = LAYOUT_split_3x6_3(
  //╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮                    ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮
        KC_LGUI,     ES_1,     ES_2,     ES_3,     ES_4,     ES_5,                        XXXXXXX,  XXXXXXX,    KC_UP,  XXXXXXX,  XXXXXXX,    P_ESC,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
         KC_TAB,     ES_Q,     ES_W,     ES_E,     ES_R,     ES_T,                           ES_H,  KC_LEFT,  KC_DOWN, KC_RIGHT,  XXXXXXX,  XXXXXXX,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
        KC_LALT,     ES_A,     ES_S,     ES_D,     ES_F,     ES_G,                        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //╰━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━╮  ╭━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╯
                                                KC_LCTL,  KC_LSFT,  P_LSPC,     KC_ENT,   XXXXXXX,  KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [_LOL2] = LAYOUT_split_3x6_3(
  //╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮                    ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮
        KC_LGUI,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                        XXXXXXX,  XXXXXXX,    KC_UP,  XXXXXXX,  XXXXXXX,    P_ESC,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
         KC_TAB,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                           ES_H,  KC_LEFT,  KC_DOWN, KC_RIGHT,  XXXXXXX,  XXXXXXX,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
        KC_LALT,     ES_Z,     ES_X,     ES_C,     ES_V,     ES_B,                        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //╰━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━╮  ╭━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╯
                                                KC_LCTL,     P_LY, _______,     KC_ENT,   XXXXXXX,  KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [_CONFIG] = LAYOUT_split_3x6_3(
  //╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━╮                    ╭━━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━┳━━━━━━━━━╮
        QK_BOOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  DF(_PLAY), DF(_LOL),                        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
        RGB_TOG,  RGB_HUI,  RGB_SAI,  RGB_VAI,DF(_QWERTY),  XXXXXXX,                        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  // ━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━┫                    ┣━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━━┫
        RGB_MOD,  RGB_HUD,  RGB_SAD,  RGB_VAD,DF(_DVORAK),  XXXXXXX,                        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //╰━━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━━━╋━━━━━━━━━╋━━━━━━━━╮  ╭━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━┻━━━━━━━━━╯
                                                  KC_LGUI,  _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

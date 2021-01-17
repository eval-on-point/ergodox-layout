#include QMK_KEYBOARD_H

#define TAPPING_TOGGLE 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* base layer */
[0] = LAYOUT_ergodox(
 KC_GRV               ,KC_EXLM ,KC_HASH ,KC_0  ,KC_CIRC     ,KC_PERC ,KC_PLUS
,KC_TAB               ,KC_Q    ,KC_W    ,KC_E  ,KC_R        ,KC_T    ,KC_LPRN
,KC_LCTL              ,KC_A    ,KC_S    ,KC_D  ,KC_F        ,KC_G
,LGUI_T(OSM(KC_LGUI)) ,KC_Z    ,KC_X    ,KC_C  ,KC_V        ,KC_SLSH ,KC_LBRC
,TT(2)                ,TG(4)   ,KC_NO   ,KC_NO ,TT(3)

                                                    ,C(KC_C)       ,C(KC_V)
                                                                   ,S(KC_INS)
                                      ,LT(1,KC_SPC) ,ALT_T(KC_ENT) ,KC_ESC

,KC_MINS ,KC_AMPR ,KC_DLR ,KC_DQT ,KC_AT   ,KC_ASTR ,KC_EQL
,KC_RPRN ,KC_Y    ,KC_U   ,KC_I   ,KC_O    ,KC_P    ,KC_BSLS
         ,KC_H    ,KC_J   ,KC_K   ,KC_L    ,KC_SCLN ,RCTL_T(KC_QUOT)
,KC_RBRC ,KC_B    ,KC_N   ,KC_M   ,KC_COMM ,KC_NO   ,LGUI_T(OSM(KC_LGUI))
         ,TT(3)   ,KC_NO  ,KC_NO   ,KC_NO   ,TT(2)

    ,A(KC_X)    ,A(KC_COLN)
    ,A(KC_EXLM)
    ,KC_DEL     ,ALT_T(KC_DOT) ,LT(1,KC_BSPC)
),

/* shift layer */
[1] = LAYOUT_ergodox(
 S(KC_GRV) ,KC_7    ,KC_5    ,KC_3    ,KC_1    ,KC_9       ,KC_EQL
,KC_TRNS   ,S(KC_Q) ,S(KC_W) ,S(KC_E) ,S(KC_R) ,S(KC_T)    ,KC_LT
,KC_TRNS   ,S(KC_A) ,S(KC_S) ,S(KC_D) ,S(KC_F) ,S(KC_G)
,KC_TRNS   ,S(KC_Z) ,S(KC_X) ,S(KC_C) ,S(KC_V) ,S(KC_SLSH) ,S(KC_LBRC)
,KC_TRNS   ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS

                                               ,S(C(KC_C)) ,S(C(KC_V))
                                                           ,KC_TRNS
                                      ,KC_TRNS ,KC_TRNS    ,S(KC_ESC)

,S(KC_MINS) ,KC_0    ,KC_2    ,KC_4    ,KC_6    ,KC_8       ,KC_TRNS
,KC_GT      ,S(KC_Y) ,S(KC_U) ,S(KC_I) ,S(KC_O) ,S(KC_P)    ,S(KC_BSLS)
            ,S(KC_H) ,S(KC_J) ,S(KC_K) ,S(KC_L) ,S(KC_SCLN) ,KC_QUOT
,S(KC_RBRC) ,S(KC_B) ,S(KC_N) ,S(KC_M) ,KC_TRNS ,KC_TRNS    ,KC_TRNS
                     ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS    ,KC_TRNS

,KC_TRNS ,KC_TRNS
,KC_TRNS
,KC_TRNS ,KC_TRNS, KC_TRNS
),

/* function keys and arrows */
[2] = LAYOUT_ergodox(
 RESET   ,KC_F7   ,KC_F5   ,KC_F3   ,KC_F1   ,KC_F9   ,LGUI(KC_L)
,KC_TRNS ,KC_TRNS ,KC_HOME ,KC_UP   ,KC_END  ,KC_TRNS ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_LEFT ,KC_DOWN ,KC_RGHT ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS

                                             ,KC_TRNS ,KC_TRNS
                                                      ,KC_TRNS
                                    ,KC_ENT  ,KC_TRNS ,KC_TRNS

,KC_F12  ,KC_F10  ,KC_F2   ,KC_F4   ,KC_F6    ,KC_F8   ,KC_NO
,KC_TRNS ,KC_TRNS ,KC_HOME ,KC_TRNS ,KC_END   ,KC_TRNS ,KC_TRNS
         ,KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RIGHT ,KC_TRNS ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS  ,KC_TRNS ,KC_TRNS
                  ,KC_TRNS ,KC_TRNS ,KC_TRNS  ,KC_TRNS ,KC_TRNS

,KC_TRNS ,KC_TRNS
,KC_TRNS
,KC_TRNS ,KC_PGUP ,KC_PGDN
),

/* numpad */
[3] = LAYOUT_ergodox(
 KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
,KC_F11  ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,KC_TRNS
,KC_TRNS ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS

                                             ,KC_TRNS ,KC_TRNS
                                                      ,KC_TRNS
                                    ,KC_TRNS ,KC_TRNS ,KC_TRNS

,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
,KC_TRNS ,KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F12
         ,KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
                  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS

,KC_TRNS ,KC_TRNS
,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS
),

[4] = LAYOUT_ergodox(
 KC_TRNS ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,KC_6
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
,KC_LSFT ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_LGUI ,KC_LSFT

,KC_TRNS ,KC_TRNS
,KC_TRNS
,KC_SPC  ,KC_LALT ,KC_TRNS

,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS

,KC_TRNS ,KC_TRNS
,KC_TRNS
,KC_TRNS ,KC_TRNS, KC_TRNS
),

};

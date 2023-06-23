#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_ESC,                                                                                             KC_TAB,
    KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,
    LGUI_T(KC_A),    LALT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    RALT_T(KC_G),    RALT_T(KC_H),    LSFT_T(KC_J),    LCTL_T(KC_K),    LALT_T(KC_L),    LGUI_T(KC_QUOT),
    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,               KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,
    KC_LSFT,  KC_LALT,            LT(2,KC_ENT),  KC_SPC,  LT(1,KC_SPC),  KC_BSPC,             KC_RALT,  KC_RSFT,
                                //click ,   right  , down   ,   left  ,   up
                                  KC_MUTE,  KC_VOLU, KC_PGDN,   KC_VOLD,  KC_PGUP
  ),
  
  [_LOWER] = LAYOUT(
    CK_TOGG,                                                                                            _______,
    _______,  KC_7,    KC_8,    KC_9,  _______,            _______,  _______,  _______,  _______,  _______,
    _______,  KC_4,    KC_5,    KC_6,  _______,            _______,  _______,  _______,  _______,  _______,
    _______,  KC_1,    KC_2,    KC_3,  KC_ESC,            _______,  _______,  _______,  _______,  _______,
    _______,  _______,            KC_0,  _______,            _______,  KC_DEL,            _______,  _______,
                                //click ,   right  , down   ,   left  ,   up
                                  _______,  _______, _______,   _______,  _______
  ),
  
  [_RAISE] = LAYOUT(
    _______,                                                                                            _______,
    _______,  _______,  _______,  _______,  _______,            _______,  _______,  KC_UP,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,            _______,  KC_LEFT,   KC_DOWN,   KC_RIGHT,  _______,
    _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,
    _______,  _______,            _______,  _______,            CK_TOGG,  _______,            _______,  _______,
                                //click ,   right  , down   ,   left  ,   up
                                  _______,  _______, _______,   _______,  _______
  ),
  
  [_ADJUST] = LAYOUT(
    _______,                                                                                            _______,
    _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,
    _______,  _______,            _______,  _______,            _______,  _______,            _______,  _______,
                                //click ,   right  , down   ,   left  ,   up
                                  _______,  _______, _______,   _______,  _______
  ),
};

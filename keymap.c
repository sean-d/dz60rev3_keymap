#include QMK_KEYBOARD_H
#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Qwerty
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * |  MO(1) |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSh |  U  | Del |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl | GUI |  Cmd  |              Space                | MO(1) | NULL |  L  |  D  |  R  |
   * `-----------------------------------------------------------------------------------------'
   */
  LAYOUT_directional(
      KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, ______, KC_BSPC,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
      KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT,         KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
      KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, MO(1), _______, KC_LEFT, KC_DOWN, KC_RIGHT
      ),
  /* FN Layer
   * ,-----------------------------------------------------------------------------------------.
   * |  `  |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |    DEL    |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     |     |     |     |     |     |     |     |     |      |     | RESET |
   * |-----------------------------------------------------------------------------------------+
   * |         |     |     |     |     |     |     |     |     |     |     |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |     |     |     |     |    | Vol+ |     |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |               ~                   |     |  PrnScr |   | Vol- |Mute |
   * `-----------------------------------------------------------------------------------------'
   */
  LAYOUT_directional(
      KC_GRV, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_F11, KC_F12, KC_TRNS, KC_DEL,
      ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, QK_BOOT,
      ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
      ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, KC_VOLU, ______,
      ______, ______, ______, KC_TILD, KC_TILD, KC_TILD, ______, KC_PSCR, ______, KC_VOLD, KC_MUTE
      ),
};

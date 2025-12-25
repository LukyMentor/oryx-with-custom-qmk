#include QMK_KEYBOARD_H

enum custom_layers { _BASE };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_moonlander(
    /* Left hand */
    KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,
    /* Right hand (just one key to test) */
            U_0160,   KC_NO,    KC_NO,    KC_NO,    KC_NO
  )
};

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;


// abbreviated modifier + keys

// Switch between open windows on mac OS
// Sends key combo CMD+`
#define ABT A(KC_GRV)

// ALT+Left Arrow/Right Arrow
// OPT+Left Arrow/Right Arrow in mac OS
#define ALA A(KC_LEFT)
#define ARA A(KC_RIGHT)

// Hotkeys to select text from the current cursor position to the beginning or end of the current line
// SHIFT+ALT Left Arrow/Right Arrow
// SHIFT+OPT Left Arrow/Right Arrow in mac OS
#define SALA S(A(KC_LEFT))  // select from current cursor position to beginning of current line
#define SARA S(A(KC_RIGHT)) // select from current cursor position to end of current line

// Hotkeys to move forward and backward through open browser tabs
// CTRL+TAB/CTRL+SHIFT+TAB
// CMD+TAB/CMD+SHIFT+TAB is mac OS
#define CT C(KC_TAB)      // switch to next tab
#define CST S(C(KC_TAB))  // switch to previous tab

// Switch between open app windows in mac os
// Simulates pressing CMD+~
#define CMT A(KC_TILD)

// FN+WASD for Arrows
#define FNUP KC_UP
#define FNDN KC_DOWN
#define FNLA KC_LEFT
#define FNRA KC_RIGHT

// Abbreviate ESC, ENTER, SEMICOLON keys to keep grid uniform
#define ES KC_ESC
#define ET KC_ENT
#define ENTR KC_ENT
#define SC KC_SCLN

// Media keys
#define VOLU KC__VOLUP
#define VOLD KC__VOLDOWN
#define MUTE KC__MUTE 

// Clipboard keys
// Map to CMD+X/C/V on macOS when the modifiers
// are mapped to CTRL, OPTION, CMD so CMD acts as "ALT"
#define CUT A(KC_X)
#define COPY A(KC_C)
#define PAST A(KC_V)

// Shifted number row
#define S1 S(KC_1) // !
#define S2 S(KC_2) // @
#define S3 S(KC_3) // #
#define S4 S(KC_4) // #
#define S5 S(KC_5) // $
#define S6 S(KC_6) // ^
#define S7 S(KC_7) // &
#define S8 S(KC_8) // *
#define S9 S(KC_9) // (
#define S0 S(KC_0) // )

// Brackets, symbols often used when coding
#define LSB KC_LBRC // [ left square bracket
#define RSB KC_RBRC // ] right square bracket
#define LCB S(KC_LBRC) // { left curly brace
#define RCB S(KC_RBRC) // } right curly brace
#define LPT S(KC_9) // ( left parentheses
#define RPT S(KC_0) // ) right parentheses






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_arrow( /* Qwerty */
    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,      KC_O,    KC_P,    KC_BSPC,
    LT(1, ES), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,      KC_L,    KC_QUOT, ENTR,
    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,   KC_DOT,  KC_UP,   KC_SLSH,
    KC_LCTL,   KC_LGUI, KC_LALT, LT(2, KC_SPC),             MO(3),            LT(4, SC), KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  [1] = LAYOUT_arrow( /* Navigation */
    ABT,       ALA,     FNUP,    ARA,     KC_HOME, KC_PGUP, VOLU,    LCB,     RCB,       KC_UNDS, KC_PLUS, KC_DEL,
    KC_TRNS,   FNLA,    FNDN,    FNRA,    KC_END,  KC_PGDN, VOLD,    LSB,     RSB,       KC_MINS, KC_EQL,  KC_SCLN,
    KC_TRNS,   SALA,    SARA,    COPY,    PAST,    CUT,     MUTE,    LPT,     RPT,       KC_LT,   KC_GT,   KC_BSLS,
    KC_TRNS,   KC_TRNS, CST,     CT,                        CMT,              KC_TRNS,   KC_TILD, KC_GRV,  KC_PIPE
  ),
  [2] = LAYOUT_arrow( /* Numbers row, shifted symbols and F-keys F1 thru F12 */
    KC_TILD,   S1,      S2,      S3,      S4,      S5,      S6,      S7,      S8,        S9,      S0,      KC_DEL,
    KC_TRNS,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,      KC_9,    KC_0,    KC_MINS,
    KC_F12,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,     KC_F9,   KC_F10,  KC_F11,
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,                   ENTR,             KC_DOT,    KC_SLSH, KC_MINS, KC_PLUS
  ),
  [3] = LAYOUT_arrow( /* Numpad for nav + Mouse */
    CT,        KC_HOME, FNUP,    KC_PGUP, KC_TRNS, KC_ACL0, KC_BTN2, KC_WH_L, KC_MS_U,   KC_WH_R, KC_UNDS, KC_PLUS,
    CST,       FNLA,    FNRA,    FNRA,    KC_TRNS, KC_ACL1, KC_BTN1, KC_MS_L, KC_MS_D,   KC_MS_R, KC_MINS, KC_EQL,
    KC_TRNS,   KC_END,  FNDN,    KC_PGDN, KC_TRNS, KC_ACL2, KC_BTN3, KC_TRNS, KC_TRNS,   KC_TRNS, KC_WH_U, KC_TRNS,
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,          KC_TRNS,   KC_TRNS, KC_WH_D, KC_TRNS
  ),
  [4] = LAYOUT_arrow( /* Numpad, RESET */
    KC_NLCK,   KC_P7,   KC_P8,   KC_P9,   KC_MINS, KC_PSLS, KC_TRNS, KC_TRNS, KC_INS,    KC_PAUS, KC_PSCR, KC_TRNS,
    KC_TRNS,   KC_P4,   KC_P5,   KC_P6,   KC_PLUS, KC_PAST, KC_TRNS, KC_TRNS, KC_TRNS,   KC_SLCK, KC_TRNS, KC_TRNS,
    KC_TRNS,   KC_P1,   KC_P2,   KC_P3,   ENTR,    KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,   KC_TRNS, KC_P0,   KC_PDOT,                   KC_TRNS,          KC_TRNS,   KC_TRNS, KC_TRNS, RESET
  )
};

void keyboard_post_init_user(void) {
  #ifdef RGBLIGHT_ENABLE
    // Set up RGB effects on _only_ the third LED (index 2)
    rgblight_set_effect_range(2, 1);
    // Set LED effects to breathing mode in a tealish blue color
    rgblight_sethsv_noeeprom(185, 255, 1);
    rgblight_disable();
    //rgblight_mode_noeeprom(RGBLIGHT_EFFECT_BREATHING + 2);

    // Init the first two LEDs to a static color              
    setrgb(0, 0, 0, (LED_TYPE *)&led[0]);
    setrgb(0, 0, 0, (LED_TYPE *)&led[1]);
    rgblight_set();
  #endif //RGBLIGHT_ENABLE
}

uint32_t layer_state_set_user(uint32_t state){
  #ifdef RGBLIGHT_ENABLE
    uint8_t led0r = 0; uint8_t led0g = 0; uint8_t led0b = 0;
    uint8_t led1r = 0; uint8_t led1g = 0; uint8_t led1b = 0;

    if (layer_state_cmp(state, 1)) {
      led0r = 50;
    }
    if (layer_state_cmp(state, 2)) {
      led0g = 50; 
    }
    if (layer_state_cmp(state, 3)) {
      led1b = 50;
    }
    if (layer_state_cmp(state, 4)) {
      led1b = 50;
      led1r = 50;
    }

    setrgb(led0r, led0g, led0b, (LED_TYPE *)&led[0]);
    setrgb(led1r, led1g, led1b, (LED_TYPE *)&led[1]);
    rgblight_set();
  #endif //RGBLIGHT_ENABLE
  return state;
}

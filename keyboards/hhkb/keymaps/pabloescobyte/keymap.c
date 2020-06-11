/*  -*-  eval: (turn-on-orgtbl); -*-
 * default HHKB Layout
 */
#include QMK_KEYBOARD_H

/* This layout mimics a 40% keyboard as much as possible to reduce the amount of
 * hand and finger movement from home row. 
*/

#define BASE 0
#define L1 1  // Navigation: arrow cluster, PgUp/PgDn/Home/End, text selection shortcuts
#define L2 2  // Numerals, shifted symbols; SPACEBAR is a Mod-Tap so holding down toggles layer 2, tap outputs space
#define L3 3  // Dedicated arrow cluster on WASD; Mouse control on PL;' (up,left,down,right), left+right buttons on K and comma (,)
#define L4 4  // Mirror of base layer but w/ SPACEBAR not acting as a tap-mod; can be activated by tapping RCTRL 3 times
#define L5 5  // Mirror of L1 but with F-key row on numerals instead

/* Here we define some shortcuts to make reading and programming the layout much easier.
 * I work in mac OS primarily but often use the keyboard in Windows and Linux as well so I have my modifiers set accordingly:
 * In the System Preferences pane of mac OS I have the modifiers set the following way:
 * LCTRL = OPTION, LALT = COMMAND, RALT = CONTROL
 * RCTRL is not used as a modifier as I have set to go to Layer 4 which is a special 'default' base layer--more on this later
*/

// Control Tab and Control Shift Tab

#define CST KC_LSFT(KC_LGUI(KC_TAB)) // CONTROL+Shift+Tab
#define CT KC_LGUI(KC_TAB) // CONTROL+Tab


#define CST KC_LSFT(KC_LGUI(KC_TAB)) // CONTROL+Shift+Tab
#define CST KC_LSFT(KC_LGUI(KC_TAB)) // CONTROL+Shift+Tab
#define CST KC_LSFT(KC_LGUI(KC_TAB)) // CONTROL+Shift+Tab



#define TAPPING_TOGGLE 3 // set layer tap-toggle to 3 presses

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* BASE Level: Default Layer
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Esc   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | -     | =   | \     | ` |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Tab   | Q | W | E | R | T | Y | U | I | O | P | [     | ]   | BKSP  |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | L1    | A | S | D | F | G | H | J | K | L | ; | '     | Ent |       |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Shift | Z | X | C | V | B | N | M | , | . | / | L3    | Del |       |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|

            |------+------+-----------------------+------+------|
            | LCtr | LAlt | *****  L2/Space ***** | LGUI | L4   |
            |------+------+-----------------------+------+------|
    */

    [BASE] = LAYOUT( //  default layer
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
        MO(L1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, TG(L3), KC_DEL,
        KC_LCTL, KC_LALT, /*        */ MT(MO(L2), KC_SPC), KC_LGUI, KC_RALT),

    /* Layer HHKB: HHKB mode (HHKB Fn)
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      | Pwr  | F1  | F2  | F3  | F4 | F5 | F6 | F7 | F8  | F9  | F10 | F11 | F12   | Ins   | Del |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      | Caps |     |     |     |    |    |    |    | Psc | Slk | Pus | Up  |       | Backs |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      | VoD | VoU | Mut |    |    | *  | /  | Hom | PgU | Lef | Rig | Enter |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    | +  | -  | End | PgD | Dow |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|

                 |------+------+----------------------+------+------+
                 | **** | **** | ******************** | **** | **** |
                 |------+------+----------------------+------+------+

     */

    [HHKB] = LAYOUT(
        KC_PWR, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL,
        KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP, KC_TRNS, KC_BSPC,
        KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_PENT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PPLS, KC_PMNS, KC_END, KC_PGDN, KC_DOWN, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)};

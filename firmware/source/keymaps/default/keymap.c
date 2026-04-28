#include QMK_KEYBOARD_H

// Layer names
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* ──────────── Layer 0: QWERTY ──────────── */
    [_BASE] = LAYOUT_75_ansi(
        // Row 0 (14)
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        // Row 1 (15)
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,
        // Row 2 (15)
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME,
        // Row 3 (14)
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_PGUP,
        // Row 4 (13)
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        // Row 5 ( 9) ← exactly your PCB’s defined positions
        KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,                   KC_RALT, KC_RGUI, MO(_FN), KC_TRNS, KC_TRNS
    ),

    /* ──────────── Layer 1: Fn/Arrows ──────────── */
    [_FN] = LAYOUT_75_ansi(
        // Row 0
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 1
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 2
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 3
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 4
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 5
        _______, _______, _______,          _______,                   _______, _______, _______, KC_LEFT, KC_RGHT
    )
};


#include QMK_KEYBOARD_H
#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_UP,   KC_DOWN, KC_RGHT, KC_LEFT, KC_A,    KC_B,    KC_C,    KC_D,
        KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,
        KC_M,    KC_N,    KC_O,    KC_P,    KC_Q,    KC_R,    KC_SPC
    ),
    [1] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

// 螢幕顯示邏輯（固定顯示 0~8）
#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_P(PSTR("KBHX-01\n"), false);
    
    char layer_buf[16];
    snprintf(layer_buf, sizeof(layer_buf), "LAYER: %d\n", get_highest_layer(layer_state));
    oled_write(layer_buf, false);

    return false;
}
#endif

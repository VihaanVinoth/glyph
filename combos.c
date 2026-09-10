#include QMK_KEYBOARD_H

const uint16_t PROGMEM number_bar_combo[] = {STN_S1, STN_S2, COMBO_END};
const uint16_t PROGMEM enter_combo[] = {STN_E, STN_U, COMBO_END}

combo key_combos[] = {
    COMBO(number_bar_combo, MO(_NAV)),
    COMBO(enter_combo, KC_ENT)
};
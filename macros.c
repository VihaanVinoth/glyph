#include QMK_KEYBOARD_H

enum custom_keycodes {
    GIT_COMMIT_BOILERPLATE = SAFE_RANGE,
    HTML_BOILERPLATE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GIT_COMMIT_BOILERPLATE:
            if (record->event.pressed) {
                SEND_STRING("git add . && git commit -m \"feat: update steno firmware\"\n");
            }
            return false;
        case HTML_BOILERPLATE:
            if (record->event.pressed) {
                SEND_STRING("<DOCTYPE html>\n<html lang=\"en\">\n<head>\n<meta charset=\"UTF-8\">\n<title>Document</title>\n</head>\n<body>\n\n</body>\n</html>");
            }
            return false;
        default:
            return true;
    }
}
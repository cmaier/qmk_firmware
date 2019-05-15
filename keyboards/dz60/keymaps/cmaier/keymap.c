#include QMK_KEYBOARD_H

enum dz60_layers {
  _BS, // Base layer
  _FN, // Function layer
  _MC, // macOS layer
  _IJ, // IntelliJ (Android Studio)
  _GM, // Gaming
  _FN2, // Function layer
  _MS, // Windows
  _KB // Keyboard layer
};

enum my_keycodes {
  BR_UP = SAFE_RANGE,
  BR_DOWN
};

// Define Macros
#define M_MCRTL  M(0) // macOS: Mission Control
#define M_AWNDS  M(1) // macOS: App Windows
#define M_SWTCH  M(2) // macOS: Switch App Windows
#define M_ITERM  M(3) // macOS: Remap for iTerm2 Hotkey
#define M_ADBGR  M(100) // IntelliJ: Attach debugger
#define M_RNAME  M(101) // IntelliJ: Refactor Rename
#define M_USAGE  M(102) // IntelliJ: Usage
#define M_RVARB  M(103) // IntelliJ: Refactor Variable
#define M_RPROP  M(104) // IntelliJ: Refactor Property
#define M_RFUNC  M(105) // IntelliJ: Refactor Function
#define M_RTYAL  M(106) // IntelliJ: Refactor Type Alias


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BS] = LAYOUT_all(
        KC_GESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_NO,KC_BSPC,
        KC_TAB,       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,     KC_BSLASH,
        MO(_IJ),        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,            KC_ENTER,
        KC_LSFT,    KC_NO,KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_NO,   KC_RSFT,   KC_NO,
        KC_LCTL, KC_LALT, KC_LGUI,             KC_NO, LT(_FN, KC_SPC), KC_NO,             KC_RGUI,   KC_RALT,   KC_NO,KC_RCTL,     MO(_MC)),

  [_FN] = LAYOUT_all(
 LALT(KC_GRAVE),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_NO,KC_DEL,
        M_SWTCH,   _______,   KC_UP, _______, _______, _______, _______, KC_HOME,   KC_UP,  KC_END, _______, _______, _______,     _______,
        _______,     KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,            _______,
        _______, KC_NO,_______, _______, _______, _______,  KC_SPC, KC_PGDN, _______, _______, _______, _______, KC_NO,   _______,   KC_NO,
        _______, _______, _______,                    KC_NO, _______, KC_NO,                    _______, _______, KC_NO,_______,   _______),

  [_MC] = LAYOUT_all(
        _______, BR_DOWN,   BR_UP, M_MCRTL, M_AWNDS, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,_______,
        _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,
        MO(_KB),     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
        _______, KC_NO,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NO,   M_ITERM,   KC_NO,
        _______, _______, _______,                    KC_NO, _______, KC_NO,                    _______, _______, KC_NO,_______,   KC_TRNS),

  [_IJ] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NO,_______,
        _______,   _______, _______, _______, M_RNAME, _______, _______, M_USAGE, _______, _______, M_RPROP, _______, _______,     _______,
        _______,     M_RTYAL, _______, M_ADBGR, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
        _______, KC_NO,_______, _______, _______, M_RVARB, _______, _______, M_RFUNC, _______, _______, _______, KC_NO,   _______,   KC_NO,
        _______, _______, _______,                    KC_NO, _______, KC_NO,                    _______, _______, KC_NO,_______,   KC_TRNS),

  [_GM] = LAYOUT_all(
        KC_GESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_NO,KC_BSPC,
        KC_TAB,       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,     KC_BSLS,
 LT(_FN2, KC_CAPS),     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,            KC_ENTER,
        KC_LSFT,    KC_NO,KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_NO,   KC_RSFT,   KC_NO,
        KC_LCTL, KC_LALT, KC_LGUI,                    KC_NO,  KC_SPC, KC_NO,                    KC_RGUI, KC_RALT, KC_NO,KC_RCTL,   MO(_MS)),

  [_FN2] = LAYOUT_all(
 LALT(KC_GRAVE),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_NO,KC_DEL,
        M_SWTCH,   _______,   KC_UP, _______, _______, _______, _______, KC_HOME,   KC_UP,  KC_END, _______, _______, _______,     _______,
        KC_TRNS,     KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,            _______,
        _______, KC_NO,_______, _______, _______, _______,  KC_SPC, KC_PGDN, _______, _______, _______, _______, KC_NO,   _______,   KC_NO,
        _______, _______, _______,                    KC_NO, _______, KC_NO,                    _______, _______, KC_NO,_______,   MO(_KB)),

  [_MS] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,KC_DEL,
        _______,   _______, _______, _______, _______, _______, _______, KC_HOME,   KC_UP,  KC_END, _______, _______, _______,     _______,
        KC_TRNS,     _______, _______, _______, _______, _______, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,            _______,
        _______, KC_NO,_______, _______, _______, _______, KC_SPC, KC_PGDN, _______, _______, _______, _______, KC_NO,    _______,   KC_NO,
        _______, _______, _______,                    KC_NO, _______, KC_NO,                    _______, _______, KC_NO,_______,   KC_TRNS),

  [_KB] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NO,RESET,
        _______,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______,     _______,
        KC_TRNS,     TO(_BS), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
        _______, KC_NO,TO(_GM), _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NO,   _______,   KC_NO,
        _______, _______, _______,                    KC_NO, _______, KC_NO,                    _______, _______, KC_NO,_______,   KC_TRNS)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch(id) {
            case 0:
                return MACRO(D(LCTL), T(UP), U(LCTL), END); // macOS: mission control
            case 1:
                return MACRO(D(LCTL), T(DOWN), U(LCTL), END); // macOS: App Windows
            case 2:
                return MACRO(D(LGUI), T(GRAVE), U(LGUI), END); // macOS: Switch App Windows
            case 3:
                return MACRO(D(RALT), T(SLASH), U(RALT), END); // macOS: Remap for iTerm2 Hotkey
            case 100:
                return MACRO(D(LALT), D(LSHIFT), T(F5), U(LSHIFT), U(LALT), END); // IntelliJ: Attach to process...
            case 101:
                return MACRO(D(LSHIFT), T(F6), U(LSHIFT), END); // IntelliJ: Refactor Rename
            case 102:
                return MACRO(D(LALT), T(F7), U(LALT), END); // IntelliJ: Usage
            case 103:
                return MACRO(D(LALT), D(LGUI), T(V), U(LGUI), U(LALT), END); // IntelliJ: Refactor Variable
            case 104:
                return MACRO(D(LALT), D(LGUI), T(P), U(LGUI), U(LALT), END); // IntelliJ: Refactor Property
            case 105:
                return MACRO(D(LALT), D(LSHIFT), D(LGUI), T(M), U(LGUI), U(LSHIFT), U(LALT), END); // IntelliJ: Refactor Function
            case 106:
                return MACRO(D(LALT), D(LSHIFT), D(LGUI), T(A), U(LGUI), U(LSHIFT), U(LALT), END); // IntelliJ: Refactor Type Alias
        }
    }
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  uint8_t key;
  switch (keycode) {
    case BR_DOWN:
    case BR_UP:
      // Clear the RGUI modifier placed by LM for _ML layer as brightness don't
      // work with modifiers.
      key = (keycode == BR_DOWN) ? KC_SLCK : KC_PAUS;
      if (record->event.pressed) {
          unregister_mods(MOD_RGUI);
          add_key(key);
          send_keyboard_report();
      } else {
          del_key(key);
          send_keyboard_report();
      }
      return false; // Skip all further processing of this key
    default:
      return true; // Process all other keycodes normally
  }
}

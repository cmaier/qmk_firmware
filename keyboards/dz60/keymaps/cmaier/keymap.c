#include QMK_KEYBOARD_H

enum dz60_layers {
  _DEFAULT,
  _SPACEFN_FUNCTIONS,
  _MACOS_FUNCTIONS,
  _INTELLIJ,
  _GAMING,
  _GAMING_FUNCTIONS,
  _GAMING_MEDIA,
  _KEYBOARD_CONFIG
};

enum my_keycodes {
  BR_UP = SAFE_RANGE,
  BR_DOWN
};

enum macros {
    macos_app_switcher,
    macos_app_windows,
    macos_iterm2_hotkey,
    macos_mission_control,
    intellij_attach_debugger,
    intellij_refactor_rename,
    intellij_refactor_property,
    intellij_refactor_type_alias,
    intellij_refactor_variable,
    intellij_refactor_function,
    intellij_usage
};

#define KC_IJ MO(_INTELLIJ)
#define KC_SPACEFN LT(_SPACEFN_FUNCTIONS, KC_SPC)
#define KC_MAC MO(_MACOS_FUNCTIONS)

#define KC_SWITCHR M(macos_app_switcher)
#define KC__ KC_TRNS

#define KC_BRDN BR_DOWN
#define KC_BRUP BR_UP
#define KC_MCTL M(macos_mission_control)
#define KC_AWND M(macos_app_windows)
#define KC_KCFG MO(_KEYBOARD_CONFIG)
#define KC_TERM M(macos_iterm2_hotkey)

#define KC_RNME M(intellij_refactor_rename)
#define KC_USGE M(intellij_usage)
#define KC_RPRP M(intellij_refactor_property)
#define KC_RTAS M(intellij_refactor_type_alias)
#define KC_ADBR M(intellij_attach_debugger)
#define KC_RVAR M(intellij_refactor_variable)
#define KC_RFUN M(intellij_refactor_function)

#define KC_FUN2 MO(_GAMING_FUNCTIONS)
#define KC_MCST MO(_GAMING_MEDIA)

#define KC_RESET RESET
#define KC_CTOG RGB_TOG
#define KC_CMOD RGB_MOD
#define KC_CHUI RGB_HUI
#define KC_CHUD RGB_HUD
#define KC_CSAI RGB_SAI
#define KC_CSAD RGB_SAD
#define KC_CVAI RGB_VAI
#define KC_CVAD RGB_VAD
#define KC_BASE TO(_DEFAULT)
#define KC_GAME TO(_GAMING)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_60_ansi_kc(
        GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS,  EQL,    BSPC,
           TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC, BSLASH,
              IJ,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,     ENTER,
              LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,         RSFT,
         LCTL, LALT, LGUI,             SPACEFN           , RGUI, RALT, RCTL,  MAC),

  [_SPACEFN_FUNCTIONS] = LAYOUT_60_ansi_kc(
         GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,      DEL,
        SWITCHR,  _,  UP,   _,   _,   _,   _, HOME, UP, END,   _,   _,   _,      _,
               _,LEFT,DOWN,RGHT,    _,   _,PGUP,LEFT,DOWN,RGHT,   _,    _,       _,
                 _,   _,   _,   _,   _, SPC,PGDN,   _,   _,   _,   _,            _,
            _,    _,    _,                _              ,    _,    _,    _,    _),

  [_MACOS_FUNCTIONS] = LAYOUT_60_ansi_kc(
        _,   BRDN,BRUP,MCTL,AWND,   _,   _,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,        _,
             _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,      _,
            KCFG,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,         _,
                 _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,         TERM,
            _,    _,    _,                _              ,    _,    _,    _,    _),

  [_INTELLIJ] = LAYOUT_60_ansi_kc(
           _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,        _,
             _,   _,   _,   _,RNME,   _,   _,USGE,   _,   _,RPRP,   _,   _,      _,
               _,RTAS,   _,ADBR,   _,   _,   _,   _,   _,   _,   _,   _,         _,
                 _,   _,   _,   _,RVAR,   _,   _,RFUN,   _,   _,   _,            _,
            _,    _,    _,                _              ,    _,    _,    _,    _),

  [_GAMING] = LAYOUT_60_ansi_kc(
        GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,     BSPC,
           TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,   BSLS,
            FUN2,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,     ENTER,
              LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,         RSFT,
         LCTL, LALT, LGUI,               SPC             , RGUI, RALT, RCTL, MCST),

  [_GAMING_FUNCTIONS] = LAYOUT_60_ansi_kc(
         GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,      DEL,
        SWITCHR,  _,   UP,   _,   _,   _,   _,HOME,  UP, END,   _,   _,   _,     _,
               _,LEFT,DOWN,RGHT,   _,   _,PGUP,LEFT,DOWN,RGHT,   _,   _,         _,
                 _,   _,   _,   _,   _, SPC,PGDN,   _,   _,   _,   _,            _,
            _,    _,    _,                _              ,    _,    _,    _,    _),

  [_GAMING_MEDIA] = LAYOUT_60_ansi_kc(
           _,   _,   _,   _,   _,   _,   _,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,     DEL,
             _,   _,   _,   _,   _,   _,   _,HOME,  UP, END,   _,   _,   _,     _,
            KCFG,   _,   _,   _,   _,   _,PGUP,LEFT,DOWN,RGHT,   _,   _,        _,
                 _,   _,   _,   _,   _, SPC,PGDN,   _,   _,   _,   _,           _,
            _,    _,    _,                _              ,    _,    _,    _,    _),

  [_KEYBOARD_CONFIG] = LAYOUT_60_ansi_kc(
           _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,    RESET,
             _,CTOG,CMOD,CHUI,CHUD,CSAI,CSAD,CVAI,CVAD,   _,   _,   _,   _,      _,
               _,BASE,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,         _,
                 _,GAME,   _,   _,   _,   _,   _,   _,   _,   _,   _,            _,
            _,    _,    _,                _              ,    _,    _,    _,    _),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch(id) {
            case macos_mission_control:
                return MACRO(D(LCTL), T(UP), U(LCTL), END);
            case macos_app_windows:
                return MACRO(D(LCTL), T(DOWN), U(LCTL), END);
            case macos_app_switcher:
                return MACRO(D(LGUI), T(GRAVE), U(LGUI), END);
            case macos_iterm2_hotkey:
                return MACRO(D(RALT), T(SLASH), U(RALT), END);
            case intellij_attach_debugger:
                return MACRO(D(LALT), D(LSHIFT), T(F5), U(LSHIFT), U(LALT), END);
            case intellij_refactor_rename:
                return MACRO(D(LSHIFT), T(F6), U(LSHIFT), END);
            case intellij_usage:
                return MACRO(D(LALT), T(F7), U(LALT), END);
            case intellij_refactor_variable:
                return MACRO(D(LALT), D(LGUI), T(V), U(LGUI), U(LALT), END);
            case intellij_refactor_property:
                return MACRO(D(LALT), D(LGUI), T(P), U(LGUI), U(LALT), END);
            case intellij_refactor_function:
                return MACRO(D(LALT), D(LSHIFT), D(LGUI), T(M), U(LGUI), U(LSHIFT), U(LALT), END);
            case intellij_refactor_type_alias:
                return MACRO(D(LALT), D(LSHIFT), D(LGUI), T(A), U(LGUI), U(LSHIFT), U(LALT), END);
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

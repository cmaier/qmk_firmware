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
  BR_UP = SAFE_RANGE, // macOS: Brightness up
  BR_DOWN, // macOS: Brightness down
  KC_SWITCHR, // macOS: App Window Switcher
  KC_AWND, //  macOS: App Windows
  KC_TERM, // macOS: iTerm hotkey
  KC_MCTL, // macOS: Mission Control
  KC_ADBR, // IntelliJ: Attach debugger
  KC_RFUN, // IntelliJ: Refactor function
  KC_RNME, // IntelliJ: Refactor rename
  KC_RPRP, // IntelliJ: Refactor property
  KC_RTAS, // IntelliJ: Refactor type alias
  KC_RVAR, // IntelliJ: Refactor variable
  KC_USGE // IntelliJ: Find usage
};

#define KC_IJ MO(_INTELLIJ)
#define KC_SPACEFN LT(_SPACEFN_FUNCTIONS, KC_SPC)
#define KC_MAC MO(_MACOS_FUNCTIONS)

#define KC__ KC_TRNS

#define KC_BRDN BR_DOWN
#define KC_BRUP BR_UP
#define KC_KCFG MO(_KEYBOARD_CONFIG)

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
    case KC_SWITCHR:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_GRAVE)SS_UP(X_LGUI));
      }
      break;
    case KC_AWND:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_DOWN)SS_UP(X_LCTRL));
      }
      break;
    case KC_TERM:
      if (record->event.pressed) {
        SEND_STRING(SS_RALT("/"));
      }
      break;
    case KC_MCTL:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_UP)SS_UP(X_LCTRL));
      }
      break;
    case KC_ADBR:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LSHIFT)SS_TAP(X_F5)SS_UP(X_LSHIFT)SS_UP(X_LALT));
      }
      break;
    case KC_RFUN:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LSHIFT)SS_DOWN(X_LGUI)"m"SS_UP(X_LGUI)SS_UP(X_LSHIFT)SS_UP(X_LALT));
      }
      break;
    case KC_RNME:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LSHIFT)SS_TAP(X_F6)SS_UP(X_LSHIFT));
      }
      break;
    case KC_RPRP:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LGUI)"p"SS_UP(X_LGUI)SS_UP(X_LSHIFT));
      }
      break;
    case KC_RTAS:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LSHIFT)SS_DOWN(X_LGUI)"a"SS_UP(X_LGUI)SS_UP(X_LSHIFT)SS_UP(X_LALT));
      }
      break;
    case KC_RVAR:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LGUI)"v"SS_UP(X_LGUI)SS_UP(X_LALT));
      }
      break;
    case KC_USGE:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_F7)SS_UP(X_LALT));
      }
      break;
  }
  return true; // Process all other keycodes normally
}

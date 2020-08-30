#include QMK_KEYBOARD_H
#include "cmaier.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_60_ansi_kc(
        GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS,  EQL,    BSPC,
           TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC, BSLASH,
            INTJ,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,     ENTER,
              LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,         RSFT,
         LCTL, LALT, LGUI,               SFN             , RGUI, RALT, RCTL,  MAC),

  [_SPACEFN_FUNCTIONS] = LAYOUT_60_ansi_kc(
         GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,      DEL,
          SWTR,   _,  UP,   _,   _,   _,   _, HOME, UP, END,   _,   _,   _,      _,
               _,LEFT,DOWN,RGHT,    _,   _,PGUP,LEFT,DOWN,RGHT,   _,    _,       _,
                 _,   _,   _,   _,   _, SPC,PGDN,   _,   _,   _,   _,            _,
            _,    _,    _,                _              ,    _,    _,    _,    _),

  [_MACOS_FUNCTIONS] = LAYOUT_60_ansi_kc(
           _,BRDN,BRUP,MCTL,AWND,   _,   _,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,        _,
             _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,      _,
               _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,         _,
                 _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,         TERM,
            _,    _,    _,                _              ,    _,    _,    _,    _),

  [_INTELLIJ] = LAYOUT_60_ansi_kc(
           _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,        _,
             _,   _,   _,   _,RNME,   _,   _,USGE,INLN,   _,RPRP,   _,   _,      _,
               _,RTAS,SIGN,ADBR,   _,   _,   _,   _,   _,   _,   _,   _,         _,
                 _,   _,   _,   _,RVAR,   _,   _,RFUN,   _,   _,   _,            _,
            _,    _,    _,                _              ,    _,    _,    _,    _),

  [_GAMING] = LAYOUT_60_ansi_kc(
        GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,     BSPC,
           TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,   BSLS,
            GFUN,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,     ENTER,
              LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,         RSFT,
         LCTL, LALT, LGUI,               SPC             , RGUI, RALT, RCTL, GMMA),

  [_GAMING_FUNCTIONS] = LAYOUT_60_ansi_kc(
         GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,      DEL,
          SWTR,   _,   UP,   _,   _,   _,   _,HOME,  UP, END,   _,   _,   _,     _,
               _,LEFT,DOWN,RGHT,   _,   _,PGUP,LEFT,DOWN,RGHT,   _,   _,         _,
                 _,   _,   _,   _,   _, SPC,PGDN,   _,   _,   _,   _,            _,
            _,    _,    _,                _              ,    _,    _,    _,    _),

  [_GAMING_MEDIA] = LAYOUT_60_ansi_kc(
           _,   _,   _,   _,   _,   _,   _,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,     DEL,
             _,   _,   _,   _,   _,   _,   _,HOME,  UP, END,   _,   _,   _,     _,
               _,   _,   _,   _,   _,   _,PGUP,LEFT,DOWN,RGHT,   _,   _,        _,
                 _,   _,   _,   _,   _, SPC,PGDN,   _,   _,   _,   _,           _,
            _,    _,    _,                _              ,    _,    _,    _,    _),

  [_KEYBOARD_CONFIG] = LAYOUT_60_ansi_kc(
           _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,   _,    RESET,
             _,CTOG,CMOD,CHUI,CHUD,CSAI,CSAD,CVAI,CVAD,   _,   _,   _,   _,      _,
               _,BASE,   _,   _,   _,   _,   _,   _,   _,LIVE,   _,   _,         _,
                 _,GAME,   _,   _,VRSN,   _,   _,MAKE,   _,   _,   _,            _,
            _,    _,    _,                _              ,    _,    _,    _,    _),
};

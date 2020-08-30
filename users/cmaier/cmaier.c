/*
  Copyright 2019 Christian Maier <cmaierrr@gmail.com> @cmaier

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "cmaier.h"

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

static uint32_t key_keep_alive_timer = 0;
static bool key_keep_alive_trigger = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_MAKE:
    case KC_VRSN:
      process_record_keyboard(keycode, record);

    case KC_BRDN:
    case KC_BRUP:
    case KC_SWTR:
    case KC_AWND:
    case KC_TERM:
    case KC_MCTL:
      return process_record_macos(keycode, record);

    case KC_ADBR:
    case KC_RFUN:
    case KC_RNME:
    case KC_RPRP:
    case KC_RTAS:
    case KC_RVAR:
    case KC_INLN:
    case KC_SIGN:
    case KC_USGE:
      process_record_intellij(keycode, record);
      break;

    case KC_LIVE:
      if (record->event.pressed) {
          key_keep_alive_trigger ^= true;
      }
      break;
  }

  return process_record_keymap(keycode, record);
}

void matrix_scan_user(void) {
    // KC_LIVE, Keep alive!
    if (timer_elapsed32(key_keep_alive_timer) > 1500) { // 5 seconds
        key_keep_alive_timer = timer_read32();  // resets timer
        if (key_keep_alive_trigger) { // tap if enabled
            tap_code(KC_MS_RIGHT);
            tap_code(KC_MS_DOWN);
            tap_code(KC_MS_LEFT);
            tap_code(KC_MS_UP);
        }
    }
}

enum combo_events {
  KBD_CONFIG,
};

const uint16_t PROGMEM kbd_combo[] = {KC_LALT, KC_RALT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [KBD_CONFIG] = COMBO_ACTION(kbd_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case KBD_CONFIG:
      if (pressed) {
        layer_on(_KEYBOARD_CONFIG);
      } else {
        layer_off(_KEYBOARD_CONFIG);
      }
      break;
  }
}

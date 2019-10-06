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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_MAKE:
    case KC_VRSN:
    case KC_LORM:
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
    case KC_USGE:
      process_record_intellij(keycode, record);
      break;
  }

  return process_record_keymap(keycode, record);
}

enum combo_events {
  GUI_CONFIG,
};

const uint16_t PROGMEM gui_combo[] = {KC_LGUI, KC_RGUI, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [GUI_CONFIG] = COMBO_ACTION(gui_combo),
};

void process_combo_event(uint8_t combo_index, bool pressed) {
  switch(combo_index) {
    case GUI_CONFIG:
      if (pressed) {
        layer_on(_KEYBOARD_CONFIG);
      } else {
        layer_off(_KEYBOARD_CONFIG);
      }
      break;
  }
}

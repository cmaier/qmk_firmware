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
#include "macros_macos.h"
#include "macros.h"

bool process_record_macos(uint16_t keycode, keyrecord_t *record) {
  bool isPressed = record->event.pressed;
  uint8_t key;
  switch (keycode) {
    case KC_BRDN:
    case KC_BRUP:
      // Clear the RGUI modifier placed by LM for _ML layer as brightness don't
      // work with modifiers.
      key = (keycode == KC_BRDN) ? KC_SLCK : KC_PAUS;
      if (isPressed) {
          unregister_mods(MOD_RGUI);
          add_key(key);
          send_keyboard_report();
      } else {
          del_key(key);
          send_keyboard_report();
      }
      return false; // Skip all further processing of this key

    case KC_SWTR:
      if (isPressed) {
        SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_GRAVE)SS_UP(X_LGUI));
      }
      break;

    case KC_AWND:
      if (isPressed) {
        SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_DOWN)SS_UP(X_LCTRL));
      }
      break;

    case KC_TERM:
      if (isPressed) {
        SEND_STRING(SS_RALT("/"));
      }
      break;

    case KC_MCTL:
      if (isPressed) {
        SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_UP)SS_UP(X_LCTRL));
      }
      break;
  }

  return true;
}

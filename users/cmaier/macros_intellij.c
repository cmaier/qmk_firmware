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
#include "macros_intellij.h"
#include "macros.h"

void process_record_intellij(uint16_t keycode, keyrecord_t *record) {
  bool isPressed = record->event.pressed;
  switch (keycode) {
    case KC_ADBR:
      if (isPressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LSHIFT)SS_TAP(X_F5)SS_UP(X_LSHIFT)SS_UP(X_LALT));
      }
      break;

    case KC_RFUN:
      if (isPressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LSHIFT)SS_DOWN(X_LGUI)"m"SS_UP(X_LGUI)SS_UP(X_LSHIFT)SS_UP(X_LALT));
      }
      break;

    case KC_RNME:
      if (isPressed) {
        SEND_STRING(SS_DOWN(X_LSHIFT)SS_TAP(X_F6)SS_UP(X_LSHIFT));
      }
      break;

    case KC_RPRP:
      if (isPressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LGUI)"p"SS_UP(X_LGUI)SS_UP(X_LSHIFT));
      }
      break;

    case KC_RTAS:
      if (isPressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LSHIFT)SS_DOWN(X_LGUI)"a"SS_UP(X_LGUI)SS_UP(X_LSHIFT)SS_UP(X_LALT));
      }
      break;

    case KC_RVAR:
      if (isPressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LGUI)"v"SS_UP(X_LGUI)SS_UP(X_LALT));
      }
      break;

    case KC_INLN:
      if (isPressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LGUI)"n"SS_UP(X_LGUI)SS_UP(X_LALT));
      }
      break;

    case KC_USGE:
      if (isPressed) {
        SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_F7)SS_UP(X_LALT));
      }
      break;
  }
}

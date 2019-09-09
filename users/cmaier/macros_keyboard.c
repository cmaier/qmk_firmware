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
#include "macros_keyboard.h"
#include "macros.h"
#include "version.h"

void process_record_keyboard(uint16_t keycode, keyrecord_t *record) {
  bool isPressed = record->event.pressed;
  switch (keycode) {
    case KC_MAKE:
      if (isPressed) {
        send_string_with_delay_P(PSTR("make " QMK_KEYBOARD ":" QMK_KEYMAP ":dfu" SS_TAP(X_ENTER)), MACRO_TIMER);
      }
      break;

    case KC_VRSN:
      if (isPressed) {
        send_string_with_delay_P(PSTR(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION ", Built on: " QMK_BUILDDATE), MACRO_TIMER);
      }
      break;
  }
}

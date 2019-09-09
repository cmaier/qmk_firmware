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
#include "quantum.h"

enum intellij_keycodes {
  KC_ADBR = 200, // IntelliJ: Attach debugger
  KC_RFUN, // IntelliJ: Refactor function
  KC_RNME, // IntelliJ: Refactor rename
  KC_RPRP, // IntelliJ: Refactor property
  KC_RTAS, // IntelliJ: Refactor type alias
  KC_RVAR, // IntelliJ: Refactor variable
  KC_USGE // IntelliJ: Find usage
};

void process_record_intellij(uint16_t keycode, keyrecord_t *record);

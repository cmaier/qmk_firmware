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

enum custom_keycodes {
  KC_MAKE = SAFE_RANGE,  // kdb: Compiles firmware
  KC_VRSN,               // kbd: QMK version

  KC_BRDN,               // macOS: Brightness up
  KC_BRUP,               // macOS: Brightness down
  KC_SWTR,               // macOS: App Window Switcher
  KC_AWND,               // macOS: App Windows
  KC_TERM,               // macOS: iTerm hotkey
  KC_MCTL,               // macOS: Mission Control

  KC_ADBR,               // IntelliJ: Attach debugger
  KC_RFUN,               // IntelliJ: Refactor function
  KC_RNME,               // IntelliJ: Refactor rename
  KC_RPRP,               // IntelliJ: Refactor property
  KC_RTAS,               // IntelliJ: Refactor type alias
  KC_RVAR,               // IntelliJ: Refactor variable
  KC_INLN,               // IntelliJ: Refactor inline
  KC_SIGN,               // IntelliJ: Change signature
  KC_USGE,               // IntelliJ: Find usage

  KC_LIVE,               // Keep alive loop

  NEW_SAFE_RANGE         // use "NEW_SAFE_RANGE" for keymap specific codes
};

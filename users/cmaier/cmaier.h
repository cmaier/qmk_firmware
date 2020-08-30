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
#pragma once

#include "quantum.h"
#include "macros.h"
#include "macros_keyboard.h"
#include "macros_macos.h"
#include "macros_intellij.h"

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

#define KC_BASE  TO(_DEFAULT)
#define KC_SFN   LT(_SPACEFN_FUNCTIONS, KC_SPC)
#define KC_MAC   MO(_MACOS_FUNCTIONS)
#define KC_INTJ  MO(_INTELLIJ)
#define KC_GAME  TO(_GAMING)
#define KC_GFUN  MO(_GAMING_FUNCTIONS)
#define KC_GMMA  MO(_GAMING_MEDIA)

#define MAGIC_KEY_LOCK  L

#define KC__      KC_TRNS
#define KC_RESET  RESET
#define KC_CTOG   RGB_TOG
#define KC_CMOD   RGB_MOD
#define KC_CHUI   RGB_HUI
#define KC_CHUD   RGB_HUD
#define KC_CSAI   RGB_SAI
#define KC_CSAD   RGB_SAD
#define KC_CVAI   RGB_VAI
#define KC_CVAD   RGB_VAD

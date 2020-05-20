#ifndef CONFIG_KEYMAP_H
#define CONFIG_KEYMAP_H

#include "../../config.h"

// Fix KC_GESC conflict with Cmd+Alt+Esc on macos
#define GRAVE_ESC_GUI_OVERRIDE

// Turn off RGB when computer goes to sleep
#ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_SLEEP
#endif

#endif

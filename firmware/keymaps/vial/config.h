// Copyright 2024 valerie tsoi (@valerietsoi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

//vial
#define VIAL_KEYBOARD_UID {0x65, 0x45, 0x11, 0x90, 0x31, 0x8F, 0x37, 0xE4}

//#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
//#define VIAL_UNLOCK_COMBO_COLS {0, 1}

//#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD

#define DYNAMIC_KEYMAP_MACRO_COUNT 50
#define VIAL_COMBO_ENTRIES 30
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

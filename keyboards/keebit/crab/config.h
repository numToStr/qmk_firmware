// Copyright 2023 Vikas Rajbanshi (@numToStr)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

// Make the right side master, left side slave
#define MASTER_RIGHT

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

// NOTE: Uncomment the following line, if you want the left side to be the `master`
// #define SPLIT_HAND_PIN_LOW_IS_LEFT

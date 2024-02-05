/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Handedness. */
#define MASTER_RIGHT

// CBroz added
#define MOUSEKEY_INTERVAL 16 // Default: 50. ~3x faster/more accurate
#define MOUSEKEY_TIME_TO_MAX 60 // Default: 20. b/c 3x above, slower accel to max
#define MOUSEKEY_DELAY 100 // Default: 300
#define MOUSEKEY_WHEEL_DELAY 100 // Same as above
#define MOUSEKEY_WHEEL_INTERVAL 50 // Default: 100
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100 // Default: 40
#define DEBOUNCE 5 // Reduces unintended double-presses - set 0 if not needed
#undef TAPPING_TOGGLE
#define TAPPING_TOGGLE 1
#undef TAPPING_TERM
#define TAPPING_TERM 160
#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD

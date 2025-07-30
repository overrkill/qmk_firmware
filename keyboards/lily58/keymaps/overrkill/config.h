/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public LicenseAAAAAAAAAAAAA
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 200
#define MASTER_LEFT

#define RGBLIGHT_EFFECT_STATIC_GRADIENT

#undef WS2812_DI_PIN	
#define WS2812_DI_PIN D3
#undef RGBLIGHT_LED_COUNT 
#define RGBLIGHT_LED_COUNT 12
#define RGBLED_SPLIT { 6, 6 }
// max brightness
#undef RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_LIMIT_VAL 200
// steps for hue, saturation and brightness
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
// shut down leds when host sleeps
#define RGBLIGHT_SLEEP

// caps word 

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

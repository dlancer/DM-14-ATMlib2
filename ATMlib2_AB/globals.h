#ifndef GLOBALS_H
#define GLOBALS_H

#include <Arduino.h>
#include <Arduboy2.h>
#include <ATMlib2.h>
#include "bitmaps.h"
#include "song.h"
#include "sfx.h"

Arduboy2Base arduboy;
Sprites sprites;
ATMsynth ATM;

struct atm_sfx_state sfx_state;
byte sfxState;

#endif

/*
  DEMO: ATMlib2

  MADE by TEAM a.r.g. : http://www.team-arg.org/demos.html

  2018 - JO3RI - dxxb

  License: MIT : https://opensource.org/licenses/MIT

*/

//determine the demo
#define DEMO_ID 14

#include <Arduino.h>
#include <Arduboy2.h>
#include <ATMlib2.h>

#include "bitmaps.h"
extern "C" {
#include "song.h"
#include "sfx.h"
}

Arduboy2Base arduboy;
Sprites sprites;

ATM_PLAYERS(3);
ATM_MEM_POOL(20);

#define ARRAY_SIZE(a) (sizeof (a) / sizeof ((a)[0]))

uint8_t selected_sfx[2] = {0, 0};

void play_sfx(uint8_t slot)
{
  const uint8_t sfx_idx = selected_sfx[slot];
  struct atm_entry_patterns ep;
  ep.voice_count = 1;
  ep.voices[0].osc_idx = slot;
  ep.voices[0].pattern_idx = sfx_idx;
  atm_synth_player_setup(slot, (const uint8_t *)&sfx, &ep);
  atm_synth_player_set_pause(slot, 0);
}

void checkInputs()
{
  if (arduboy.justPressed(A_BUTTON)) {
    arduboy.digitalWriteRGB(true, false, false);
    play_sfx(0);
  }

  if (arduboy.justPressed(B_BUTTON)) {
    arduboy.digitalWriteRGB(false, true, false);
    play_sfx(1);
  }

  if (arduboy.justPressed(UP_BUTTON)) {
    selected_sfx[0] = ++selected_sfx[0] % 16;
  }

  if (arduboy.justPressed(DOWN_BUTTON)) {
    selected_sfx[1] = ++selected_sfx[1] % 16;
  }

  if (arduboy.justPressed(LEFT_BUTTON)) {
    atm_synth_player_setup(2, (const uint8_t *)&score, NULL);
    atm_synth_player_set_pause(2, 0);
  }

  if (arduboy.justPressed(RIGHT_BUTTON)) {
    atm_synth_player_set_pause(2, !atm_synth_player_get_pause(2));
  }
}


void setup() {
  arduboy.begin();
  // let's make sure the sound was not muted in a previous sketch
  arduboy.audio.on();
  // Begin playback of song.
  osc_setup();
  osc_gain = 2;
  atm_setup();
  atm_synth_player_setup(2, (const uint8_t *)&score, NULL);
  atm_synth_player_set_pause(2, 0);
  osc_set_isr_active(1);
}

void loop() {
  if (!(arduboy.nextFrame())) return;
  arduboy.pollButtons();
  arduboy.clear();
  sprites.drawSelfMasked(34, 4, T_arg, 0);
  checkInputs();
  arduboy.display();
}

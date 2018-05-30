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
#include "song.h"
#include "sfx.h"

Arduboy2Base arduboy;
Sprites sprites;
ATMsynth ATM;

#define ARRAY_SIZE(a) (sizeof (a) / sizeof ((a)[0]))

uint8_t selected_sfx[2] = {0, 0};
const uint8_t *sfx_ptrs[16] = {
  (const uint8_t*)&sfx0,
  (const uint8_t*)&sfx1,
  (const uint8_t*)&sfx2,
  (const uint8_t*)&sfx3,
  (const uint8_t*)&sfx4,
  (const uint8_t*)&sfx5,
  (const uint8_t*)&sfx6,
  (const uint8_t*)&sfx7,
  (const uint8_t*)&sfx8,
  (const uint8_t*)&sfx9,
  (const uint8_t*)&sfx10,
  (const uint8_t*)&sfx11,
  (const uint8_t*)&sfx12,
  (const uint8_t*)&sfx13,
  (const uint8_t*)&sfx14,
  (const uint8_t*)&sfx15,
};

void play_sfx(uint8_t slot)
{
  uint8_t sfx_idx = selected_sfx[slot];
  atm_synth_play_sfx_track(slot, slot, sfx_ptrs[sfx_idx]);
}


void checkInputs()
{
  if (arduboy.justPressed(A_BUTTON)) {
    play_sfx(0);
  }

  if (arduboy.justPressed(B_BUTTON)) {
    play_sfx(1);
  }

  if (arduboy.justPressed(UP_BUTTON)) {
    selected_sfx[0] = ++selected_sfx[0] % ARRAY_SIZE(sfx_ptrs);
  }

  if (arduboy.justPressed(DOWN_BUTTON)) {
    selected_sfx[1] = ++selected_sfx[1] % ARRAY_SIZE(sfx_ptrs);
  }

  if (arduboy.justPressed(LEFT_BUTTON)) {
    atm_synth_start_score((const uint8_t*)&score);
  }

  if (arduboy.justPressed(RIGHT_BUTTON)) {
    atm_synth_set_score_paused(atm_synth_is_score_playing());
  }
}


void setup() {
  arduboy.begin();
  // let's make sure the sound was not muted in a previous sketch
  arduboy.audio.on();
  // Begin playback of song.
  atm_synth_setup();
  atm_synth_start_score((const uint8_t*)&score);
}

void loop() {
  if (!(arduboy.nextFrame())) return;
  arduboy.pollButtons();
  arduboy.clear();
  sprites.drawSelfMasked(34, 4, T_arg, 0);
  checkInputs();
  arduboy.display();
}

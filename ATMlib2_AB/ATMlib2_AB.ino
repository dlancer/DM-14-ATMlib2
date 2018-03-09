/*
  DEMO: ATMlib2

  MADE by TEAM a.r.g. : http://www.team-arg.org/demos.html

  2018 - JO3RI - dxxb

  License: MIT : https://opensource.org/licenses/MIT

*/

//determine the demo
#define DEMO_ID 14

#include "globals.h"
#include "inputs.h"


void setup() {
  arduboy.begin();
    // let's make sure the sound was not muted in a previous sketch
  arduboy.audio.on();
    // Begin playback of song.
  atm_synth_setup();
  atm_synth_play_score((const uint8_t*)&score);
}

void loop() {
  if (!(arduboy.nextFrame())) return;
  arduboy.pollButtons();
  arduboy.clear();
  sprites.drawSelfMasked(0, 4, T_arg, 0);
  sprites.drawSelfMasked(77, 4, modusCreate, 0);
  checkInputs();
  arduboy.display();
}

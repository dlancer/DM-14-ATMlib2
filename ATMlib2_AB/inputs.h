#ifndef INPUTS_H
#define INPUTS_H

#include "globals.h"

void checkInputs()
{
  if (arduboy.justPressed(B_BUTTON)) {
    atm_synth_play_sfx_track(OSC_CH_TWO, (const uint8_t*)&sfx1, &sfx_state);
  }

  if (arduboy.justPressed(A_BUTTON)) {
    atm_synth_stop_sfx_track(&sfx_state);
  }

  if (arduboy.justPressed(LEFT_BUTTON)) {
    atm_synth_play_score((const uint8_t*)&score);
  }

  if (arduboy.justPressed(RIGHT_BUTTON)) {
    atm_synth_set_score_paused(!atm_synth_get_score_paused());
  }
}

#endif

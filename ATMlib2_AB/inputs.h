#ifndef INPUTS_H
#define INPUTS_H

#include "globals.h"

void checkInputs()
{
  if (arduboy.justPressed(B_BUTTON)) {
    switch (sfxState)
    {
      case 0:
        atm_synth_play_sfx_track(OSC_CH_TWO, (const uint8_t*)&sfx1, &sfx_state);
        break;
      case 1:
        atm_synth_play_sfx_track(OSC_CH_TWO, (const uint8_t*)&sfx2, &sfx_state);
        break;
      case 2:
        atm_synth_play_sfx_track(OSC_CH_TWO, (const uint8_t*)&sfx3, &sfx_state);
        break;
      case 3:
        atm_synth_play_sfx_track(OSC_CH_TWO, (const uint8_t*)&sfx4, &sfx_state);
        break;
      case 4:
        atm_synth_play_sfx_track(OSC_CH_THREE, (const uint8_t*)&sfx5, &sfx_state);
        break;
      case 5:
        atm_synth_play_sfx_track(OSC_CH_TWO, (const uint8_t*)&sfx6, &sfx_state);
        break;
    }
  }

  if (arduboy.justPressed(A_BUTTON)) {
    sfxState = (++sfxState) % 6;
  }

  if (arduboy.justPressed(LEFT_BUTTON)) {
    atm_synth_play_score((const uint8_t*)&score);
  }

  if (arduboy.justPressed(RIGHT_BUTTON)) {
    atm_synth_set_score_paused(!atm_synth_get_score_paused());
  }
}

#endif

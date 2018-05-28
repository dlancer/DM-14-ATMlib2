#ifndef INPUTS_H
#define INPUTS_H

#include "globals.h"

void checkInputs()
{
  if (arduboy.justPressed(B_BUTTON)) {
    switch (sfxState)
    {
      case 0:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx0);
        break;
      case 1:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx1);
        break;
      case 2:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx2);
        break;
      case 3:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx3);
        break;
      case 4:
        atm_synth_play_sfx_track(OSC_CH_3, 0, (const uint8_t*)&sfx4);
        break;
      case 5:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx5);
        break;
      case 6:
        atm_synth_play_sfx_track(OSC_CH_3, 0, (const uint8_t*)&sfx6);
        break;
      case 7:
        atm_synth_play_sfx_track(OSC_CH_3, 0, (const uint8_t*)&sfx7);
        break;
      case 8:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx8);
        break;
      case 9:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx9);
        break;
      case 10:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx10);
        break;
      case 11:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx11);
        break;
      case 12:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx12);
        break;
      case 13:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx13);
        break;
       case 14:
        atm_synth_play_sfx_track(OSC_CH_3, 0, (const uint8_t*)&sfx14);
        break;
       case 15:
        atm_synth_play_sfx_track(OSC_CH_2, 0, (const uint8_t*)&sfx15);
        break;
    }
  }

  if (arduboy.justPressed(A_BUTTON)) {
    sfxState = (++sfxState) % 16;
  }

  if (arduboy.justPressed(LEFT_BUTTON)) {
    atm_synth_start_score((const uint8_t*)&score);
  }

  if (arduboy.justPressed(RIGHT_BUTTON)) {
    atm_synth_set_score_paused(atm_synth_is_score_playing());
  }
}

#endif

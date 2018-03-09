#ifndef SFX_H
#define SFX_H

const PROGMEM struct sfx1_data {
  uint8_t fmt;
  uint8_t pattern0[9];
} sfx1 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_TEMPO(22),
    ATM_CMD_M_SET_VOLUME(127),
    ATM_CMD_I_NOTE_F5,
    ATM_CMD_M_DELAY_TICKS(11),
    ATM_CMD_I_NOTE_OFF,
    ATM_CMD_M_DELAY_TICKS(11),
    ATM_CMD_I_STOP,
  },
};

#endif

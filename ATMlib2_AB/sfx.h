#ifndef SFX_H
#define SFX_H

const PROGMEM struct sfx1_data {
  uint8_t fmt;
  uint8_t pattern0[12];
} sfx1 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_TEMPO(32),
    ATM_CMD_M_SET_VOLUME(127),
    ATM_CMD_M_SLIDE_VOL_ON(-8),
    ATM_CMD_I_NOTE_F6,
    ATM_CMD_M_DELAY_TICKS(5),
    ATM_CMD_I_NOTE_G6,
    ATM_CMD_M_DELAY_TICKS(11),
    ATM_CMD_I_STOP,
  },
};

const PROGMEM struct sfx2_data {
  uint8_t fmt;
  uint8_t pattern0[14];
} sfx2 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_TEMPO(48),
    ATM_CMD_M_SET_VOLUME(127),
    ATM_CMD_M_SLIDE_VOL_ON(-8),
    ATM_CMD_M_GLISSANDO_ON(1),
    ATM_CMD_M_NOTECUT_ON(0),
    ATM_CMD_I_NOTE_C5,
    ATM_CMD_M_DELAY_TICKS(8),
    ATM_CMD_I_STOP,
  },
};

const PROGMEM struct sfx3_data { //12 +3 
  uint8_t fmt;
  uint8_t pattern0[14];
} sfx3 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_TEMPO(48),
    ATM_CMD_M_SET_VOLUME(127),
    ATM_CMD_M_SLIDE_FREQ_ON(-48),
    ATM_CMD_M_TREMOLO_ON(-15, 7),
    ATM_CMD_I_NOTE_F5,
    ATM_CMD_M_DELAY_TICKS(8),
    ATM_CMD_I_STOP,
  },
};


#endif

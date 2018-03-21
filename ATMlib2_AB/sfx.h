#ifndef SFX_H
#define SFX_H

const PROGMEM struct sfx0_data {
  uint8_t fmt;
  uint8_t pattern0[12];
} sfx0 = {
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

const PROGMEM struct sfx1_data {
  uint8_t fmt;
  uint8_t pattern0[14];
} sfx1 = {
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

const PROGMEM struct sfx2_data { //12 +3
  uint8_t fmt;
  uint8_t pattern0[14];
} sfx2 = {
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

const PROGMEM struct sfx3_data {
  uint8_t fmt;
  uint8_t pattern0[18];
} sfx3 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_TEMPO(48),
    ATM_CMD_M_SET_VOLUME(0),
    ATM_CMD_M_VIBRATO_ON(-10, 24),
    ATM_CMD_M_SLIDE_VOL_ON(8),
    ATM_CMD_I_NOTE_F5,
    ATM_CMD_M_DELAY_TICKS(24),
    ATM_CMD_M_SLIDE_VOL_ON(-8),
    ATM_CMD_M_DELAY_TICKS(24),
    ATM_CMD_I_STOP,
  },
};

const PROGMEM struct sfx4_data {
  uint8_t fmt;
  uint8_t pattern0[14];
} sfx4 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_WAVEFORM(1),
    ATM_CMD_M_SET_TEMPO(48),
    ATM_CMD_M_SET_VOLUME(63),
    ATM_CMD_M_TREMOLO_ON(10, 2),
    ATM_CMD_I_NOTE_C4,
    ATM_CMD_M_DELAY_TICKS_1(48),
    ATM_CMD_I_STOP,
  },
};

const PROGMEM struct sfx5_data {
  uint8_t fmt;
  uint8_t pattern0[23];
} sfx5 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_TEMPO(48),
    ATM_CMD_M_SET_VOLUME(127),
    ATM_CMD_M_SLIDE_VOL_ON(-32),
    ATM_CMD_I_NOTE_G6,
    ATM_CMD_M_DELAY_TICKS(8),
    ATM_CMD_M_SET_VOLUME(96),
    ATM_CMD_M_DELAY_TICKS(16),
    ATM_CMD_M_SET_VOLUME(64),
    ATM_CMD_M_DELAY_TICKS(32),
    ATM_CMD_M_SET_VOLUME(32),
    ATM_CMD_M_DELAY_TICKS_1(64),
    ATM_CMD_M_SET_VOLUME(10),
    ATM_CMD_M_DELAY_TICKS(10),
    ATM_CMD_I_STOP,
  },
};


const PROGMEM struct sfx6_data {
  uint8_t fmt;
  uint8_t pattern0[11];
} sfx6 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_WAVEFORM(1),
    ATM_CMD_M_SET_TEMPO(48),
    ATM_CMD_M_SET_VOLUME(63),
    ATM_CMD_M_NOTECUT_ON(0),
    ATM_CMD_I_NOTE_C4,
    ATM_CMD_M_DELAY_TICKS(16),
    ATM_CMD_I_STOP,
  },
};

const PROGMEM struct sfx7_data {
  uint8_t fmt;
  uint8_t pattern0[12];
} sfx7 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_WAVEFORM(1),
    ATM_CMD_M_SET_TEMPO(24),
    ATM_CMD_M_SET_VOLUME(63),
    ATM_CMD_M_SLIDE_VOL_ON(-8),
    ATM_CMD_I_NOTE_C4,
    ATM_CMD_M_DELAY_TICKS(8),
    ATM_CMD_I_STOP,
  },
};

const PROGMEM struct sfx8_data {
  uint8_t fmt;
  uint8_t pattern0[15];
} sfx8 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_VOLUME(127),
    ATM_CMD_M_SLIDE_VOL_ON(-8),
    ATM_CMD_M_ARPEGGIO_ON(204, 0),
    ATM_CMD_M_SET_TEMPO(48),
    ATM_CMD_I_NOTE_C5,
    ATM_CMD_M_DELAY_TICKS(8),
    ATM_CMD_I_NOTE_C4,
    ATM_CMD_M_DELAY_TICKS(8),
    ATM_CMD_I_STOP,
  },
};

const PROGMEM struct sfx9_data {
  uint8_t fmt;
  uint8_t pattern0[14];
} sfx9 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_VOLUME(127),
    ATM_CMD_M_SLIDE_VOL_ON(-16),
    ATM_CMD_M_VIBRATO_ON(63, 15),
    ATM_CMD_M_SET_TEMPO(24),
    ATM_CMD_I_NOTE_F3,
    ATM_CMD_M_DELAY_TICKS(8),
    ATM_CMD_I_STOP,
  },
};

const PROGMEM struct sfx10_data {
  uint8_t fmt;
  uint8_t pattern0[14];
} sfx10 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_VOLUME(127),
    ATM_CMD_M_NOTECUT_ON(0),
    ATM_CMD_M_SET_TEMPO(48),
    ATM_CMD_I_NOTE_F5,
    ATM_CMD_M_DELAY_TICKS(4),
    ATM_CMD_I_NOTE_C5,
    ATM_CMD_M_DELAY_TICKS(4),
    ATM_CMD_I_NOTE_A4,
    ATM_CMD_M_DELAY_TICKS(8),
    ATM_CMD_I_STOP,
  },
};

const PROGMEM struct sfx11_data {
  uint8_t fmt;
  uint8_t pattern0[11];
} sfx11 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_VOLUME(127),
    ATM_CMD_M_VIBRATO_ON(31, 5),
    ATM_CMD_M_SET_TEMPO(24),
    ATM_CMD_I_NOTE_C5,
    ATM_CMD_M_DELAY_TICKS(32),
    ATM_CMD_I_STOP,
  },
};


const PROGMEM struct sfx12_data {
  uint8_t fmt;
  uint8_t pattern0[10];
} sfx12 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_VOLUME(127),
    ATM_CMD_M_ARPEGGIO_ON(204, 72),
    ATM_CMD_M_SET_TEMPO(24),
    ATM_CMD_I_NOTE_C4,
    ATM_CMD_M_DELAY_TICKS(32),
    ATM_CMD_I_STOP,
  },
};

const PROGMEM struct sfx13_data {
  uint8_t fmt;
  uint8_t pattern0[41];
} sfx13 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_VOLUME(127),
    ATM_CMD_M_SLIDE_VOL_ON(-2),
    ATM_CMD_M_SET_TEMPO(48),
    ATM_CMD_I_NOTE_G3_,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_E3,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_G4,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_C5_,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_C4,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_D4_,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_G3_,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_A4_,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_F4,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_C5,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_D4,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_A4,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_G3,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_C5,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_F4_,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_NOTE_B3,
    ATM_CMD_M_DELAY_TICKS(1),
    ATM_CMD_I_RETURN,
    ATM_CMD_I_STOP,
  },
};


const PROGMEM struct sfx14_data {
  uint8_t fmt;
  uint8_t pattern0[14];
} sfx14 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_WAVEFORM(1),
    ATM_CMD_M_SET_TEMPO(48),
    ATM_CMD_M_SET_VOLUME(1),
    ATM_CMD_I_NOTE_C4,
    ATM_CMD_M_SLIDE_VOL_ON(8),
    ATM_CMD_M_DELAY_TICKS(16),
    ATM_CMD_M_SLIDE_VOL_OFF,
    ATM_CMD_I_STOP,
  },
};

const PROGMEM struct sfx15_data {
  uint8_t fmt;
  uint8_t pattern0[15];
} sfx15 = {
  .fmt = ATM_SCORE_FMT_MINIMAL_MONO,
  .pattern0 = {
    ATM_CMD_M_SET_TEMPO(24),
    ATM_CMD_M_SET_VOLUME(0),
    ATM_CMD_M_NOTECUT_ON(0),
    ATM_CMD_M_SLIDE_VOL_ON(8),
    ATM_CMD_I_NOTE_F5,
    ATM_CMD_M_DELAY_TICKS(16),
    ATM_CMD_I_STOP,
  },
};

#endif

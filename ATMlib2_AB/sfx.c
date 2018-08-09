#ifndef SFX_H
#define SFX_H

#include <atm_synth.h>

#include "sfx.h"

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof (a) / sizeof ((a)[0]))
#endif

#ifndef NUM_PATTERNS
#define NUM_PATTERNS(struct_) (ARRAY_SIZE( ((struct_ *)0)->patterns_offset))
#endif

#ifndef DEFINE_PATTERN
#define DEFINE_PATTERN(pattern_id, values) const uint8_t pattern_id[] = values;
#endif

#define sfx0_data { \
  ATM_CMD_M_SET_TEMPO(32), \
  ATM_CMD_M_SET_VOLUME(127), \
  ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, -8), \
  ATM_CMD_I_NOTE_F6, \
  ATM_CMD_M_DELAY_TICKS(5), \
  ATM_CMD_I_NOTE_G6, \
  ATM_CMD_M_DELAY_TICKS(11), \
  ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx0_array, sfx0_data);

#define sfx1_data { \
  ATM_CMD_M_SET_TEMPO(48), \
  ATM_CMD_M_SET_VOLUME(127), \
  ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, -8), \
  ATM_CMD_M_SLIDE_ON_ADV(ATM_SYNTH_PARAM_TSP, 1, 0), \
  ATM_CMD_M_NOTECUT_ON(0), \
  ATM_CMD_I_NOTE_C5, \
  ATM_CMD_M_DELAY_TICKS(8), \
  ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx1_array, sfx1_data);

#define sfx2_data { \
    ATM_CMD_M_SET_TEMPO(48), \
    ATM_CMD_M_SET_VOLUME(127), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_PHI, -48), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, -16), \
    ATM_CMD_I_NOTE_F5, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx2_array, sfx2_data);

#define sfx3_data { \
  ATM_CMD_M_SET_TEMPO(48), \
  ATM_CMD_M_SET_VOLUME(0), \
  ATM_CMD_M_VIBRATO_ON(0, 127, 0xBF), \
  ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, 8), \
  ATM_CMD_I_NOTE_F5, \
  ATM_CMD_M_DELAY_TICKS(24), \
  ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, -8), \
  ATM_CMD_M_DELAY_TICKS(24), \
  ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx3_array, sfx3_data);

#define sfx4_data { \
    ATM_CMD_M_SET_WAVEFORM(1), \
    ATM_CMD_M_SET_TEMPO(48), \
    ATM_CMD_M_SET_VOLUME(63), \
    ATM_CMD_M_TREMOLO_ON(0, 127, 0xA2), \
    ATM_CMD_I_NOTE_C4, \
    ATM_CMD_M_DELAY_TICKS_1(48), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx4_array, sfx4_data);

#define sfx5_data { \
    ATM_CMD_M_SET_TEMPO(48), \
    ATM_CMD_M_SET_VOLUME(127), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL | FX_SLIDE_RETRIGGERED_MASK, -32), \
    ATM_CMD_I_NOTE_G6, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_M_ADD_VOLUME(-31), \
    ATM_CMD_I_NOTE_G6, \
    ATM_CMD_M_DELAY_TICKS(16), \
    ATM_CMD_M_ADD_VOLUME(-31), \
    ATM_CMD_I_NOTE_G6, \
    ATM_CMD_M_DELAY_TICKS(32), \
    ATM_CMD_M_ADD_VOLUME(-31), \
    ATM_CMD_I_NOTE_G6, \
    ATM_CMD_M_DELAY_TICKS_1(64), \
    ATM_CMD_M_ADD_VOLUME(-21), \
    ATM_CMD_I_NOTE_G6, \
    ATM_CMD_M_DELAY_TICKS(10), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx5_array, sfx5_data);

#define sfx6_data { \
    ATM_CMD_M_SET_WAVEFORM(1), \
    ATM_CMD_M_SET_TEMPO(48), \
    ATM_CMD_M_SET_VOLUME(63), \
    ATM_CMD_M_NOTECUT_ON(0), \
    ATM_CMD_I_NOTE_C4, \
    ATM_CMD_M_DELAY_TICKS(16), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx6_array, sfx6_data);

#define sfx7_data { \
    ATM_CMD_M_SET_WAVEFORM(1), \
    ATM_CMD_M_SET_TEMPO(24), \
    ATM_CMD_M_SET_VOLUME(63), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, -8), \
    ATM_CMD_I_NOTE_C4, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx7_array, sfx7_data);

#define sfx8_data { \
    ATM_CMD_M_SET_VOLUME(127), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, -8), \
    ATM_CMD_M_ARPEGGIO_ON(204, 0), \
    ATM_CMD_M_SET_TEMPO(48), \
    ATM_CMD_I_NOTE_C5, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_NOTE_C4, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx8_array, sfx8_data);

#define sfx9_data { \
    ATM_CMD_M_SET_VOLUME(127), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, -16), \
    ATM_CMD_M_VIBRATO_ON(0, 127, 0x40), \
    ATM_CMD_M_SET_TEMPO(24), \
    ATM_CMD_I_NOTE_F3, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx9_array, sfx9_data);

#define sfx10_data { \
    ATM_CMD_M_SET_VOLUME(127), \
    ATM_CMD_M_NOTECUT_ON(0), \
    ATM_CMD_M_SET_TEMPO(48), \
    ATM_CMD_I_NOTE_F5, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_C5, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_A4, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx10_array, sfx10_data);

#define sfx11_data { \
    ATM_CMD_M_SET_VOLUME(127), \
    ATM_CMD_M_VIBRATO_ON(0, 31, 5), \
    ATM_CMD_M_SET_TEMPO(24), \
    ATM_CMD_I_NOTE_C5, \
    ATM_CMD_M_DELAY_TICKS(32), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx11_array, sfx11_data);

#define sfx12_data { \
    ATM_CMD_M_SET_VOLUME(127), \
    ATM_CMD_M_ARPEGGIO_ON(204, 72), \
    ATM_CMD_M_SET_TEMPO(24), \
    ATM_CMD_I_NOTE_C4, \
    ATM_CMD_M_DELAY_TICKS(32), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx12_array, sfx12_data);

#define sfx13_data { \
    ATM_CMD_M_SET_VOLUME(127), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, -2), \
    ATM_CMD_M_SET_TEMPO(48), \
    ATM_CMD_I_NOTE_G3_, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_E3, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_G4, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_C5_, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_C4, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_D4_, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_G3_, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_A4_, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_F4, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_C5, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_D4, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_A4, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_G3, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_C5, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_F4_, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_NOTE_B3, \
    ATM_CMD_M_DELAY_TICKS(1), \
    ATM_CMD_I_RETURN, \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx13_array, sfx13_data);

#define sfx14_data { \
    ATM_CMD_M_SET_WAVEFORM(1), \
    ATM_CMD_M_SET_TEMPO(48), \
    ATM_CMD_M_SET_VOLUME(1), \
    ATM_CMD_I_NOTE_C4, \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, 8), \
    ATM_CMD_M_DELAY_TICKS(16), \
    ATM_CMD_M_SLIDE_VOL_OFF, \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx14_array, sfx14_data);

#define sfx15_data { \
    ATM_CMD_M_SET_TEMPO(24), \
    ATM_CMD_M_SET_VOLUME(0), \
    ATM_CMD_M_NOTECUT_ON(0), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, 8), \
    ATM_CMD_I_NOTE_F5, \
    ATM_CMD_M_DELAY_TICKS(16), \
    ATM_CMD_I_STOP, \
}
DEFINE_PATTERN(sfx15_array, sfx15_data);

const PROGMEM struct sfx_data {
  uint8_t voice_count;
  uint8_t pattern_count;
  uint16_t patterns_offset[16];
  uint8_t sfx0[sizeof(sfx0_array)];
  uint8_t sfx1[sizeof(sfx1_array)];
  uint8_t sfx2[sizeof(sfx2_array)];
  uint8_t sfx3[sizeof(sfx3_array)];
  uint8_t sfx4[sizeof(sfx4_array)];
  uint8_t sfx5[sizeof(sfx5_array)];
  uint8_t sfx6[sizeof(sfx6_array)];
  uint8_t sfx7[sizeof(sfx7_array)];
  uint8_t sfx8[sizeof(sfx8_array)];
  uint8_t sfx9[sizeof(sfx9_array)];
  uint8_t sfx10[sizeof(sfx10_array)];
  uint8_t sfx11[sizeof(sfx11_array)];
  uint8_t sfx12[sizeof(sfx12_array)];
  uint8_t sfx13[sizeof(sfx13_array)];
  uint8_t sfx14[sizeof(sfx14_array)];
  uint8_t sfx15[sizeof(sfx15_array)];
} sfx = {
  .voice_count = 1,
  .pattern_count = 8,
  .patterns_offset = {
    offsetof(struct sfx_data, sfx0),
    offsetof(struct sfx_data, sfx1),
    offsetof(struct sfx_data, sfx2),
    offsetof(struct sfx_data, sfx3),
    offsetof(struct sfx_data, sfx4),
    offsetof(struct sfx_data, sfx5),
    offsetof(struct sfx_data, sfx6),
    offsetof(struct sfx_data, sfx7),
  },
  .sfx0 = sfx0_data,
  .sfx1 = sfx1_data,
  .sfx2 = sfx2_data,
  .sfx3 = sfx3_data,
  .sfx4 = sfx4_data,
  .sfx5 = sfx5_data,
  .sfx6 = sfx6_data,
  .sfx7 = sfx7_data,
  .sfx8 = sfx8_data,
  .sfx9 = sfx9_data,
  .sfx10 = sfx10_data,
  .sfx11 = sfx11_data,
  .sfx12 = sfx12_data,
  .sfx13 = sfx13_data,
  .sfx14 = sfx14_data,
  .sfx15 = sfx15_data,
};

#endif

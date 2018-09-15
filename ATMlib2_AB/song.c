#ifndef SONG_H
#define SONG_H

#include <atm_synth.h>
#include <atm_cmd_constants.h>

#include "song.h"

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof (a) / sizeof ((a)[0]))
#endif

#ifndef NUM_PATTERNS
#define NUM_PATTERNS(struct_) (ARRAY_SIZE( ((struct_ *)0)->patterns_offset))
#endif

#ifndef DEFINE_PATTERN
#define DEFINE_PATTERN(pattern_id, values) const uint8_t pattern_id[] = values;
#endif

//    ATM_CMD_M_SLIDE_ON_LIMITED_ADV(ATM_SYNTH_PARAM_VOL | FX_SLIDE_RETRIGGERED_MASK, -16, -127), \

/* pattern (channel) / bytes = 46*/
#define pattern0_data { \
    ATM_CMD_M_SET_VOLUME(127), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL | FX_SLIDE_RETRIGGERED_MASK, -16), \
    ATM_CMD_M_SET_TEMPO(OSC_HZ_TO_TICKS(25)), \
    ATM_CMD_M_CALL_REPEAT(4, 7), \
    ATM_CMD_M_SET_TRANSPOSITION(-2), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_SET_TRANSPOSITION(-4), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_CALL_REPEAT(4, 6), \
    ATM_CMD_M_SET_TRANSPOSITION(-5), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_SET_TRANSPOSITION(-7), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_CALL_REPEAT(4, 7), \
    ATM_CMD_M_SET_TRANSPOSITION(-2), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_CALL_REPEAT(4, 3), \
    ATM_CMD_M_SET_TRANSPOSITION(-1), \
    ATM_CMD_M_CALL(4), \
    ATM_CMD_M_CALL_REPEAT(4, 3), \
    ATM_CMD_M_SET_LOOP_PATTERN(0), \
    ATM_CMD_I_STOP, \
  }
DEFINE_PATTERN(pattern0_array, pattern0_data);

/* pattern (channel) / bytes = 15*/
#define pattern1_data { \
    ATM_CMD_M_SET_VOLUME(48), \
    ATM_CMD_M_ARPEGGIO_ON(0x40, 0xC0), \
    ATM_CMD_M_CALL_REPEAT(5, 2), \
    ATM_CMD_M_CALL(6), \
    ATM_CMD_M_CALL(7), \
    ATM_CMD_M_SET_LOOP_PATTERN(1), \
    ATM_CMD_I_STOP, \
  }
DEFINE_PATTERN(pattern1_array, pattern1_data);

/* pattern (channel) / bytes = 1*/
#define pattern2_data { \
    ATM_CMD_I_STOP, \
  }
DEFINE_PATTERN(pattern2_array, pattern2_data);

/* pattern (channel) / bytes = 1*/
#define pattern3_data { \
    ATM_CMD_I_STOP, \
  }
DEFINE_PATTERN(pattern3_array, pattern3_data);

/* pattern (tune) / "Pattern 1" / bytes = 3*/
#define pattern4_data { \
    ATM_CMD_I_NOTE_A2, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_RETURN, \
  }
DEFINE_PATTERN(pattern4_array, pattern4_data);

/* pattern (tune) / "Pattern 2" / bytes = 9*/
#define pattern5_data { \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL | FX_SLIDE_RETRIGGERED_MASK, -2), \
    ATM_CMD_I_NOTE_A4, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_C5, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_D5, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, -2), \
    ATM_CMD_I_NOTE_E5, \
    ATM_CMD_M_DELAY_TICKS_1(52), \
    ATM_CMD_I_RETURN, \
  }
DEFINE_PATTERN(pattern5_array, pattern5_data);

/* pattern (tune) / "Pattern 3" / bytes = 11*/
#define pattern6_data { \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL | FX_SLIDE_RETRIGGERED_MASK, -2), \
    ATM_CMD_I_NOTE_A4, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_C5, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_D5, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, -2), \
    ATM_CMD_I_NOTE_E5, \
    ATM_CMD_M_DELAY_TICKS_1(44), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL | FX_SLIDE_RETRIGGERED_MASK, -2), \
    ATM_CMD_I_NOTE_D5, \
    ATM_CMD_M_DELAY_TICKS(8), \
    ATM_CMD_I_RETURN, \
  }
DEFINE_PATTERN(pattern6_array, pattern6_data);

/* pattern (tune) / "Pattern 4" / bytes = 11*/
#define pattern7_data { \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL, -2), \
    ATM_CMD_I_NOTE_C5, \
    ATM_CMD_M_DELAY_TICKS(24), \
    ATM_CMD_M_SLIDE_ON(ATM_SYNTH_PARAM_VOL | FX_SLIDE_RETRIGGERED_MASK, -2), \
    ATM_CMD_I_NOTE_D5, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_C5, \
    ATM_CMD_M_DELAY_TICKS(4), \
    ATM_CMD_I_NOTE_B4, \
    ATM_CMD_M_DELAY_TICKS(16), \
    ATM_CMD_I_NOTE_G4_, \
    ATM_CMD_M_DELAY_TICKS(16), \
    ATM_CMD_I_RETURN, \
  }
DEFINE_PATTERN(pattern7_array, pattern7_data);

const PROGMEM struct score_data {
  uint8_t voice_count;
  uint8_t pattern_count;
  uint16_t patterns_offset[8];
  uint8_t pattern0[sizeof(pattern0_array)];
  uint8_t pattern1[sizeof(pattern1_array)];
  uint8_t pattern2[sizeof(pattern2_array)];
  uint8_t pattern3[sizeof(pattern3_array)];
  uint8_t pattern4[sizeof(pattern4_array)];
  uint8_t pattern5[sizeof(pattern5_array)];
  uint8_t pattern6[sizeof(pattern6_array)];
  uint8_t pattern7[sizeof(pattern7_array)];
} score = {
  .voice_count = 2,
  .pattern_count = 8,
  .patterns_offset = {
    offsetof(struct score_data, pattern0),
    offsetof(struct score_data, pattern1),
    offsetof(struct score_data, pattern2),
    offsetof(struct score_data, pattern3),
    offsetof(struct score_data, pattern4),
    offsetof(struct score_data, pattern5),
    offsetof(struct score_data, pattern6),
    offsetof(struct score_data, pattern7),
  },
  .pattern0 = pattern0_data,
  .pattern1 = pattern1_data,
  .pattern2 = pattern2_data,
  .pattern3 = pattern3_data,
  .pattern4 = pattern4_data,
  .pattern5 = pattern5_data,
  .pattern6 = pattern6_data,
  .pattern7 = pattern7_data,
};

#endif

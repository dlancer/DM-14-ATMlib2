
#ifdef __AVR__
#include <avr/pgmspace.h>
#else
#include <dummy_pgmspace.h>
#endif

extern const PROGMEM struct score_data score;

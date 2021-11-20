#ifndef HANK_CFG
#define HANK_CFG


#ifdef RGB_LED_OFF_DEFAULT
#undef RGB_LED_OFF_DEFAULT
#endif

#ifdef USE_MOMENTARY_MODE
#undef USE_MOMENTARY_MODE
#endif

#ifdef USE_SIMPLE_UI
#undef USE_SIMPLE_UI
#endif

// #ifdef USE_RAMP_CONFIG
// #undef USE_RAMP_CONFIG
// #endif

#define DISABLE_RAMP_STYLE_TOOGLE

#ifdef USE_MOMENTARY_MODE
#undef USE_MOMENTARY_MODE
#endif

#ifdef USE_VERSION_CHECK
#undef USE_VERSION_CHECK
#endif

#define USE_UNLOCK_TO_OFF
#define SIMPLE_UI_ACTIVE 0

#define DEFAULT_THERM_CEIL 60

#define RGB_LED_OFF_DEFAULT 0x26  // high, voltage
#define RGB_LED_LOCKOUT_DEFAULT 0x19  // low, voltage

#define RAMP_STYLE 0
/*
 * 0: R
 * 1: RG
 * 2:  G
 * 3:  GB
 * 4:   B
 * 5: R B
 * 6: RGB
 * 7: disco
 * 8: rainbow
 * 9: voltage
 */
// double click while on goes to full-power turbo, not ramp ceiling
#define DEFAULT_2C_STYLE 1

// adds a runtime option to switch between automatic memory (default)
// and manual memory (only available if compiled in)
// (manual memory makes 1-click-from-off start at the same level each time)
// (the level can be set explicitly with 10 clicks from on,
// or the user can go back to automatic with 10H)
#define USE_MANUAL_MEMORY
// if enabled, user can use "hybrid memory"
// The light will use automatic or manual memory level, depending on how long
// the light was off.  Short off = automatic, long off = manual.
// This also remaps 10C/10H:
// - 10C toggles manual mem on/off at current level.
// - 10H configures the timer value.
#define USE_MANUAL_MEMORY_TIMER
#define DEFAULT_MANUAL_MEMORY_TIMER 5 //Keep automatic level 5mn
#define DEFAULT_MANUAL_MEMORY 1
//#define TINT_DEFAULT 254 //1=Ch1 ; 254=Ch2; 128=Both channels (default)
//#define DEFAULT_MANUAL_MEMORY_TINT TINT_DEFAULT // Tint default when manual memory is enabled : 1=Ch1 ; 254=Ch2; 128=Both channels (default)

// enable a mode for locking the light for safe carry
#define USE_LOCKOUT_MODE
#define DEFAULT_AUTOLOCK_TIME 10
// should lockout mode function as a momentary moon mode?
#define USE_MOON_DURING_LOCKOUT_MODE
// add an optional setting to lock the light after being off for a while
#define USE_AUTOLOCK



// has two channels of independent LEDs
//#define USE_TINT_RAMPING
// ... but it doesn't make sense to ramp between; only toggle
//#define TINT_RAMP_TOGGLE_ONLY
//#define TINT_RAMP_TOGGLE_TRIPLE

#endif  // ifndef HANK_CFG

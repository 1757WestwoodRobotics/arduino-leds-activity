/**
 * Arduino LEDs Activity
 * by Larry Tseng 9/10/17
 * 
 * Activity
 * Uses the FastLED library: https://github.com/FastLED/FastLED.
 * 
 */

#include <FastLED.h>          // Includes the FastLED library

// Configuration information for LEDs (Macros/Constants)
#define DATA_PIN    6         
#define COLOR_ORDER GRB       
#define CHIPSET     WS2812    
#define NUM_LEDS    24        

CRGB leds[NUM_LEDS];          // An array of colors

void setup() {
  FastLED.delay(3000);        // delay
  FastLED.addLeds<CHIPSET, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS); // Initializes leds
  fill_solid(leds, NUM_LEDS, CRGB::White); // Fills the entire LED ring with white light
  FastLED.show(); // Display the LED change
  FastLED.delay(30);          // delay
}

void loop() {
  /** 
   *  BEGIN EDITING HERE!
   */

  // Fill the entire LED with a single color:
  // fill_solid(leds, NUM_LEDs, CRGB::color);

  // Fill the entire LED with a rainbow of colors:
  // fill_rainbow(leds, NUM_LEDS, initialhue, deltahue);
   
  // Change color of a single LED:
  // leds[i] = CRGB::color;
  // leds[i] = CSHV(100, 100, 100);

  // Show LED changes:
  // FastLED.show();
  // delay(100);
  
  /**
   * END EDITING HERE!
   */
}

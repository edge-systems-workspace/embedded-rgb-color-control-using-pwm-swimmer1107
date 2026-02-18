/**
 * @file RGB_LED_Color_Cycle.ino
 * @brief RGB LED color sequence using Arduino.
 * 
 * This program cycles an RGB LED through multiple colors:
 * Red, Green, Blue, Brown (Red+Green), Purple (Red+Blue),
 * Cyan (Green+Blue), and White (All colors).
 * 
 * @author Pulkit Kulshreshtha
 * @date 18 Feb 2026
 */
// Pin definitions for RGB LED
int red_led = 10;    ///< Red LED connected to digital pin 10
int green_led = 9;   ///< Green LED connected to digital pin 9
int blue_led = 11;   ///< Blue LED connected to digital pin 11

/**
 * @brief Initializes LED pins as output.
 * 
 * This function runs once when the Arduino starts.
 * It sets all RGB pins to OUTPUT mode.
 */
void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
}


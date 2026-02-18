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

/**
 * @brief Main loop to cycle RGB colors.
 * 
 * This function continuously runs and changes the LED colors
 * every 1 second using digitalWrite() and delay().
 */
void loop() {

  /// Display Red
  digitalWrite(red_led, HIGH);
  digitalWrite(green_led, LOW);
  digitalWrite(blue_led, LOW);
  delay(1000);

/// Display Green
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, HIGH);
  digitalWrite(blue_led, LOW);
  delay(1000);

  /// Display Blue
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, LOW);
  digitalWrite(blue_led, HIGH);
  delay(1000);

  /// Display Brown (Red + Green)
  digitalWrite(red_led, HIGH);
  digitalWrite(green_led, HIGH);
  digitalWrite(blue_led, LOW);
  delay(1000);

  /// Display Purple (Red + Blue)
  digitalWrite(red_led, HIGH);
  digitalWrite(green_led, LOW);
  digitalWrite(blue_led, HIGH);
  delay(1000);

  /// Display Cyan (Green + Blue)
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, HIGH);
  digitalWrite(blue_led, HIGH);
  delay(1000);

  /// Display White (Red + Green + Blue)
  digitalWrite(red_led, HIGH);
  digitalWrite(green_led, HIGH);
  digitalWrite(blue_led, HIGH);
  delay(1000); 
}


/* Lab 5 - NMD 211
 *  Chris Anderson
 *  October 9, 2020
 *  
 *  Blink LED
 *  
 *  Project Goals:
 *    - Learn how to write and upload code to the Arduino.
 *    - Turn an LED light on and of using the Arduino.
 * 
 */
 
 // global variables
int pinIn = 8;    // pin powering the LED
int LEDon = 1000;   // time the LED stays on
int LEDoff = 1000;    // time the LED stays off

void setup() {

  pinMode(pinIn, OUTPUT);    // set pin 8 to put out current

}

void loop() {

  // turn LED on
  digitalWrite(pinIn, HIGH);  // write to pin pinIn with full power

  // wait
  delay(LEDon);  // wait 1 second
  
  // turn LED off
  digitalWrite(pinIn, LOW);   // wrote to pin pinIn with no power
  
  // wait
  delay(LEDoff);  // wait 1 second
  
}

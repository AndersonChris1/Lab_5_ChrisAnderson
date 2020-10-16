/* Lab 5 - NMD 211
 *  Chris Anderson
 *  October 9, 2020
 *  
 *  Morse Code
 *  
 *  Write the message "sphinx of black quartz judge my vow" in Morse Code.
 *    - Dots (short length light) - 0.5 seconds
 *    - Dash (long length light) - 1.5 seconds
 *    - Intra-character space (small space) - 0.5 seconds
 *    - Inter-character space (medium space) - 1.5 seconds
 *    - Word space (big space) - 3.5 seconds
 *    - Uses every letter of the alphabet
 * 
 */
 
 // global variables
int pinIn = 8;    // pin powering the LED
int dotTime = 300;    // time a dot stays on
int dashTime = 1200;    // time a dash stays on
int smallSpace = 300;   // time between individual dots and dashes within a letter 
int medSpace = 1200;   // time between letters
int bigSpace = 2100;    // time between words

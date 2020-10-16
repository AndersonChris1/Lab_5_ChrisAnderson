 /* setup and loop functions need to be placed after the Letter class has been defined
   otherwise the program will return errors, hence their placement in a tab named _main
*/

// define the letter objects that will be called in loop
Letter myLetters[29] = {
  Letter(19, 1),
  Letter(16, 1),
  Letter(8, 1),
  Letter(9, 1),
  Letter(14, 1),
  Letter(24, 2),
  Letter(15, 1),
  Letter(6, 2),
  Letter(2, 1),
  Letter(12, 1),
  Letter(1, 1),
  Letter(3, 1),
  Letter(11, 2),
  Letter(17, 1),
  Letter(1, 1),
  Letter(21, 1),
  Letter(18, 1),
  Letter(20, 1),
  Letter(26, 2),
  Letter(10, 1),
  Letter(21, 1),
  Letter(4, 1),
  Letter(7, 1),
  Letter(5, 2),
  Letter(13, 1),
  Letter(25, 2),
  Letter(22, 1),
  Letter(15, 1),
  Letter(23, 2)
};

void setup() {

  pinMode(pinIn, OUTPUT);    // set pin 8 to put out current

}

void loop() {
  for (int i = 0; i < 29; i ++) {
    myLetters[i].blinkLetter();
  }


}

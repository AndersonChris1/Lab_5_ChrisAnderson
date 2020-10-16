class Letter {
  private:
    // these variables are only visible to the object
    int letterNum;
    int space;
    
  public:
    // these methods are visible to the entire program
    Letter(int letterNum, int space) {
      // class constructor
      this->letterNum = letterNum;
      this->space = space;
    }

    void blinkLetter() {
      // method that selects the letter that the arduino blinks out
      switch (letterNum) {
        case 1:   // A
          dot(0);
          dash(space);
          break;
        case 2:   // B
          dash(0);
          dot(0);
          dot(0);
          dot(space);
          break;
        case 3:   // C
          dash(0);
          dot(0);
          dash(0);
          dot(space);
          break;
        case 4:   // D
          dash(0);
          dot(0);
          dot(space);
          break;
        case 5:   // E
          dot(space);
          break;
        case 6:   // F
          dot(0);
          dot(0);
          dash(0);
          dot(space);
          break;
        case 7:   // G
          dash(0);
          dash(0);
          dot(space);
          break;
        case 8:   // H
          dot(0);
          dot(0);
          dot(0);
          dot(space);
          break;
        case 9:   // I
          dot(0);
          dot(space);
          break;
        case 10:  // J
          dot(0);
          dash(0);
          dash(0);
          dash(space);
          break;
        case 11:  // K
          dash(0);
          dot(0);
          dash(space);
          break;
        case 12:  // L
          dot(0);
          dash(0);
          dot(0);
          dot(space);
          break;
        case 13:  // M
          dash(0);
          dash(space);
          break;
        case 14:  // N
          dash(0);
          dot(space);
          break;
        case 15:  // O
          dash(0);
          dash(0);
          dash(space);
          break;
        case 16:  // P
          dot(0);
          dash(0);
          dash(0);
          dot(space);
          break;
        case 17:  // Q
          dash(0);
          dash(0);
          dot(0);
          dash(space);
          break;
        case 18:  // R
          dot(0);
          dash(0);
          dot(space);
          break;
        case 19:  // S
          dot(0);
          dot(0);
          dot(space);
          break;
        case 20:  // T
          dash(space);
          break;
        case 21:  // U
          dot(0);
          dot(0);
          dash(space);
          break;
        case 22:  // V
          dot(0);
          dot(0);
          dot(0);
          dash(space);
          break;
        case 23:  // W
          dot(0);
          dash(0);
          dash(space);
          break;
        case 24:  // X
          dash(0);
          dot(0);
          dot(0);
          dash(space);
          break;
        case 25:  // Y
          dash(0);
          dot(0);
          dash(0);
          dash(space);
          break;
        case 26:  // Z
          dash(0);
          dash(0);
          dot(0);
          dot(space);
          break;
        default:
          // if letterNum doesn't match 1 through 26, nothing happens
          break;
      }
    }
    void dot(int mySpace) {
      // method displays an individual dot
      digitalWrite(pinIn, HIGH);    // turn on LED
      delay(dotTime);               // wait for length of dot
      digitalWrite(pinIn, LOW);     // turn off LED
      switch (mySpace) {
        // switch case determines how long the space is between this dot and the next dot/dash
        case 0:
          delay(smallSpace);          // space for dots between characters
          break;
        case 1:
          delay(medSpace);            // space for dots at the end of characters
          break;
        case 2:
          delay(bigSpace);            // space for dots at the end of words
          break;
      }
    }

    void dash(int mySpace) {
      // method displays an individual dash
      digitalWrite(pinIn, HIGH);    // turn on LED
      delay(dashTime);              // wait for length of dash
      digitalWrite(pinIn, LOW);     // turn off LED
      switch (mySpace) {
        // switch case determines how long the space is between this dot and the next dot/dash
        case 0:
          delay(smallSpace);          // space for dashes between characters
          break;
        case 1:
          delay(medSpace);            // space for dashes at the end of characters
          break;
        case 2:
          delay(bigSpace);            // space for dashes at the end of words
          break;
      }
    }
};

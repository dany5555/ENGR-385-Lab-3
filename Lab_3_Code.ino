// Declaring variables and assigning them to their respective pins on the Arduino.
// The variable names represent the letters used on the display's schematics.
int a = 1;
int b = 13;
int c = 10;
int d = 8;
int e = 7;
int f = 2;
int g = 11;
int dp = 9;

// Declaring variables and assigning them to their respective pins on the Arduino.
// Pads 1-4 will serve as outputs, while pads 5-8 will serve as inputs.
int pad1 = 14;
int pad2 = 15;
int pad3 = 16;
int pad4 = 17;
int pad5 = 18;
int pad6 = 19;
int pad7 = 3;
int pad8 = 4;

// Variable that holds status of the pin being read.
int value1;

void setup() {
  
  // Setting up outputs and inputs.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);

  pinMode(pad1, OUTPUT);
  pinMode(pad2, OUTPUT);
  pinMode(pad3, OUTPUT);
  pinMode(pad4, OUTPUT);

  digitalWrite(pad1, LOW);
  digitalWrite(pad2, LOW);
  digitalWrite(pad3, LOW);
  digitalWrite(pad4, LOW);

  pinMode(pad5, INPUT);
  pinMode(pad6, INPUT);
  pinMode(pad7, INPUT);
  pinMode(pad8, INPUT);
}

void loop() {

  // Arrays that hold the states of the pad pins.
  int array1[4] = {pad1, pad2, pad3, pad4};
  int array2[4] = {pad5, pad6, pad7, pad8};

  // Loop through the pad matrix.
  for (int i = 0; i < 4; i ++) {
    for (int j = 0; j < 4; j ++) {
      digitalWrite(array1[i], HIGH);
      if (i > 0) {
        digitalWrite(array1[i - 1], LOW);
      } else {
        digitalWrite(array1[3], LOW);
      }
      value1 = digitalRead(array2[j]);
      if (i == 0 && j == 0 && value1 == HIGH) {
        displayOne();
        clearAll();

      } else if (i == 0 && j == 1 && value1 == HIGH) {
        clearAll();
        displayTwo();
      } else if (i == 0 && j == 2 && value1 == HIGH) {
        clearAll();
        displayThree();
      } else if (i == 1 && j == 0 && value1 == HIGH) {
        clearAll();
        displayFour();
      } else if (i == 1 && j == 1 && value1 == HIGH) {
        clearAll();
        displayFive();
      } else if (i == 1 && j == 2 && value1 == HIGH) {
        clearAll();
        displaySix();
      } else if (i == 2 && j == 0 && value1 == HIGH) {
        clearAll();
        displaySeven();
      } else if (i == 2 && j == 1 && value1 == HIGH) {
        clearAll();
        displayEight();
      } else if (i == 2 && j == 2 && value1 == HIGH) {
        clearAll();
        displayNine();
      } else if (i == 3 && j == 1 && value1 == HIGH) {
        clearAll();
        displayZero();
      } else {
        clearAll();
      }

      clearAll();

    }

    clearAll();
  }










}


// These funtions display each different number on the display.
void displayOne() {
  // Display a 1.
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}

void displayTwo() {
  // Display a 2.
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void displayThree() {
  // Display a 1.
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void displayFour() {
  // Display a 1.
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void displayFive() {
  // Display a 1.
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void displaySix() {
  // Display a 1.
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void displaySeven() {
  // Display a 1.
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}

void displayEight() {
  // Display a 1.
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void displayNine() {
  // Display a 1.
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void displayZero() {
  // Display a 1.
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}

// This function resets all pins to LOW.
void clearAll() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}


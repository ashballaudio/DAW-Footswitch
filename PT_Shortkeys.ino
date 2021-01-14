#include <Keyboard.h>
void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT_PULLUP);
pinMode(3,INPUT_PULLUP);
pinMode(4,INPUT_PULLUP);
pinMode(5,INPUT_PULLUP);
pinMode(6,INPUT_PULLUP);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Keyboard.begin();
  if (digitalRead(2) == 0) {
    Keyboard.press(227); // 3 digit number represents key (i.e. 227 = Numeric 3)
    delay(200);
    Keyboard.releaseAll();
  }
  else if (digitalRead(3) == 0) {
    Keyboard.press(234); // Numeric 0
    delay(200);
    Keyboard.releaseAll();
  }
  else if (digitalRead(4) == 0) {
    Keyboard.press(176); // Return Key
    delay(200);
    Keyboard.releaseAll();
  }
  else if (digitalRead(5) == 0) {
    Keyboard.press(229); // Numeric 5
    delay(200);
    Keyboard.releaseAll();
  }
  else if (digitalRead(6) == 0) {
    Keyboard.press(230); // Numeric 6
    delay(200);
    Keyboard.releaseAll();
  }
}

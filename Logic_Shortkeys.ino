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
    Keyboard.press('r'); // Key press R for record
    delay(200);
    Keyboard.releaseAll();
  }
  else if (digitalRead(3) == 0) {
    Keyboard.press(32); // Key press Space Bar for start/stop
    delay(200);
    Keyboard.releaseAll();
  }
  else if (digitalRead(4) == 0) {
    Keyboard.press(176); // Key press Return to go back to beginning of session or confirm delete clip
    delay(200);
    Keyboard.releaseAll();
  }
  else if (digitalRead(5) == 0) {
    Keyboard.press(178); // Key press Back Space to delete last clip
    delay(200);
    Keyboard.releaseAll();
  }
   else if (digitalRead(6) == 0) {
    Keyboard.press('k'); // Key press K to toggle on/off metronome
    delay(200);
    Keyboard.releaseAll();
  }
}

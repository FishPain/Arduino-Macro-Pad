#include <Keyboard.h>

// for windows / linux
// char ctrlKey = KEY_LEFT_CTRL;
// for mac
char ctrlKey = KEY_LEFT_GUI;


void setup() {
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  // Contorl C
  if (digitalRead(14) == LOW) {
    Keyboard.press(ctrlKey);
    delay(100);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
  }
  
  // Control V
  if (digitalRead(15) == LOW) {
    Keyboard.press(ctrlKey);
    delay(100);
    Keyboard.press('v');
    delay(100);
    Keyboard.releaseAll();
  }
  
  // Open stack overflow
  if (digitalRead(16) == LOW) {
    delay(100);
  }
  
}

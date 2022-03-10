#include <Keyboard.h>

// mac
  //char ctrlKey = KEY_LEFT_GUI;

// windows
char ctrlKey = KEY_LEFT_CTRL;

int C_KEY_PIN = 15;
int V_KEY_PIN = 14;
int OTHER_KEY_PIN = 7;

void setup() {
  
  pinMode(C_KEY_PIN, INPUT_PULLUP);
  pinMode(V_KEY_PIN, INPUT_PULLUP);
  pinMode(OTHER_KEY_PIN, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  // Contorl C
  if (digitalRead(C_KEY_PIN) == LOW) {
    Keyboard.press(ctrlKey);
    delay(100);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
  }
  
  // Control V
  if (digitalRead(V_KEY_PIN) == LOW) {
    Keyboard.press(ctrlKey);
    delay(100);
    Keyboard.press('v');
    delay(100);
    Keyboard.releaseAll();
  }
  
  // Open stack overflow
  if (digitalRead(OTHER_KEY_PIN) == LOW) {
    delay(100);
  }
  
}

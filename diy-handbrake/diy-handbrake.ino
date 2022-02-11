#include <Joystick.h>

Joystick_ Joystick;

void setup() {
  pinMode(A0, INPUT);
  Joystick.begin();
}

void loop() {
  if (analogRead(A0) > 250) {
    Joystick.pressButton(0);
  } else {
    Joystick.releaseButton(0);
  }
}

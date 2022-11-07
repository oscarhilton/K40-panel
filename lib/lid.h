#include "../config.h"

void lidSetup() {
  pinMode(LID_SWITCH, INPUT); // Lid switch
  Serial.println("✓ Lid setup completed.");
}

boolean isLidSafe() {
  return digitalRead(LID_SWITCH) == LOW; // button is on/off switch
}
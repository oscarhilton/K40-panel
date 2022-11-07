#include "../config.h"

void switchSetup()
{
  pinMode(LID_SWITCH, INPUT); // Lid switch
  Serial.println("✓ Switch setup completed.");
}

boolean isSwitchOn()
{
  return digitalRead(LASER_SWITCH) == HIGH; // button is on/off switch
}
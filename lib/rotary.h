#include "../config.h"

int rotaryCounter = 0;
int aState;
int aLastState;

void rotarySetup()
{
  pinMode(ROTARY_PIN_A, INPUT);
  pinMode(ROTARY_PIN_B, INPUT);
  pinMode(ROTARY_SWITCH, INPUT);
  // Reads the initial state of the ROTARY_PIN_A
  aLastState = digitalRead(ROTARY_PIN_A);
}

void rotaryLoop()
{
  // Serial.println("Switch State:");
  // Serial.println(digitalRead(ROTARY_SWITCH));
  aState = digitalRead(ROTARY_PIN_A); // Reads the "current" state of the ROTARY_PIN_A

  if (!digitalRead(ROTARY_SWITCH))
  {
    Serial.println("BUTTON PUSH!");
  }

  // If the previous and the current state of the ROTARY_PIN_A are different, that means a Pulse has occured
  if (aState != aLastState)
  {
    // If the ROTARY_PIN_B state is different to the ROTARY_PIN_A state, that means the encoder is rotating clockwise
    if (digitalRead(ROTARY_PIN_B) != aState)
    {
      rotaryCounter++;
    }
    else
    {
      rotaryCounter--;
    }
    Serial.print("Position: ");
    Serial.print(rotaryCounter);
    Serial.println(rotaryCounter % 5);
  }
  aLastState = aState; // Updates the previous state of the ROTARY_PIN_A with the current state
}
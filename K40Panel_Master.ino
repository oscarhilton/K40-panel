#include "config.h"
#include "lib/lcd.h"
#include "lib/view.h"
#include "lib/lid.h"
#include "lib/thermal.h"
#include "lib/power.h"
#include "lib/water.h"
#include "lib/switch.h"

boolean laserIsSafe = false;

void setup() {
  Serial.begin(SERIAL_RATE);
  Serial.println("STARTING");
  lidSetup();
  switchSetup();
  thermalSetup();
  LCDSetup();
  waterSetup();
}

boolean checkIfPassAllSafetyChecks() {
  return isSwitchOn() && isLidSafe() && isTheTempCorrect() && isPowerSafe() && isWaterFlowing();
}

void displaySafetyIcons() {
  if (!isSwitchOn())
    printToLCD("X Switch is turned off.");
  if (!isLidSafe())
    printToLCD("X Lid is open!");
  if (!isTheTempCorrect())
    printToLCD("X Check temperature.");
  if (!isPowerSafe())
    printToLCD("X Power dangerous to laser.");
  if (!isWaterFlowing())
    printToLCD("X Check water pump is working.");
}

void loop() {
    printToLCD("Good to go!");
    displaySafetyIcons();
}

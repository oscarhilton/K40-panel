#include "config.h"
#include "lib/lcd.h"
#include "lib/view.h"
#include "lib/lid.h"
#include "lib/thermal.h"
#include "lib/power.h"
#include "lib/water.h"
#include "lib/switch.h"
#include "lib/rotary.h"

void setup() {
  Serial.begin(SERIAL_RATE);
  Serial.println("STARTING");

  // Ready
  pinMode(READY_PIN, OUTPUT);
  pinMode(ALARM_LID, OUTPUT);
  pinMode(ALARM_TEMP, OUTPUT);
  pinMode(ALARM_WATER, OUTPUT);
  pinMode(POWER_LEVEL, INPUT);

  lidSetup();
  switchSetup();
  thermalSetup();
  LCDSetup();
  waterSetup();
  rotarySetup();
}

boolean checkIfPassAllSafetyChecks() {
  return isSwitchOn() && isLidSafe() && isTheTempCorrect() && isPowerSafe() && isWaterFlowing();
}

void displaySafetyIcons() {
  digitalWrite(ALARM_LID, !isLidSafe());
  digitalWrite(ALARM_TEMP, !isTheTempCorrect());
  digitalWrite(ALARM_POWER, !isPowerSafe());
  digitalWrite(ALARM_WATER, !isWaterFlowing());
  digitalWrite(READY_PIN, checkIfPassAllSafetyChecks());
}

void loop() {
  printToLCD(String(getCurrentTemperature()) + 'C');
  displaySafetyIcons();
  digitalWrite(LASER_ACTIVE, checkIfPassAllSafetyChecks());
  Serial.println(getPercentage());
  Serial.println(isPowerSafe());
}

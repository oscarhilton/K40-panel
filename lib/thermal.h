#include "../config.h"
#include <OneWire.h>
#include <DallasTemperature.h>

OneWire oneWire(TEMP_ONE_WIRE_PIN);
DallasTemperature sensors(&oneWire);

void thermalSetup()
{
  sensors.begin();
  Serial.println("✓ Temperature setup completed.");
}

float getCurrentTemperature() {
  sensors.requestTemperatures();
  return sensors.getTempCByIndex(0);
}

boolean isTheTempCorrect()
{
  float currentTemp = getCurrentTemperature();
  return !(currentTemp >= MAX_WATER_TEMP) && !(currentTemp <= MIN_WATER_TEMP);
}

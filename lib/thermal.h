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

boolean isTheTempCorrect()
{
  sensors.requestTemperatures();
  float currentTemp = sensors.getTempCByIndex(0);
  Serial.println(currentTemp);
  return !(currentTemp >= MAX_WATER_TEMP || currentTemp <= MIN_WATER_TEMP);
}

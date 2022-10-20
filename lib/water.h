#include "../config.h"

int flowRate = 0;

boolean waterSetup()
{
  Serial.println("✓ Water flow rate setup completed.");
}

boolean isWaterFlowing()
{
  return flowRate > MIN_FLOW_RATE;
}
void powerSetup()
{
  pinMode(LASER_ACTIVE, OUTPUT); // laser active pin
}

float getPercentage()
{
  float v = analogRead(POWER_LEVEL) / 1024.0 * 5.0; // in volts
  return v / 5 * 100;
}

boolean isPowerSafe() {
  return !(getPercentage() > 50.0);
}
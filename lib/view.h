#include "rotary.h"
// pages
#define HOME 1

void handleCurrentView() {
  int currentPage = rotaryLoop();

  switch(currentPage) {
    case HOME:
      Serial.print("Home");
      break;
    default:
      return;
  }
}
// pages
#define HOME 1

void displayView() {
  Serial.print("Home");
}

void handleCurrentView(int currentPage) {
  switch(currentPage) {
    case HOME:
      displayView();
      break;
    default:
      return;
  }
}
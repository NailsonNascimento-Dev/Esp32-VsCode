#include <Arduino.h>

void setup() {
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  Serial.begin(115200);
  
}

void loop() {

  Serial.println("ESP32 Visual Studio Code!!!");

  digitalWrite(2, HIGH);
  delay(555);
  digitalWrite(2, LOW);
  delay(300);
}
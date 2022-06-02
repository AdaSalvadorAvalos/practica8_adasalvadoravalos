#include <Arduino.h>


void setup() {
  Serial.begin(9600);
  Serial2.begin(9600);
  Serial.println("Empezamos la comunicacion");
}


void loop() {
  while (Serial.available()) {
    Serial2.print(char(Serial.read()));
  }
  while (Serial2.available()) {
    Serial.print(char(Serial2.read()));
  }
}

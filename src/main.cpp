#include <Arduino.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.begin(9600);
  Serial.println("Empezamos la comunicacion");
}


void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available()) {
    Serial2.print(char(Serial.read()));
  }
  while (Serial2.available()) {
    Serial.print(char(Serial2.read()));
  }
}
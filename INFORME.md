## Práctica 8

## Materiales
- ESP32

## Presentación
En esta práctica vemos como si la ESP32  está bien conectado entonces podremos escribir por la terminal.

## Explicación código (con comentarios que explican el funcionamiento línea a línea): 

```
#include <Arduino.h>


void setup() {
  Serial.begin(9600); //Establece la velocidad de datos en bits por segundo para la transmisión de datos en serie
  Serial2.begin(9600); //Establece la velocidad de datos en bits por segundo para la transmisión de datos en serie
  Serial.println("Empezamos la comunicacion"); //muestra por la terminal que está listo
}


void loop() {
  // bucle infinito
  while (Serial.available()) { //mientras haya bytes listos para leer por el puerto en serie
    Serial2.print(char(Serial.read())); //los leerá
  }
  while (Serial2.available()) {
    Serial.print(char(Serial2.read()));
  }
}

```

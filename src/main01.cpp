#include <Arduino.h>

// variáveis globais
int pinMotor = 7;
int pinPot = A0;
float motor;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  motor = analogRead(pinPot);
  analogWrite(pinMotor, motor);
  Serial.print("Volt: ");
  Serial.print(motor);
  Serial.println(" miliV");
 // delay(100);
}
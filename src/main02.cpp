#include <Arduino.h>


// variáveis globais e bibliotecas

#include "Servo.h"

int pinPot = A0;
int pinServo = 6;
int valorMotor = 0;
int valorPot;


void setup() {
  // put your setup code here, to run once:
  motorServo.attach(pinServo);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorPot = analogRead(pinPot);
  valorMotor = map(valorPot,0,1023,0,180);
  motorServo.write(valorMotor);
  Serial.println(valorMotor);
  delay(100);
}
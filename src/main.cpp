#include <Arduino.h>
#define REDPIN 10
#define YELLOWPIN 11
#define GREENPIN 12

// put function declarations here:
void redToGreen();
void greenToRed();

void setup() {
  // put your setup code here, to run once:
  redToGreen();
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
void redToGreen() {
    pinMode(REDPIN, HIGH);
    delay(10000);
    pinMode(YELLOWPIN, HIGH);
    delay(3000);
    pinMode(REDPIN, LOW);
    pinMode(YELLOWPIN, LOW);
    pinMode(GREENPIN, HIGH);
}

void greenToRed(){
    pinMode(GREENPIN, HIGH);
    delay(10000);
    pinMode(GREENPIN, LOW);
    pinMode(YELLOWPIN, HIGH);
    delay(3000);
    pinMode(YELLOWPIN, LOW);
    pinMode(GREENPIN, HIGH);
}
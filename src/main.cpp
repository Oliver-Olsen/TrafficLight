#include <Arduino.h>
#define REDPIN 10
#define YELLOWPIN 11
#define GREENPIN 12

// put function declarations here:
void redToGreen();
void greenToRed();

void setup() {
  Serial.begin(9600); //Begins serial communication
  
  //Defines pinmodes
  pinMode(REDPIN, OUTPUT); 
  pinMode(YELLOWPIN, OUTPUT); 
  pinMode(GREENPIN, OUTPUT); 

  //Turns the red light on, and the others off
  digitalWrite(REDPIN, HIGH);
  digitalWrite(YELLOWPIN, LOW);
  digitalWrite(GREENPIN, LOW);
}

void loop() {
  delay(5000); //Light is red for five seconds 
  redToGreen(); //Turns the red light green
  delay(5000); //Light is green for five seconds
  greenToRed(); //Turns the green light red
}

// put function definitions here:
void redToGreen() {
  
}

void greenToRed(){

}
#include <Arduino.h>
// Static variables that NEVER changes
#define REDPIN 10
#define YELLOWPIN 11
#define GREENPIN 12

// function declarations:
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
  Serial.println("STOP!"); 
}



void loop() {
  delay(5000); //Light is red for five seconds 
  redToGreen(); //Turns the red light green
  delay(5000); //Light is green for five seconds
  greenToRed(); //Turns the green light red
}


// Transistions the traffic light from red to green, by using various delays
void redToGreen() {
  // Red light is already set at the end of greenToRed()
    digitalWrite(YELLOWPIN, HIGH);
    Serial.println("Get Ready!"); 
    delay(2000);

    digitalWrite(REDPIN, LOW);
    digitalWrite(YELLOWPIN, LOW);
    digitalWrite(GREENPIN, HIGH);
    Serial.println("GO!"); 
}

// Transistions the traffic light from green to red, by using various delays
void greenToRed(){
    // Sets the green to low imidiately, since green has already been lit for a duration.
    digitalWrite(GREENPIN, LOW);
    digitalWrite(YELLOWPIN, HIGH);
    Serial.println("Slow Down!"); 
    delay(2000);

    digitalWrite(YELLOWPIN, LOW);
    digitalWrite(REDPIN, HIGH);
    Serial.println("STOP!"); 
}
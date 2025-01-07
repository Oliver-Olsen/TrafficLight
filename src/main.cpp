//Oliver Olsen s205443
//Nils Wulff   s223968


//2a: 
//The modulus (%) operator outputs what is left over when the left side is cleanly divided by the number on the right. 
//This means that 42 % 5 is 2, since 40 can be cleanly divided by 5 and 42 - 40 = 2
//2b: 

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
    digitalWrite(YELLOWPIN, HIGH); //Turns on the yellow light
    Serial.println("Get Ready!"); //Outputs text
    delay(2000); //Waits for 2 seconds before turning the light green

    digitalWrite(REDPIN, LOW); //Turns off the red light
    digitalWrite(YELLOWPIN, LOW); //Turns off the yellow light
    digitalWrite(GREENPIN, HIGH); //Turns on the green light
    Serial.println("GO!"); //Outputs text
}

// Transistions the traffic light from green to red, by using various delays
void greenToRed(){
    // Sets the green to low imidiately, since green has already been lit for a duration.
    digitalWrite(GREENPIN, LOW); //Turns off the green light
    digitalWrite(YELLOWPIN, HIGH); //Turns on the yellow light
    Serial.println("Slow Down!"); //Outputs text
    delay(2000); //Waits for 2 seconds before turning the light red

    digitalWrite(YELLOWPIN, LOW); //Turns off the yellow light
    digitalWrite(REDPIN, HIGH); //Turns on the red light
    Serial.println("STOP!"); //Outputs text
}

//For 2c and 2d check binary counter code
/*
  PFI - maquina de pizzas
*/

//Includes 
#include "submodules/Servo/src/Servo.h" //Servo Library can be used for Firgelli Mini Linear Actuators

//Linear Actuator Pins
const int LINEARPIN_BUTTON = 6;   //Linear Actuator 1 on Digital Pin 6 (la1_dp6)

//Digital Input Pins 
const int BUTTON1_PIN = 2;     //Button 1 on Digital Pin 2
const int BUTTON2_PIN = 4;     //Button 2 on Digital Pin 4

//Generic deadband limits - not all joystics will center at 512, so these limits remove 'drift' from joysticks that are off-center.
//decrease this value if drift occurs, increase it to increase sensitivity around the center position
const int DEADBAND_LOW = 482;
//increase this value if drift occurs, decrease it to increase sensitivity around the center position
const int DEADBAND_HIGH = 542;

//Max/min pulse values in microseconds for the linear actuators
const int LINEAR_MIN = 1050;        
const int LINEAR_MAX = 2000;  

// variables will change:
int position1State = 0;         // variable for reading the position status
int position2State = 0;         // variable for reading the position status


Servo linearButton;  // create servo objects to control the linear actuators
int valueMapped;     // the joystick values will be changed (or 'mapped') to new values to be sent to the linear actuator.

//variables for current positional value being sent to the linear actuator.   
int linearValue_Button = 1500;

int speed = 2;


void setup() {
  //initialize linear actuators as servo objects 
  linearButton.attach(LINEARPIN_BUTTON);  // attaches/activates the linear actuator as a servo object

  //Analog pins do not need to be initialized
  
  //use the writeMicroseconds to set the linear actuators to their default positions
  linearButton.writeMicroseconds(linearValue_Button);
}

void loop() {
  //Preset Positions for Button Control
  // if the pushbutton is pressed set the linear value
  position1State = digitalRead(BUTTON1_PIN);
  if (position1State == HIGH) {
    // set the position value  
    linearValue_Button = 1300;  
  } 

  position2State = digitalRead(BUTTON2_PIN);
  if (position2State == HIGH) {     
    // set the position value   
    linearValue_Button = 1500;  
  }

  //Use the writeMicroseconds to set the linear actuator to its new position
  linearButton.writeMicroseconds(linearValue_Button);
  delay(10);
}

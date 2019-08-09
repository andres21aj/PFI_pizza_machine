/*
  PFI - maquina de pizzas
*/

//Includes
#include "submodules/Servo/src/Servo.h" //Servo Library can be used for Firgelli Mini Linear Actuators

//Linear Actuator Pins
const int LINEARPIN_BUTTON = 6;   //Linear Actuator 1 on Digital Pin 6 (la1_dp6)

/*
    Generic deadband limits - not all joystics will center at 512, so these limits remove 'drift' 
    from joysticks that are off-center.
 */
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


Servo linearKnob, linearSlider, linearButton, linearJoystick;  // create servo objects to control the linear actuators
int knobValue, sliderValue, joystickValue;                     //variables to hold the last reading from the analog pins. The value will be between 0 and 1023
int valueMapped;                                               // the joystick values will be changed (or 'mapped') to new values to be sent to the linear actuator.

void setup() {
    
}

void loop() {
    
}

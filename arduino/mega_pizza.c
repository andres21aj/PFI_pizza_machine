/*
  PFI - maquina de pizzas
*/

//Includes
#include  //Servo Library can be used for Firgelli Mini Linear Actuators

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

void setup() {
    
}

void loop() {
    
}

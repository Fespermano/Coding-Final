//Otto Fesperman
#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
  // initialize the serial communication:
  Serial.begin(9600);
  // initialize the ledPin as an output:
}

void loop() {
  int click;
  int clock;
  // check if data has been sent from the computer:
  if (Serial.available() > 0) {
    // read the most recent byte (which will be from 0 to 255):
    click = Serial.read();
    clock = Serial.read();
    // set the color the LED:
    if(click == 1){
    CircuitPlayground.setPixelColor(0, 0x800080); 
    }
    // else if(click == 0){
    // }
    //button2 clock

    // if(clock == 2){
    // CircuitPlayground.setPixelColor(0, 0x800080); 
    // }
    // else if(clock == 3){
    // }
  }
}
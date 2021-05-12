#include "Arduino.h"
#include "LEDSet.h"

//#define one_cycle 2000 //μs

LEDSet::LEDSet(int pin){
  LEDpin = pin;
  LEDstat = LOW;
  pinMode(pin,OUTPUT);
};
void LEDSet::LED_blink(){  
  LEDstat = !LEDstat;
  digitalWrite(LEDpin,LEDstat);
}
void LEDSet::LED_on(){  
  LEDstat = HIGH;
  digitalWrite(LEDpin,HIGH);
}
void LEDSet::LED_off(){  
  LEDstat = LOW;
  digitalWrite(LEDpin,LOW);
}
void LEDSet::LED_brightness(int duty_cycle){
  analogWrite(LEDpin,duty_cycle);
}

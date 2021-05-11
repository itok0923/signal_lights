#include "Arduino.h"
#include "PushSet.h"

PushSet::PushSet(int pin){
  Pushpin = pin;
  pinMode(Pushpin,INPUT);
}

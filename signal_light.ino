#include "LEDSet.h"
#include "PushSet.h"

#define LED_BUILTIN_PIN   PA5
#define LED_RED_PIN       PA8
#define LED_YELLOW_PIN    PB5
#define LED_GREEN_PIN     PA10
#define USER_BUTTON_PIN   PC13
#define LED_bright_set    50

LEDSet  ledRed = LEDSet(LED_RED_PIN);
LEDSet  ledYel = LEDSet(LED_YELLOW_PIN);
LEDSet  ledGrn = LEDSet(LED_GREEN_PIN);
LEDSet  led    = LEDSet(LED_BUILTIN_PIN);
PushSet push   = PushSet(USER_BUTTON_PIN);

int toggle_stat = HIGH;
int sigstat = 0;

void setup() {
  attachInterrupt(digitalPinToInterrupt(USER_BUTTON_PIN),pushtoggle,FALLING);
}

void loop() {

  switch(sigstat){
    case 0:
        signal_mode(LED_bright_set,0,0);
        sigstat = 1;
        break;
    case 1:
        signal_mode(0,0,LED_bright_set);
        sigstat = 2;
        break;
    case 2:
        signal_mode(0,LED_bright_set,0);
        sigstat = 0;
        break;
    default:
        signal_mode(LED_bright_set,0,0);
        sigstat = 1;
        break;
  }
  delay(10000);
}
void pushtoggle(){
  led.LED_blink();
}
void signal_mode(int redset,int yelset,int grnset){
  ledRed.LED_brightness(redset);
  ledYel.LED_brightness(yelset);
  ledGrn.LED_brightness(grnset);
}

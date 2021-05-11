#include "LEDSet.h"
#include "PushSet.h"

#define LED_BUILTIN_PIN   PA5
#define LED_RED_PIN       PA8
#define LED_YELLOW_PIN    PB5
#define LED_GREEN_PIN     PA10
#define USER_BUTTON_PIN   PC13

LEDSet ledRed = LEDSet(LED_RED_PIN);
LEDSet ledYer = LEDSet(LED_YELLOW_PIN);
LEDSet ledGrn = LEDSet(LED_GREEN_PIN);
LEDSet led = LEDSet(LED_BUILTIN_PIN);
PushSet push = PushSet(USER_BUTTON_PIN);
int toggle_stat = HIGH;

void setup() {

//  attachInterrupt(digitalPinToInterrupt(push.Pushpin),pushtoggle,FALLING);
}

void loop() {
/*  if(toggle_stat == LOW){
    led.LED_on();
  }else{
    led.LED_blink();
  }
*/
  ledRed.LED_brightness(10);
  ledYer.LED_brightness(10);
  ledGrn.LED_brightness(10);
}
void pushtoggle(){
  toggle_stat = !toggle_stat;  
}

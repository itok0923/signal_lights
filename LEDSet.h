//LEDSet.h

#ifndef LEDSet_h
#define LEDSet_h

class LEDSet {
  public:
    LEDSet(int pin);
    void LED_blink();
    void LED_on();
    void LED_off();
    int LEDpin;
    int LEDstat;
    void LED_brightness(int duty_cycle);
  private:
    int on_ratio;
    int off_ratio;
};

#endif

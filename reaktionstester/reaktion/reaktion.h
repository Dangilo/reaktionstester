#ifndef Reaktion_h
#define Reaktion_h
#include "Arduino.h"
class Reaktion{
  public:
    Reaktion(int minPin, int maxPin, int button_in, int min_delay, int max_delay, int min_delay_low, int max_delay_low);
    void startSequence();
    void turnOnAllLEDs(int possibleDelay);
    void turnOffAllLEDs(int possibleDelay);
    void blink();
    void showResult(int result);
    void startUp();
    bool readButton();

  private:
    int _minPin;
    int _maxPin;
    int _button_in;
    int _min_delay;
    int _max_delay;
    int _min_delay_low;
    int _max_delay_low;
    bool isReady;
    bool afterStartSeq; 
};

#endif
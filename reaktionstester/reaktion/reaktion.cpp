#include <Arduino.h>
#include "reaktion.h"


Reaktion::Reaktion(int minPin, int maxPin, int button_in, int min_delay, int max_delay, int min_delay_low, int max_delay_low){
 _minPin = minPin;
 _maxPin = maxPin;
 _button_in = button_in;
 _min_delay = min_delay;
 _max_delay = max_delay;
 _min_delay_low = min_delay_low;
 _max_delay_low = max_delay_low;

for(int i = _minPin; i <=_maxPin; i++){
   pinMode(i, OUTPUT);
}
 
pinMode(_button_in, INPUT);

}
void Reaktion::startUp(){
 turnOnAllLEDs(100);
 turnOffAllLEDs(200);
 turnOnAllLEDs(100);
 turnOffAllLEDs(200);
 turnOnAllLEDs(100);
 turnOffAllLEDs(200);
}


void Reaktion::startSequence(){
  isReady = false;
  int delay_time = rand()%(_max_delay-_min_delay + 1) + _min_delay;
  int tillLow = rand()%(_max_delay_low - _min_delay_low + 1) + _min_delay_low;
  int i = _minPin;
  int j = _maxPin;
  while(j - i > 0){
    digitalWrite(i++, HIGH);
    digitalWrite(j--, HIGH);
    delay(tillLow);
  }
  digitalWrite(i++, HIGH);
  delay(tillLow);
  
  turnOffAllLEDs(0);
}
void Reaktion::turnOnAllLEDs(int possibleDelay){
  
    for(int i = _minPin; i<=_maxPin; i++){
      digitalWrite(i, HIGH);
      delay(possibleDelay);
    }
}
void Reaktion::turnOffAllLEDs(int possibleDelay){
    for(int i = _minPin; i<=_maxPin; i++){
    digitalWrite(i, LOW);
    delay(possibleDelay);
    }
}
void Reaktion::blink(){
  turnOnAllLEDs(0);
  delay(100);
  turnOffAllLEDs(0);
  delay(100);
  turnOnAllLEDs(0);
  delay(100);
  turnOffAllLEDs(0);
  delay(100);
  turnOnAllLEDs(0);
  delay(100);
  turnOffAllLEDs(0);
}

void Reaktion::showResult(int result){
  result = result / 100;

  if(result >= 50){
    digitalWrite(2, HIGH);
  }
    if(result >= 100){
    digitalWrite(3, HIGH);
  }
    if(result >= 150){
    digitalWrite(4, HIGH);
  }
    if(result >= 200){
    digitalWrite(5, HIGH);
  }
    if(result >= 250){
    digitalWrite(6, HIGH);
  }
    if(result >= 300){
    digitalWrite(7, HIGH);
  }
    if(result >= 350){
    digitalWrite(8, HIGH);
  }
}

bool Reaktion::readButton(){
  return digitalRead(_button_in);
}

#include <reaktion.h>
int startTime = 0;
int elapsedTime = 0; 
bool isReady = true;
bool afterStartSeq =false; 

Reaktion reakt(2, 8, 13, 100, 1000, 100, 1000);

void setup()
{  
//Serial.begin(9600);
reakt.startUp();
}
void loop()
{
  if(reakt.readButton() == HIGH && afterStartSeq){
    elapsedTime = millis() - startTime;
    reakt.blink();
    reakt.showResult(elapsedTime);
    delay(5000);
    reakt.turnOffAllLEDs(500);
    elapsedTime = 0;
    startTime = 0;
    isReady = true;
    afterStartSeq = false;
  }else if(!afterStartSeq && isReady && reakt.readButton() == HIGH){
    reakt.startSequence();
    afterStartSeq = true;
    startTime = millis();
  }
}


  
  
  
  

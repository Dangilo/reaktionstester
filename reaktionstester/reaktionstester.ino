const int LED_OUT_1 = 2;
const int LED_OUT_2 = 3;
const int LED_OUT_3 = 4;
const int LED_OUT_4 = 5;
const int LED_OUT_5 = 6;
const int LED_OUT_6 = 7;
const int LED_OUT_7 = 8;
const int BUTTON_IN = 13;
int button_state = 0;
const int min_delay = 100;
const int max_delay = 1000;
const int min_delay_low = 1000;
const int max_delay_low = 10000;
int startTime = 0;
int elapsedTime = 0;
bool isReady = true;
bool afterStartSeq = false;

void setup()
{  
    Serial.begin(9600);

  for(int i = 2; i <=8; i++){
    pinMode(i, OUTPUT);
  }
  pinMode(BUTTON_IN, INPUT);
  turnOnAllLEDs(100);
  turnOffAllLEDs(200);
  turnOnAllLEDs(100);
  turnOffAllLEDs(200);
  turnOnAllLEDs(100);
  turnOffAllLEDs(200);

}
void loop()
{
  button_state = digitalRead(BUTTON_IN);
  if(button_state == HIGH && afterStartSeq){
    elapsedTime = millis() - startTime;
    Serial.print( elapsedTime);
    blink();
    isReady = true;
        afterStartSeq = false;
  }else if(!afterStartSeq && isReady && button_state == HIGH){
    startSequence();
  }
}

void startSequence(){
  isReady = false;
  int delay_time = rand()%(max_delay-min_delay + 1) + min_delay;
  int tillLow = rand()%(max_delay_low - min_delay_low + 1) + min_delay_low;
  digitalWrite(LED_OUT_1, HIGH);
  digitalWrite(LED_OUT_7, HIGH);
  delay(delay_time);
  digitalWrite(LED_OUT_2, HIGH);
  digitalWrite(LED_OUT_6, HIGH);
  delay(delay_time);
  digitalWrite(LED_OUT_3, HIGH);
  digitalWrite(LED_OUT_5, HIGH);
  delay(delay_time);
  digitalWrite(LED_OUT_4, HIGH);
  delay(tillLow);
  turnOffAllLEDs(0);
  afterStartSeq = true;
}
void turnOnAllLEDs(int possibleDelay){
  digitalWrite(LED_OUT_1, HIGH);
  delay(possibleDelay);
  digitalWrite(LED_OUT_2, HIGH);
  delay(possibleDelay);
  digitalWrite(LED_OUT_3, HIGH);
  delay(possibleDelay);
  digitalWrite(LED_OUT_4, HIGH);
  delay(possibleDelay);
  digitalWrite(LED_OUT_5, HIGH);
  delay(possibleDelay);
  digitalWrite(LED_OUT_6, HIGH);
  delay(possibleDelay);
  digitalWrite(LED_OUT_7, HIGH);
}
void turnOffAllLEDs(int possibleDelay){
  digitalWrite(LED_OUT_1, LOW);
  delay(possibleDelay);
  digitalWrite(LED_OUT_2, LOW);
  delay(possibleDelay);
  digitalWrite(LED_OUT_3, LOW);
  delay(possibleDelay);
  digitalWrite(LED_OUT_4, LOW);
  delay(possibleDelay);
  digitalWrite(LED_OUT_5, LOW);
  delay(possibleDelay);
  digitalWrite(LED_OUT_6, LOW);
  delay(possibleDelay);
  digitalWrite(LED_OUT_7, LOW);
}
void blink(){
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

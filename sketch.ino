#define LED_Pin 6
#define Button 8

bool Zustand = LOW;

void setup() {
 
  pinMode(LED_Pin, OUTPUT);
  pinMode(Button, INPUT_PULLUP);


}

void loop() {

  Zustand =! digitalRead(Button);
  digitalWrite(LED_Pin, Zustand);

}

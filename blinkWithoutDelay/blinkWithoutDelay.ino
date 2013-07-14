/* blink without delay

turns on and off led connected to digital pin without using the delay function.
This means other code can run without being interrupted by the led code.

*/
// constants wont change and are used here to assign pin number
const int ledPin = 13;  //the number of the led pin

//variables can change
int ledState = LOW;  //ledState used to set the led
long previousMillis = 0;  //stores the lasttime the led was updated

//the long variable type is used to measure milliseconds because the number stored
//will quickly become larger than a number that can be stored with int
long interval = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //check to see if its time to blink the led, that is, if the difference
  //between the current time and last time you blinked
  //the led is bigger than the interval which you want to blink the LED.
  unsigned long currentMillis = millis();
  
  if(currentMillis - previousMillis > interval) {
    //save lastime you blinked led
    previousMillis = currentMillis;
    
    //if the led is off turn it on and vice-versa
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;
    // set the led with the ledState of the variable
    digitalWrite(ledPin, ledState);
  }
}

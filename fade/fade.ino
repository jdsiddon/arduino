int led = 9; //pin led is plugged into
int brightness = 0; //how bright the led is
int fadeAmount = 5; // how many points to fade the led by

void setup() {
  ///declare pin 9 as an output pin
  pinMode(led, OUTPUT);
}

void loop() {
  //set brightness of led
  analogWrite(led, brightness);
  //change brightness next time through loop
  brightness = brightness + fadeAmount;
  
  //reverse the direction of the fading at the ends of the fade:
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}

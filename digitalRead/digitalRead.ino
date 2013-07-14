
/*
DigitalReadSerial
Reads a digital input on pin 2, prints the result to the serial monitor
*/

// digital pin has button attached
int pushButton = 2;

//setup function on reset or chip startup
void setup() {
  //Initialize serial communication at 9600 bits per second
  Serial.begin(9600);
  // make the pushButton pin an input 
  pinMode(pushButton, INPUT);
}

//loop running forever
void loop() {
  //read the input pin:
  int buttonState = digitalRead(pushButton);
  //print state of button
  Serial.println(buttonState);
  delay(1); // delay between reads
  
}

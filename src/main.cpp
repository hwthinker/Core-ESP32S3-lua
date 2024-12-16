#include <Arduino.h>
#define LED1 10
#define LED2 11
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED1, HIGH);  // turn the LED on (HIGH is the voltage level)
  Serial.println("LED1 ON");
  delay(1000);              // wait for a second
  digitalWrite(LED1, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(LED2, HIGH);  // turn the LED on (HIGH is the voltage level)
  Serial.println("LED2 ON");
  delay(1000);              // wait for a second
  digitalWrite(LED2, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);  // wait for a second
}
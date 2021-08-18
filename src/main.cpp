#include <Arduino.h>

/*
  Simple Blink sketch
  simple-blink.cpp
  Use for PlatformIO demo
 
  From original Arduino Blink Sketch
  https://www.arduino.cc/en/Tutorial/Blink
  
  DroneBot Workshop 2021
  https://dronebotworkshop.com
*/
 
// Set LED_BUILTIN if undefined or not pin 13
// #define LED_BUILTIN 13
 
void setup()
{
  // Initialize LED pin as an output.
  pinMode(2, OUTPUT);
}
 
void loop()
{
  // Set the LED HIGH
  digitalWrite(2, HIGH);
 
  // Wait for a second
  delay(1000);
 
  // Set the LED LOW
  digitalWrite(2, LOW);
 
   // Wait for a second
  delay(1000);
  Serial.printf("hello");
}
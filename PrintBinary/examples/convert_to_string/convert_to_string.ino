#include <PrintBinary.h>

#define FAVOURITE_NUMBER 8

byte number;
String message;

void setup() {
  Serial.begin(9600);
  number = FAVOURITE_NUMBER;
}

void loop() {

  // Store some message as a String
  message = "My favourite number is ";
  message += number;
  message += ", which is ";

  // Convert the number to a String
  String numStr = toBinaryString(number);

  // Append to message
  message += numStr;

  // Print out on serial terminal
  Serial.println(message);

  // loop forever
  while (1) {}
}

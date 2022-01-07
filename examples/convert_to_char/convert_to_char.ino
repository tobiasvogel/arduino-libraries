#include <PrintBinary.h>

#define FAVOURITE_NUMBER 8

byte number;
const char *message = "My favourite number in binary representation is: ";

void setup() {
  Serial.begin(9600);
  number = FAVOURITE_NUMBER;
}

void loop() {
  
  // Convert the number to a char*
  char *numChar = toBinaryChar(number);

  // Print out on serial terminal
  Serial.print(message);
  Serial.println(numChar);

  // loop forever
  while (1) {}
}

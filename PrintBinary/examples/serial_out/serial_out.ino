#include <PrintBinary.h>

byte number;

void setup() {
  Serial.begin(9600);
  number = 0;
}

void loop() {

  byte nextNumber = number + 1;

  // Print something to the serial terminal
  Serial.print("My number is ");
  Serial.print(number);
  Serial.print(" which corresponds to ");

  // Now Print the number in binary notation
  printBinary(number);

  // Print some more stuff..
  Serial.print(" in binary, next will be ");
  Serial.print( nextNumber );
  Serial.print(", binary: ");

  // And print the next higher number in
  // binary notation, appending a newline
  printBinary( nextNumber, true);

  // Wait 5 seconds before the next number
  delay(5000);
}

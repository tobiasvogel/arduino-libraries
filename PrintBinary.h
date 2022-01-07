#include <Arduino.h>
#include <limits.h>
#ifndef PRINTBINARY_H
#define PRINTBINARY_H

template<typename T>
void printBinary(T value, bool newline = false) {
    for ( size_t mask = 1 << ((sizeof(value) * CHAR_BIT) - 1); mask; mask >>= 1 )
    {
        Serial.print(value & mask ? "1" : "0");
    }
    if (newline) {
	Serial.println();
    }
}

template<typename T>
String toBinaryString(T value) {
    String str;
    for ( size_t mask = 1 << ((sizeof(value) * CHAR_BIT) - 1); mask; mask >>= 1 )
    {
        str += (value & mask ? "1" : "0");
    }
    return str;
}

template<typename T>
char *toBinaryChar(T value) {
    static char str[((sizeof(value) * CHAR_BIT )+1)];
    uint8_t i = 0;
    for ( size_t mask = 1 << ((sizeof(value) * CHAR_BIT) - 1); mask; mask >>= 1 )
    {
        str[i] = (value & mask ? '1' : '0');
        i++;
    }
    str[i] = '\0';
    return str;
}

#endif //PRINTBINARY_H

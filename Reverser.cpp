#include "Reverser.h"
#include <vector>
#include <iostream>

int Reverser::reverseDigit(int value) {
    if (value <= 0) {
        return -1;
    } 

    static int reversed = 0;
    static int temp = 1;
    
    if (value > 0) {
        reverseDigit(value/10);
        reversed = reversed + (value%10) *temp;
        temp *= 10;
    }

    return reversed;
}

std::string Reverser::reverseString(std::string characters) {
    
    if (characters.length() <= 0) {
        return "";
    }

    char last_char = characters.back();
    std::string reversing = characters.substr(0,characters.length() - 1);
    return last_char + reverseString(reversing);
}
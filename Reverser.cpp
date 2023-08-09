#include "Reverser.h"
#include <string>

int Reverser::reverseDigit(int value) {
    std::string str_value = to_string(value);

    if (str_value.length() <= 1) {
        return 1;
    }

    return stoi(str_value.at(0) + reverseDigit(value/10));
} 
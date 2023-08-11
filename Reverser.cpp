#include "Reverser.h"


int Reverser::reverseDigit(int value) {
    if (value <= 0) {
        return -1;
    } else if (value < 10) {
        return value;
    }

    std::string number = std::to_string(value);

    char last_char = number.back();
    std::string reversing = number.substr(0,number.length() - 1);

    return stoi(last_char + reverseString(reversing));

}

std::string Reverser::reverseString(std::string characters) {

    if (characters.length() <= 0) {
        return "";
    }

    char last_char = characters.back();
    std::string reversing = characters.substr(0,characters.length() - 1);
    return last_char + reverseString(reversing);
}
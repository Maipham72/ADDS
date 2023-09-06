#include "bigNumCalc.h"
#include <iostream>

int main() {
    bigNumCalc calculator;

    // Sample input: 1234567890 + 9876543210
    std::list<int> num1 = calculator.buildBigNum("1234567890");
    std::list<int> num2 = calculator.buildBigNum("9876543210");
    std::list<int> sum = calculator.add(num1, num2);

    std::cout << "Result: ";
    for (int digit : sum) {
        std::cout << digit;
    }
    std::cout << std::endl;

    // Sample input: 9876543210 - 1234567890
    num1 = calculator.buildBigNum("9876543210");
    num2 = calculator.buildBigNum("1234567890");
    std::list<int> difference = calculator.sub(num1, num2);

    std::cout << "Result: ";
    for (int digit : difference) {
        std::cout << digit;
    }
    std::cout << std::endl;

    return 0;
}
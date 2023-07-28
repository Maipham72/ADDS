#include <iostream>
#include "Human.h"
#include <string>

Human::Human(std::string name): name(name) {}

std::string Human::getName() {
    return name;
}


char Human::makeMove() {
    char move;
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
}
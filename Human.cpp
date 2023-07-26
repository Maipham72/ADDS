#include <iostream>
#include "Human.h"
#include <string>

Human::Human(std::string name): name(name) 

Human::Human() {
    name = "Human"
}

char Human::makeMove() {
    std::cout << "Enter move: ";
    std::cin >> move;
}
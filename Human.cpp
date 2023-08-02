#include "Human.h"

Human::Human() {
    name = "Human";
}

std::string Human::getName() {
    return name;
}

Human::Human(std::string name) : name(name) {}

Move* Human::makeMove() {
    return move; 
}
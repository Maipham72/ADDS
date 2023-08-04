#include "Human.h"
#include <iostream>
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"


Human::Human() {
    name = "Human";
}

std::string Human::getName() {
    return name;
}

Human::Human(std::string name) : name(name) {}

Move* Human::makeMove() {
    std::string moveName;
    std::cout << "Enter move: ";
    std::cin >> moveName;

    if (moveName == "Rock") {
        return new Rock();
    } else if (moveName == "Paper") {
        return new Paper();
    } else if (moveName == "Scissors") {
        return new Scissors();
    } else {
        return new Rock();
    }
}
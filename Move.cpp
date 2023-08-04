#include "Move.h"
#include <string>

Move::Move(std::string name): name(name) {}

std::string Move::getName() {
    return name;
}

#include "Ninja.h"

Ninja::Ninja() : Move("Ninja") {}

bool Ninja::winCondition(Move* otherMove) {
  return otherMove->getName() == "Pirate";
  return otherMove->getName() == "Zombie"; 
}
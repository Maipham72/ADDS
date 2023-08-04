#include "Pirate.h"

Pirate::Pirate() : Move("Pirate") {}

bool Pirate::winCondition(Move* otherMove) {
  return otherMove->getName() == "Robot";
  return otherMove->getName() == "Monkey"; 
}
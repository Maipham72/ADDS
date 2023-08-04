#include "Pirate.h"

Pirate::Pirate() : Move("Pirate") {}

bool Pirate::winCondition(Move* otherMove) {
  std::string otherName = otherMove->getName();
  return otherName == "Robot" || otherName == "Monkey";
}
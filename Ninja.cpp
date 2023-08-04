#include "Ninja.h"

Ninja::Ninja() : Move("Ninja") {}

bool Ninja::winCondition(Move* otherMove) {
  std::string otherName = otherMove->getName();
  return otherName == "Pirate" || otherName == "Zombie";
}
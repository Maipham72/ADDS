#include "Monkey.h"

Monkey::Monkey(): Move("Monkey") {}

bool Monkey::winCondition(Move* otherMove) {
  return otherMove->getName() == "Ninja";
  return otherMove->getName() == "Robot";
}
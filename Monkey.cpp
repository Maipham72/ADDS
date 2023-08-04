#include "Monkey.h"

Monkey::Monkey(): Move("Monkey") {}

bool Monkey::winCondition(Move* otherMove) {
  std::string otherName = otherMove->getName();
  return otherName == "Ninja" || otherName == "Robot";
}
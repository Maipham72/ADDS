#include "Paper.h"

Paper::Paper(): Move("Paper") {}

bool Paper::winCondition(Move* otherMove) {
  std::string otherName = otherMove->getName();
  return otherName == "Rock";
}

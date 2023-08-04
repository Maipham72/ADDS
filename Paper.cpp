#include "Paper.h"

Paper::Paper(): Move("Paper") {}

bool Paper::winCondition(Move* otherMove) {
  return otherMove->getName() == "Rock";
}

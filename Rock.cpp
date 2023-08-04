#include "Rock.h"

Rock::Rock(): Move("Rock") {}

bool Rock::winCondition(Move* otherMove) {
  return otherMove->getName() == "Scissors";
}

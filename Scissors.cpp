#include "Scissors.h"

Scissors::Scissors(): Move("Scissors") {}

bool Scissors::winCondition(Move* otherMove) {
  return otherMove->getName() == "Paper";
}

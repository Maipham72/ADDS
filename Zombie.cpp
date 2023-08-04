#include "Zombie.h"

Zombie::Zombie(): Move("Zombie") {}

bool Zombie::winCondition(Move* otherMove) {
  return otherMove->getName() == "Pirate";
  return otherMove->getName() == "Monkey";
}

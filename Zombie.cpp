#include "Zombie.h"

Zombie::Zombie(): Move("Zombie") {}

bool Zombie::winCondition(Move* otherMove) {
  std::string otherName = otherMove->getName();
  return otherName == "Pirate" || otherName == "Monkey";
}

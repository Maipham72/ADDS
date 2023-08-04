#include "Robot.h"

Robot::Robot(): Move("Robot") {}

bool Robot::winCondition(Move* otherMove) {
  return otherMove->getName() == "Ninja";
  return otherMove->getName() == "Zombie";
}

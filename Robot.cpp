#include "Robot.h"

Robot::Robot(): Move("Robot") {}

bool Robot::winCondition(Move* otherMove) {
  std::string otherName = otherMove->getName();
  return otherName == "Ninja" || otherName == "Zombie";
}

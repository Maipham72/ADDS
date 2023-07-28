#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <string>

class Computer: public Player {
  public:
    char makeMove();
    std::string getName();
};

#endif
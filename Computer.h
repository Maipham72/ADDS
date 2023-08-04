#ifndef COMPUTER_H
#define COMPUTER_H
#include "Move.h"
#include "Player.h"


class Computer: public Player {
    public:
        Move* makeMove();
        std::string getName();
    
};

#endif
#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Move.h"
#include "Player.h"

class Human: public Player {
    private:
        std::string name;
        std::string moveName;
    public:
        Human();
        Human(std::string name);
        Move* makeMove();
        std::string getName();
};

#endif
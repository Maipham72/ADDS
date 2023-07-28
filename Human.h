
#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Player.h"

class Human : public Player {
    private:
        std::string name;

    public:
        Human(std::string name);
        char makeMove();
        std::string getName();
};

#endif



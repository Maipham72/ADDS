
#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Player.h"

class Human : public Player {
    private:
        std::string name;
        char move;

    public:
        Human();
        Human(std::string name);
        char makeMove();
        char getMove();
        void setMove();
        std::string getName()

};

#endif



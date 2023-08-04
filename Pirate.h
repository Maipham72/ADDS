#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"

class Pirate : public Move {
    public:
        Pirate();
        bool winCondition(Move* otherMove);
};
#endif
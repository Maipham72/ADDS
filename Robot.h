#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"

class Robot : public Move {
    public:
        Robot();
        bool winCondition(Move* otherMove);
};
#endif
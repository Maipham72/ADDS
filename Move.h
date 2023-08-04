#ifndef MOVE_H
#define MOVE_H
#include <string>

class Move {
    private:
        std::string name;
    public:
        Move(std::string name);
        virtual bool winCondition(Move* otherMove) =0;
        std::string getName();

};

#endif
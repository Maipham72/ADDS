#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
    private:
        std::string name;
    public:
        virtual char makeMove() = 0;
        virtual std::string getName();
    };

#endif
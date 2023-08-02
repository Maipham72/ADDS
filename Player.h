#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
    private:
        std::string name;
    public:
        Move* makeMove() = 0;
        std::string getName() = 0;
};

#endif
#ifndef ROCK_H
#define ROCK_H
#include <vector>
#include "Move.h"

class Rock : public Move {
    private:
        std::vector <Move*> winOpponent;
    public:
        Rock();
        // what rocks win against lose against 
        // stores array or vector
        // function name rockwins ->
        void rockOpponent (Move* playe1Move, Move* player2Move); 
            winOpponent.pushback(player1Move.getMove()); 
};
#endif
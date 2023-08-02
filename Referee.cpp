#include "Referee.h"

Referee::Referee() {}

Player* refGame(Player* player1, Player* player2) {
    Move* player1_move = player1->getMove();
    Move* player2_move = player2->getMove();

    if (player1_move == player2_move){
        return nullptr;
    }
}
#include "Referee.h"
#include "Move.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* player1_move = player1->makeMove();
    Move* player2_move = player2->makeMove();

    if (player1_move->getName() == player2_move->getName()) {
        return nullptr;
    } else if (player1_move->winCondition(player2_move)) {
        return player1;
    } else {
        return player2;
    }

}
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include <iostream>
#include <vector>

int main () {
  Referee referree;
  Human myname("Mei");
  Computer computer;
    std::vector<Player*> players;
  players.push_back(&myname);
  players.push_back(&computer);

  int numPlay;
  std::cout << "Number of times play: ";

  std::cin >> numPlay;

  for (int i = 0; i < numPlay; i++) {
    Player* player1 = referree.refGame(players[0],players[1]);
    if (player1 == nullptr) {
      std::cout << "It's a Tie." << std::endl;
    } else {
      std::cout << player1->getName() << " Wins." << std::endl;
    };
  }

  return 0;
}
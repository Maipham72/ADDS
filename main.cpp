#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include <iostream>

int main () {
  Referee referree;
  Human myname("Mei");
  Computer computer;
  Player* player1 = referree.refGame(&myname,&computer);

  if (player1 == nullptr) {
    std::cout << "It's a Tie." << std::endl;
  } else {
    std::cout << player1->getName() << " Wins." << std::endl;
  };

  return 0;
}

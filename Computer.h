#ifndef COMPUTER_H
#define COMPUTER_H

class Computer: public Player {
    public:
        Move* makeMove();
        std::string getName();
    
};

#endif
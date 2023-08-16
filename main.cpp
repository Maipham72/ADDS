#include <iostream>
#include "BagOfHolding.h"

int main() {
    BagOfHolding bags;
    std::string item = "Mai";

    bags.addItem(item);

    std::cout << bags << std::endl;
}
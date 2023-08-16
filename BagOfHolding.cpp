#include "BagOfHolding.h"

BagOfHolding::BagOfHolding() {
    // int ranNum = srand(time(nullptr));
    // std::string thing = std::to_string(ranNum);
}

void BagOfHolding::addItem(std::string items) {
    bag_item.push_back(items);
}

void BagOfHolding::removeItem() {
    if (bag_item.empty()) {
        return;
        bag_item.erase(bag_item.begin());
    }

}
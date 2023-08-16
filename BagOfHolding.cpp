#include "BagOfHolding.h"

BagOfHolding::BagOfHolding() {
    srand(time(NULL));
}

void BagOfHolding::addItem(const Bags& items) {
    bag_item.push_back(items);
}

void BagOfHolding::removeItem() {
    if (bag_item.empty()) {
        return;
        bag_item.erase(bag_item.begin());
    }

}
#ifndef BAGOFHOLDING_H
#define BAGOFHOLDING_H
#include <vector>

template <typename Bags>
class BagOfHolding{
    std::vector <Bags> bag_item;

    public:
    BagOfHolding();
    void addItem(const Bags& items);
    void removeItem();
};

#endif

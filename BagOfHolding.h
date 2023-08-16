#ifndef BAGOFHOLDING_H
#define BAGOFHOLDING_H
#include <vector>
#include <string>

// template <typename Bags>
class BagOfHolding{
    std::vector <std::string> bag_item;

    public:
    BagOfHolding();
    void addItem(std::string item);
    void removeItem();
};

#endif

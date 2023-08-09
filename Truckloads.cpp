#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    }

    return numTrucks(floor(numCrates/2) + ceil(numCrates/2))
}
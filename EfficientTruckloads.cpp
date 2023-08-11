#include "EfficientTruckloads.h"
#include <cmath>
#include <unordered_map>


int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {

  std::unordered_map<std::pair<int,int>,int> temp ;

  if (numCrates <= loadSize) {
    return 1;
  }

  int left = floor(numCrates/2);
  int right = numCrates - left;

  int truck = numTrucks(left, loadSize) + numTrucks(right,loadSize);

  temp[numCrates, loadSize] = truck;

  return truck;
}
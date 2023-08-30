#include "RecursiveBinarySearch.h"
#include <cmath>

bool RecursiveBinarySearch::recursiveSearch(std::vector<int> sortedList, int num, int start, int end) {
  if (start >= end) {
    return false;
  }

  int middleNum = ceil((start + end)/2);
  if (sortedList.at(middleNum) == num) {
    return true;
  } else if (sortedList.at(middleNum) > num) {
    return recursiveSearch(sortedList,num, start, middleNum -1);
  } else {
    return recursiveSearch(sortedList, num, middleNum + 1, end);
  }
};

bool RecursiveBinarySearch::search(std::vector<int> list, int num) {
  return recursiveSearch(list, num, 0, list.size() - 1);

}


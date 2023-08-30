#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch {
  public:
    bool search(std::vector<int>, int);

  private:
    bool recursiveSearch(std::vector<int> sortedList, int num, int start, int end);
};

#endif
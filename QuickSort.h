#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
//#include <vector>

class QuickSort : public Sort {
  public:
    std::vector<int> sort(std::vector<int> list);

  private:
    void quickSort(std::vector<int> array, int start, int end);
};

#endif

#include <iostream>
#include <algorithm>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "Sort.h"

int main() {
  std::vector<int> list{-5,-8,-4,-2,-1};

  // QuickSort sorting;
  // std::vector<int> sortedList = sorting.sort(list);
  QuickSort sorting;
  sorting.sort(list);

  std::sort(list.begin(), list.end());

  RecursiveBinarySearch binarySearch;

  //bool found = binarySearch.search(sortedList,1);
  //int size = sortedList.size();

  bool found = binarySearch.search(list, 1);
  std::cout << (found ? "true" : "false") << " ";

  for (int num : list) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
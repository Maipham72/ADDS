#include <iostream>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "Sort.h"

int main() {
  std::vector<int> list{1,3,5,4,-5,100,7777,2014};

  QuickSort sorting;
  std::vector<int> sortedList = sorting.sort(list);

  RecursiveBinarySearch binarySearch;

  bool found = binarySearch.search(sortedList,1);
  int size = sortedList.size();

  if (found == true) {
    std::cout << "true" << " ";
  } else {
    std::cout << "false" << " ";
  }

  for (int i = 0; i < size; i++) {
    std::cout << sortedList[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
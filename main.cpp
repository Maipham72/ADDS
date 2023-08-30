#include <iostream>
#include <algorithm>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "Sort.h"
#include <string>
#include <sstream>


int main() {
  std::vector<int> list;

  int num;
  std::string line;
  std::getline(std::cin, line);
  std::istringstream iss(line);

  while (iss >> num) {
    list.push_back(num);
  }

  // QuickSort sorting;
  // std::vector<int> sortedList = sorting.sort(list);
  QuickSort sorting;
  sorting.sort(list);

  std::sort(list.begin(), list.end());

  RecursiveBinarySearch binarySearch;

  bool found = binarySearch.search(list, 1);

  if (found == true) {
    std::cout << "true" << " ";
  } else {
    std::cout << "false" << " ";
  }
 
  for (int num : list) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
#include "QuickSort.h"

void QuickSort::quickSort(std::vector<int> array, int start, int end) {
  if (start >= end) {
    return;
  }

  int pivot = array.at(end);

  if (array.size() >= 3) {
    pivot = array.at(2);
  }

  int pivot_index = start;
  for (int i = start; i < end; i++) {
    if (array.at(i) < pivot) {
      std::swap(array.at(i), array.at(pivot_index));
      pivot_index++;
    }
  }
  std::swap(array.at(pivot_index),pivot);

  quickSort(array, start, pivot_index - 1);
  quickSort(array, pivot_index + 1, end);  
}

std::vector<int> QuickSort::sort(std::vector<int> list) {
  quickSort(list, 0, list.size() -1);
  return list;
}

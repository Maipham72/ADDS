#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {

  int size = list.size();
  int pivot = size;
  if (list.size() >= 3) {
    pivot = list.at(2);}
  // } else {
  //   pivot = list.at(size);
  // }

  if (list.size() <= 1) {
    return list;
  }

  int pivot_index = 0;
  std::vector<int> left;
  std::vector<int> right;
  //std::vector<int> middle;

  // int pivot_index = 0;

  for (int i = pivot_index; i < size; i++) {
    if (list.at(i) < pivot) {
      //std::swap(list.at(i), pivot);
      left.push_back(list[i]);
      pivot_index++;
    } else if (list.at(i) > pivot) {
      right.push_back(list[i]);
    }
  }

  std::vector<int> sorted_left = sort(left);
  std::vector<int> sorted_right = sort(right);
    
  sorted_left.push_back(pivot);
  sorted_left.insert(sorted_left.end(), sorted_right.begin(), sorted_right.end());

  return sorted_left;
}

  // for (int i = 0; i < list.size(); i++) {
  //   if (list.at(i) < pivot) {
  //     left.push_back(list.at(i));
  //   } else if (list.at(i) == pivot) {
  //     middle.push_back(list.at(i));
  //   } else {
  //     right.push_back(list.at(i));
  //   }
  // }

  // sortedLeft.insert(sortedLeft.end(), middle.begin(),middle.end());

  // sortedLeft.insert(sortedLeft.end(), sortedRight.begin(), sortedRight.end());

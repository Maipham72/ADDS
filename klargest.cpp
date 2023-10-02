#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
  std::priority_queue<int> max_heap;

  for (int i =0; i < values.size(); i++) {
    max_heap.push(values.at(i));
  }

  for (int i = 0; i < k - 1; i++) {
    max_heap.pop();
  }

  return max_heap.top();
}
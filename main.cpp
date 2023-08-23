#include <iostream>
#include "Finder.h"

int main() {
  std::string s1 = "4634554567";
  std::string s2 = "45689";

  Finder finder;
  std::vector<int> result = finder.findSubstrings(s1,s2);

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << " ";
  }
  return 0;
}
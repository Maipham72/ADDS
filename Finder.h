#ifndef FINDER_H
#define FINDER_H
#include <string>
#include <vector>
#include <iostream>
#include <chrono>

class Finder {
  public:
    std::vector<int> findSubstrings(std::string s1, std::string s2);
};

#endif
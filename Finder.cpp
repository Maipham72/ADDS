#include "Finder.h"

using namespace std;

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
  std::vector<int> result;

  // for (size_t i = 1; i<= s2.size(); i++) {
  //   size_t found = s1.find(s2.substr(0,i));
  //   if (found != std::string::npos) {
  //     result.push_back(found);
  //   } else {
  //     result.push_back(-1);
  //   }
  // }
  
  for (size_t i = 1; i <= s2.size(); i++) {
    size_t substr = i;
    bool found = false;
    for (size_t j = 0; j <= s1.size() - substr; j++) {
      bool correct = true;
      for (size_t t =0; t < substr; t++) {
        if (s1[j+t] != s2[t]){
          correct = false;
          break;
        }
      }
      
      if (correct) {
        result.push_back(j);
        found = true;
        break;
      }
    }
    if (!found) {
      result.push_back(-1);
      break;
    }
  }
  return result;
}
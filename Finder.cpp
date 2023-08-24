#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  
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
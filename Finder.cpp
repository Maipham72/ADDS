#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  // vector<int> result;

  // for (size_t i = 1; i <= s2.size(); i++) {
  //   size_t substr = i;
  //   bool found = false;
  //   for (size_t j = 0; j <= s1.size() - substr; j++) {
  //     bool correct = true;
  //     for (size_t t =0; t < substr; t++) {
  //       if (s1[j+t] != s2[t]){
  //         correct = false;
  //         break;
  //       }
  //     }

  //     if (correct) {
  //       result.push_back(j);
  //       found = true;
  //       break;
  //     }
  //   }
  //   if (!found) {
  //     result.push_back(-1);
  //     break;
  //   }
  // }

  // return result;

  vector<int> result;

  vector<int> s2prefix(s2.size(), 0);
  int j = 0;
  for (int i = 1; i < s2.size(); i++) {
    if (s2[i] == s2[j]) {
      j++;
      s2prefix[i] = j;
    } else if (j > 0) {
      j = s2prefix[j - 1];
      i--;
    }
  }

  int i = 0;
  while (i < s1.size()) {
    if (s1[i] == s2[j]) {
      i++;
      j++;
      if (j == s2.size()) {
        result.push_back(i - j);
        j = s2prefix[j - 1];
      }
    } else if (j > 0) {
      j = s2prefix[j - 1];
    } else {
      i++;
    }
  }
  return result;
}
#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <string>
#include "TrieNode.h"

class Autocomplete : public TrieNode {
  public:
  std::vector<std::string> getSuggestions (std::string partialWord);

  void insert(std::string word); 

};

#endif
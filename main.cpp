#include <iostream>
#include <string>
#include "Autocomplete.h"
#include "TrieNode.h"

int main() {
  Autocomplete autocomplete;
  autocomplete.insert("bin");
  autocomplete.insert("ball");
  autocomplete.insert("ballet");
  std::vector<std::string> suggestions = autocomplete.getSuggestions("b");
  for (int i = 0; i < suggestions.size(); i++) {
    std::cout << suggestions[i] << std::endl;
  }
  return 0;
}





#include "Autocomplete.h"

void Autocomplete::insert(std::string word) {
  insertWord(root, word);
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
  std::vector<std::string> suggestions;
  struct TrieNode* current = root;
  for (int i = 0; i < partialWord.length(); i++) {
    int index = partialWord[i] - 'a';
    if (current->children[index] == NULL) {
      return suggestions;
    }
    current = current->children[index];
  }
  if (current->isEndOfWord) {
    suggestions.push_back(partialWord);
  }
  for (int i = 0; i < 26; i++) {
    if (current->children[i] != NULL) {
      std::string word = partialWord + (char)(i + 'a');
      std::vector<std::string> childSuggestions = getSuggestions(word);
      suggestions.insert(suggestions.end(), childSuggestions.begin(), childSuggestions.end());
    }
  }
  return suggestions;
}

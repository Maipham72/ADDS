#include "Autocomplete.h"

Autocomplete::Autocomplete() { root = new TrieNode(); }

void Autocomplete::insertWord(TrieNode* root, std::string word) {
  for (char c : word) {
    int index = c - 'a';
    if (root->children[index] == NULL) {
      root->children[index] = new TrieNode();
    }
    root = root->children[index];
  }
  root->isEndOfWord = true;
}

void Autocomplete::suggestionHelper(TrieNode* node,const std::string& partialWord, std::vector<std::string>& result, std::string currentWord) {
  if (!node) return;

  if (node->isEndOfWord) {
    result.push_back(currentWord);
  }

  for (int i = 0; i < 26; ++i) {
    if (node->children[i]) {
      char c = 'a' + i;
      suggestionHelper(node->children[i], partialWord, result, currentWord + c);
    }
  }
}

void Autocomplete::insert(std::string word) { insertWord(root, word); }

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
  std::vector<std::string> suggestions;
  TrieNode* node = root;

  for (char c : partialWord) {
    int index = c - 'a';
    if (!node->children[index]) {
      return suggestions;  // No suggestions found
    }
    node = node->children[index];
  }

  suggestionHelper(node, partialWord, suggestions, partialWord);

  return suggestions;
}

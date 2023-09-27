#include "Autocomplete.h"

Autocomplete::Autocomplete() { 
  root = new TrieNode(); 
}

void Autocomplete::insertWord(TrieNode* root, std::string word) {
  for (int i=0; i < word.length(); i++) {
    int index = word.at(i) - 'a';
    if (root->children[index] == NULL) {
      root->children[index] = new TrieNode();
    }
    root = root->children[index];
  }
  root->isEndOfWord = true;
}

void Autocomplete::suggestionHelper(TrieNode* root,std::string partialWord, std::vector<std::string> suggestion, std::string currentWord) {
  if (root == nullptr) {
    return;
  }

  if (root->isEndOfWord) {
    suggestion.push_back(currentWord);
  }

  for (int i=0; i < 26; i++) {
    if (root->children[i]) {
      char c = 'a' + i;
      suggestionHelper(root->children[i], partialWord, suggestion, currentWord + c);
    }
  }
}

void Autocomplete::insert(std::string word) { 
  insertWord(root, word); 
}


std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {

  std::vector<std::string> suggestions;
  TrieNode* node = root;

  for (int i = 0; i < partialWord.length(); i++) {
    int index = partialWord.at(i) - 'a';
    if (node->children[index] == NULL) {
      return suggestions;  
    }
    node = node->children[index];
  }

  suggestionHelper(node, partialWord, suggestions, partialWord);

  return suggestions;
}

#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <string>
#include "TrieNode.h"

class Autocomplete : public TrieNode {
  private:
  TrieNode* root;

  void suggestionHelper(TrieNode* root, std::string partialWord, std::vector<std::string> suggestion, std::string currentWord);

  void insertWord(TrieNode* root, std::string word);


  public:
  Autocomplete();

  std::vector<std::string> getSuggestions (std::string partialWord);

  void insert(std::string word); 

};

#endif
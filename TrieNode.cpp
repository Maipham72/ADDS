#include "TrieNode.h"
#include <string>

void TrieNode::insertWord(struct TrieNode* root, std::string word) {
  struct TrieNode* current = root;
  for (int i = 0; i < word.length(); i++) {
    int index = word[i] - 'a';
    if (!current->children[index]) {
      current->children[index] = new TrieNode();
    }
    current = current->children[index];
  }
  current->isEndOfWord = true;
}


bool TrieNode::isPrefixExist(TrieNode* root, std::string prefix) {
  struct TrieNode* current = root;
  for (int i = 0; i < prefix.length(); i++) {
    int index = prefix[i] - 'a';
    if (current->children[index] == NULL) {
      return false;
    }
    current = current->children[index];
  }
  return true;
}

TrieNode::TrieNode() {
  isEndOfWord = false;
  for (int i = 0; i < 26; i++) {
    children[i] = NULL;
  }
}





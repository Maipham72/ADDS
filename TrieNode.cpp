#include "TrieNode.h"
#include <string>

TrieNode::TrieNode() {
  for (int i=0; i<26; i++) {
      children[i] = nullptr;
  }
  isEndOfWord = false;
};



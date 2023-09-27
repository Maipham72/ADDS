#include "PrefixMatcher.h"

#include <algorithm>

PrefixMatcher::PrefixMatcher() { root = new TrieNode(); }

void PrefixMatcher::insert(std::string address, int routerNumber) {
  TrieNode* current = root;

  for (int i = 0; i < address.length(); i++) {
    if (current->children[i] == NULL) {
      TrieNode* newNode = new TrieNode();
      current->children[i] = newNode;
    }
    current = current->children[i];
  }
  current->isEndOfWord = true;
  current->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
  TrieNode* current = root;
  int lastMatch = -1;

  for (int i = 0; i < networkAddress.length(); i++) {
    if (current->children[i] == NULL) {
      current = current->children[i];
      if (current->routerNumber != -1) {
        lastMatch = current->routerNumber;
      }
    } else {
      break;
    }
  }
  return lastMatch;
}
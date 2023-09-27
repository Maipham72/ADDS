#include "PrefixMatcher.h"

#include <algorithm>

PrefixMatcher::PrefixMatcher() { root = new TrieNode(); }

void PrefixMatcher::insert(std::string address, int routerNumber) {
  TrieNode* current = root;

  for (char c: address) {
    int index = c - '0';
    if (current->children[index] == NULL) {
      TrieNode* newNode = new TrieNode();
      current->children[c] = newNode;
    }
    current = current->children[c];
  }
  current->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
  TrieNode* current = root;
  int lastMatch = -1;

  for (char c: networkAddress) {
    int index = c - '0';
    if (current->children[index]) {
      current = current->children[c];
      if (current->routerNumber != -1) {
        lastMatch = current->routerNumber; 
      } else {
          break;
      }
    }
  }
  return lastMatch;
}
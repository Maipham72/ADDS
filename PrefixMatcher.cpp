#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() {    
  root = new TrieNode(); 
}


void PrefixMatcher::insert(std::string address, int routerNumber) {
  TrieNode* current = root;

  for (char num: address) {
    int index = num - '0';
    if (current->child[index] == nullptr) {
      current->child[index] = new TrieNode();
      }
    current = current->child[index];
  }
  current->routerNumber = routerNumber;
}


int PrefixMatcher::selectRouter(std::string networkAddress) {
  TrieNode* current = root;
  int lastMatch = -1;

  for (char c: networkAddress) {
    int index = c - '0';
    if (current->routerNumber != -1) {
      lastMatch = current->routerNumber;
    }
    if (current->child[index] != nullptr) {
        current = current->child[index];
      } else {
          break;
      }
    }
    if (current->routerNumber != -1) {
      lastMatch = current->routerNumber;
    }

    return lastMatch;
}

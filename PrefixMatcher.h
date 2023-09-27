#ifndef PREFIXMATCHER_H
#define PREFIXMATHCER_H
#include "TrieNode.h"

class PrefixMatcher: public TrieNode {
  private:
  TrieNode* root;

  public:
  PrefixMatcher();
  bool foundRouter;

  int selectRouter(std::string networkAddress);

  void insert(std::string address, int rounterNumber);
};

#endif
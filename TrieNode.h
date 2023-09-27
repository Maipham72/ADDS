#ifndef TRIENODE_H
#define TRIENODE_H
#include <vector>
#include <string>
#include <iostream>

class TrieNode
{
  public:
  TrieNode();

  bool isEndOfWord;
  TrieNode* children[26];
  int routerNumber;

  // void insert(TrieNode* root, std::string word);

  // void printTrie (TrieNode* root);
};

#endif

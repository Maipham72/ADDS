#ifndef TRIENODE_H
#define TRIENODE_H
#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>

class TrieNode
{
  public:
  TrieNode();

  bool isEndOfWord;
  TrieNode* children[26];

  std::unordered_map<char, TrieNode*> child;
  int routerNumber;



  //std::vector<std::string> child;

  // void insert(TrieNode* root, std::string word);

  // void printTrie (TrieNode* root);
};

#endif

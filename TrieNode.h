#ifndef TRIENODE_H
#define TRIENODE_H
#include <vector>
#include <string>

class TrieNode
{
  public:
  TrieNode();

  TrieNode* root;

  void insertWord(struct TrieNode* root, std::string word);

  struct TrieNode* children[26];
  bool isEndOfWord;
  bool isPrefixExist(TrieNode* root, std::string prefix);

};

#endif

#include "TrieNode.h"
#include <string>

TrieNode::TrieNode() {
  for (int i=0; i<26; i++) {
      children[i] = nullptr;
  }
  isEndOfWord = false;
};


// void TrieNode::insert(TrieNode* root, std::string word) {
//   TrieNode* currentNode = root;

//   for (int i = 0; i<word.length(); i++) {
//     int index = word[i] - 'a';

//     if (currentNode->children == NULL) {
//       TrieNode* newNode = new TrieNode();
//       currentNode->children[i] = newNode;
//     }
//     currentNode = currentNode->children[i];
//   }
//   currentNode->isEndOfWord = true;
// }

 
// void TrieNode::printTrie(TrieNode* root) {
//   if (root == NULL) {
//     return;
//   }

//   TrieNode* current = root;
//   for (int i=0; i<26; i++) {
//     std::cout << children[i];
//   }









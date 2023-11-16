#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
  head = nullptr;
}

Node* LinkedList::traverse(int index) {
  int pos = 0; 
  Node* currNode = head;

  while(currNode != nullptr && pos < index) {
    currNode = currNode->link;
    pos++;
  }

  return currNode;
}

void LinkedList::insert(int newData, int index) {
  if (index == 0) {
    head = new Node(newData, head);
    return;
  }
  
  Node* prevNode = traverse(index - 1);
  if (prevNode == nullptr) {
    return;
  }

  Node* newNode = new Node(newData, prevNode->link);
  prevNode->link = newNode;
}

void LinkedList::printList() {
  Node* currNode = this->head;
  
  while (currNode != nullptr) {
    std::cout << currNode->data << std::endl;
    currNode = currNode->link;
  }

  std::cout << std::endl;
}
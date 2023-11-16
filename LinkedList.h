#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList {
  Node* head;

  public:
  LinkedList();
  //~LinkedList();

  Node* traverse(int index);

  void insert(int newData, int index);

  void printList();


};

#endif
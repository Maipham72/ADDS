#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList {
    Node* head;

  public:
    LinkedList();
    ~LinkedList();

    void insertAtFront(int item);
    void printList();
    void deleteFront();

    bool swap(int pos1, int pos2);
    bool find_and_delete(int target);

};

#endif
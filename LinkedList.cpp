#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
  head = nullptr;
}

LinkedList::~LinkedList() {
  if (head != nullptr) {
    deleteFront();
  }
}

void LinkedList::insertAtFront(int item) {
  Node* newNode = new Node(item,head);
  newNode = head; 
}

void LinkedList::deleteFront() {
  if (head != nullptr) {  //not empty
    Node* oldhead = head;
    head = head->link;
    delete oldhead;
  }
}

void LinkedList::printList(){
  Node* currNode;
  while (currNode != nullptr) {
    std::cout << currNode->data << " ";
    currNode= currNode->link;
  }
}

bool LinkedList::swap(int pos1, int pos2) {
  Node* currNode = head;
  Node* node1 = nullptr;
  Node* node2 = nullptr;
  int count = 0;
  while (currNode != nullptr) {
    if (pos1 == count) {
      node1 = currNode;
    }
    if (pos2 == count) {
      node2 = currNode;
    }
    currNode = currNode->link;
    count++;
  }
  if (node1 != nullptr && node2 != nullptr) {
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
    return true;
  }
  return false;
}

bool LinkedList::find_and_delete(int target) {
  Node* currNode = head;
  Node* prevNode = nullptr;
  int count = 0;
  while (currNode != nullptr) {
    if (currNode->data == target) {
      if (prevNode == nullptr) {
        prevNode->link = head;
      } else {
        prevNode->link = currNode->link;
      }
      delete currNode;
      return true;
    }
    prevNode = currNode;
    currNode = currNode->link;
  }
  return false;
}
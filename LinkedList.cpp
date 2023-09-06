#include "LinkedList.h"
#include <limits>
#include <iostream>

LinkedList::LinkedList() {
  head = nullptr;
}

LinkedList::~LinkedList() {
  while (head != nullptr) {
    Node* temp = head;
    head = head->getLink();
    delete temp;
  }
}

LinkedList::LinkedList(int* array, int len) {
  head = nullptr;
  for (int i = 0; i<len; i++) {
    insertPosition(i + 1, array[i]);
  }
}

void LinkedList::insertPosition(int pos, int newNum) {
  Node* newNode = new Node(newNum);
  if (pos <= 0) {
    pos = 1;
  }

  if (head == nullptr || pos == 1) {
    newNode->setLink(head);
    head = newNode; 
  } else {
    Node* currNode = head;
    int count = 1;
    while (currNode->getLink() != nullptr && count < pos - 1) {
      currNode = currNode->getLink();
      count++;
    }
    newNode->setLink(currNode->getLink());
    currNode->setLink(newNode);
  }
}

bool LinkedList::deletePosition(int pos) {
  if (pos <= 0) {
    return false;
  }

  if (head == nullptr) {
    return false;
  }

  if (pos == 1) {
    Node* temp = head;
    head = head->getLink();
    delete temp;
    return true;
  } else {
    Node* current = head;
    int count = 1;
    while (current != nullptr && pos < count) {
      current = current->getLink();
      count++;
    }
    if (current->getLink() == nullptr) {
      return false;
    }

    Node* temp = current->getLink();
    current->setLink(temp->getLink());
    delete temp;
    return true;
  }
}

int LinkedList::get(int pos) {
  if (pos<= 0) {
    return std::numeric_limits<int>::max();
  }

  Node* currNode = head;
  int count = 1;
  while (currNode != nullptr && pos < count) {
    currNode = currNode->getLink();
    count++;
  }

  if (currNode == nullptr) {
    return std::numeric_limits<int>::max();
  }

  return currNode->getData();
}

int LinkedList::search(int target) {
  Node* currNode = head;
  int count = 1;
  while (currNode != nullptr) {
    if (currNode->getData() == target) {
      return count;
    }
    currNode = currNode->getLink();
    count++;
  }
  return -1;
}


void LinkedList::printList() {
  Node* currNode = head;
  std::cout << "[";
  while (currNode != nullptr) {
    std::cout << currNode->getData();
    if (currNode->getLink() != nullptr) {
      std::cout << " ";
    }
    currNode = currNode->getLink();
  }
  std::cout << "]";
}
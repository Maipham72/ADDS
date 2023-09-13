#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
    count++;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}


bool LinkedList::swap(int pos1, int pos2) {
    if (pos1 > count -1 || pos2 > count - 1 || pos1 < 0 || pos2 < 0) {
        return false;
    }
    Node* currNode = head;
    Node* node1 = nullptr;
    Node* node2 = nullptr;
    int count = 0;
    while(currNode != nullptr) {
        if(count == pos1) {
            node1 = currNode;
        }
        if(count == pos2) {
            node2 = currNode;
        }
        currNode = currNode->link;
        count++;
    }
    if(node1 != nullptr && node2 != nullptr) {
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
    while(currNode != nullptr) {
        if(currNode->data == target) {
            if(prevNode == nullptr) {
                head = currNode->link;
            } else {
                prevNode->link = currNode->link;
            }
            if (count > 2) {
                delete currNode;
            }
            delete currNode;
            return true;
        }
        prevNode = currNode;
        currNode = currNode->link;
    }
    return false;

}
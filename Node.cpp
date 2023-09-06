#include "Node.h"

Node::Node(int data) {
  data = this->data;
  link = nullptr;
}

int Node::getData() {
  return data;
}

Node* Node::getLink(){
  return link;
}

void Node::setLink(Node* newLink) {
  link = newLink;
}

#include "Node.h"

Node::Node(int newData) {
  data = newData;
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

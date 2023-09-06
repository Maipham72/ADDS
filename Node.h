#ifndef NODE_H
#define NODE_H

class Node {
  private:
    int data;
    Node* link;
  
  public:
    Node(int newData);
    int getData();
    Node* getLink();
    void setLink(Node* newLink);

};

#endif
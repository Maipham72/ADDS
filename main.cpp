#include "LinkedList.h"

int main() {
LinkedList ll;

ll.insert(9, 0); // insert a node into an empty list
ll.insert(3, 0); // insert a node infront of the only node
ll.insert(6, 1); // insert a node between our two nodes
ll.insert(12, 10); // insert a node out of bounds
ll.insert(12, 3);

ll.printList();
}
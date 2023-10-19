#include "DocumentManager.h"
#include <iostream>

int main() {
    DocumentManager doc; 
    doc.addDocument("a",1,3);
    doc.addDocument("b",2,3);
    doc.addDocument("c",3,3);
    doc.addDocument("d",4,3);

    doc.search("e");

    
}
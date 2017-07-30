#include "Stack.h"
#include <cstdio>
#include <cassert>

using namespace std;

void Stack::Pop(){
    assert(!IsEmpty() && "The stack is empty!");  // check if the stack is empty.
    Node *tmp_node = top;
    printf("%d\n", top -> getData());   // print out data.
    top = top -> getNode(); // top = top->next.
    delete tmp_node;    // delet pop out node.
}

void Stack::Push(int data){
    Node *new_node = new Node;
    new_node -> addData(data);  // add data to node.
    new_node -> addLink(top);    // new_node->next = top.
    top = new_node; // top node = new node.
}

#ifndef STACK_H
#define STACK_H
#include <cstddef>
#include <cassert>
#include <cstdio>
#include "Node.h"

using namespace std;

template <class T>
class Stack{
    private:
        Node<T> *top;
        int n;  // stack size
    public:
        Stack():top(NULL), n(0){}
        ~Stack(){ delete top;}
        bool IsEmpty() const { return top == NULL;} // check if the stack is empty.
        int Size(){ return n;}  // get the stack size.
        void Push(T data){    // push data in the stack.
            Node<T> *new_node = new Node<T>;
            new_node -> addData(data);  // add data to node.
            new_node -> addLink(top);    // new_node->next = top
            top = new_node; // top node = new node  
            n++;
        }
        void Pop(){ // pop data out the stack.
            assert(!IsEmpty() && "The stack is empty!");  // check if the stack is empty.
            Node<T> *tmp_node = top;
            printf("%d\n", top -> getData());   // print out data.
            top = top -> getNode(); // top = top->next
            delete tmp_node;    // delet pop out node.
            n--;
        }
};
#endif

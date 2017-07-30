#ifndef STACK_H
#define STACK_H
#include <cstddef>
#include "Node.h"

using namespace std;

class Stack{
    public:
        Stack():top(NULL){}
        ~Stack(){ delete top;}
        bool IsEmpty() const { return top == NULL;} // check if the stack is empty.
        void Push(int data);    // push data in the stack.
        void Pop(); // pop data out the stack.
    private:
        Node *top;
};
#endif

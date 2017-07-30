#include <cstdio>
#include "Stack.h"

using namespace std;

int main(){
    Stack stack;
    stack.Push(10);
    stack.Push(100);
    stack.Pop();
    stack.Pop();
    stack.Push(8);
    stack.Pop();
    stack.Pop();
    return 0;
}

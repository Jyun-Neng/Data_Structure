#include <cstdio>
#include "Stack.h"

using namespace std;

int main(){
    Stack<int> stack;
    int a = 10;
    stack.Push(a);
    a = 100;
    stack.Push(a);
    printf("The stack size is %d,\n", stack.Size());
    stack.Pop();
    stack.Pop();
    printf("The stack size is %d,\n", stack.Size());
    a = 8;
    stack.Push(a);
    stack.Pop();
    stack.Pop();
    return 0;
}

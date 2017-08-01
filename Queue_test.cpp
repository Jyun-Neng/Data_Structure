#include "Queue.h"
#include <cstdio>

using namespace std;

int main(){
    Queue<char> queue;
    char data = 'a';
    queue.Enqueue(data);
    queue.Enqueue(data);
    queue.Enqueue(data);
    data = 'k';
    queue.Enqueue(data);
    data = 'b';
    queue.Enqueue(data);
    queue.Enqueue(data);
    data = 'c';
    queue.Enqueue(data);
    printf("The queue size is %d.\n", queue.Size());
    queue.Dequeue();
    queue.Dequeue();
    queue.Dequeue();
    queue.Dequeue();
    return 0;
}

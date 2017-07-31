#include "Queue.h"
#include <cstdio>

using namespace std;

int main(){
    Queue<int> queue;
    queue.Enqueue(100);
    queue.Enqueue(10);
    queue.Enqueue(7);
    queue.Enqueue(60);
    printf("The queue size is %d.\n", queue.Size());
    queue.Dequeue();
    queue.Dequeue();
    queue.Dequeue();
    queue.Dequeue();
    return 0;
}

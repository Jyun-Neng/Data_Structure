#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"
#include <cstddef>
#include <cassert>
#include <cstdio>

using namespace std;

template <class T>
class Queue{
    private:
        Node<T> *rear;
        int n;  // queue size.
    public:
        Queue():rear(NULL), n(0){}
        ~Queue(){
            if (n == 0)
                return;
            delete rear;
        }
        bool IsEmpty() const { return n == 0;}
        int Size(){ return n;}  // get queue size.
        void Enqueue(T data){    // push the data.
            Node<T> *new_node = new Node<T>;
            new_node -> addData(data);
            if (IsEmpty())  // queue is empty.
               new_node -> addLink(new_node);   // link itself.
            else{    // queue is not empty.
               new_node -> addLink(rear -> getNode());  // new_node->next = rear->next
               rear -> addLink(new_node);   // rear->next = new_node
            }              
            rear = new_node;
            n++;
        }
        void Dequeue(){  // pop the front data.
            assert(!IsEmpty() && "Queue is empty!");    // check if the queue is empty.
            Node<T> *tmp_node = rear -> getNode();  // tmp_node = rear->next
            printf("%d\n", tmp_node -> getData());
            rear -> addLink(tmp_node -> getNode());  // rear->next = rear->next->next
            n--;
            delete tmp_node;
        }
};
#endif

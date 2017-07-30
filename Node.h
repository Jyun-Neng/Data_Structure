#ifndef NODE_H
#define NODE_H

template <class T>
class Node{
    private:
        T data;
        Node *next;
    public:
        T getData(){ return data;}    // get Node data.
        void addData(T out_data){ data = out_data;}   // add node data.
        void addLink(Node *next_node){ next = next_node;}   // link to next node.
        Node *getNode(){ return next;} // get next node.
};
#endif

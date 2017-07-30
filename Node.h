#ifndef NODE_H
#define NODE_H

class Node{
    private:
        int data;
        Node *next;
    public:
        int getData(){ return data;}    // get Node data.
        void addData(int out_data){ data = out_data;}   // add node data.
        void addLink(Node *next_node){ next = next_node;}   // link to next node.
        Node *getNode(){ return next;} // get next node.
};
#endif

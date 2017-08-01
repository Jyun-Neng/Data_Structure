#ifndef NODE_H
#define NODE_H
#include <cstddef>

using namespace std;

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

template <class T>
class TNode{
    private:
        T data;
        TNode *left;
        TNode *right;
        TNode *parent;
    public:
        TNode():parent(NULL), left(NULL), right(NULL), data(){}
        T getData(){ return data;}
        TNode *getLeft(){ return left;}
        TNode *getRight(){ return right;}
        TNode *getPar(){ return parent;}
        void addData(T out_data){ data = out_data;}
        void addRight(TNode *right_node){ right = right_node;}
        void addLeft(TNode *left_node){ left = left_node;}
        void addPar(TNode *par_node){ parent = par_node;}
};
#endif

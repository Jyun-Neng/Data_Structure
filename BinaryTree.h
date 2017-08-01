#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "Node.h"
#include <queue>
#include <cstddef>
#include <cassert>
#include <cstdio>

using namespace std;

template <class T>
void preorder(TNode<T> *position){
    if (position != NULL){
        printf("%d\n", position -> getData());
        preorder(position -> getLeft());
        preorder(position -> getRight()); 
    }
}

template <class T>
class BinaryTree{
    private:
        TNode<T> *root;
    public:
        BinaryTree():root(NULL){}
        bool IsEmpty(){ return root == NULL;}
        void PreOrder(){ preorder(root);}   // DLR
  //      void InOrder();
 //       void PostOrder();
        void AddRoot(T data){
            TNode<T> *new_node = new TNode<T>;
            new_node -> addData(data);
            root = new_node;
        }
        void AddChild(T data){
            assert(!IsEmpty() && "The tree is empty!");
            queue<TNode<T>*> q;
            TNode<T> *new_node = new TNode<T>;
            new_node -> addData(data);
            TNode<T> *position = root;
            while (new_node -> getPar() == NULL){       // if the new node is added to the tree.
                if (position -> getLeft() == NULL){     // if the new node can add to left.
                    new_node -> addPar(position);
                    position -> addLeft(new_node);
                    continue;
                }
                q.push(position -> getLeft());
                if (position -> getRight() == NULL){    // if the new node can add to right.
                    new_node -> addPar(position);
                    position -> addRight(new_node);
                    continue;
                }
                q.push(position -> getRight());
                position = q.front();
                q.pop();
            }       
        }
        void RemoveTree(TNode<T> *position){    // free the node space.
            if (position == NULL) return;
            RemoveTree(position -> getLeft());
            RemoveTree(position -> getRight());
            delete position;
        }
        ~BinaryTree(){ RemoveTree(root);}
};
#endif

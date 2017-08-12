#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "Node.h"
#include <queue>
#include <cstddef>
#include <cassert>
#include <iostream>

using namespace std;

template <class T>
void preorder(TNode<T> *position){
    if (position != NULL){
        cout << position -> getData() << endl;
        preorder(position -> getLeft());
        preorder(position -> getRight()); 
    }
}

template <class T>
void inorder(TNode<T> *position){
    if (position != NULL){
        inorder(position -> getLeft());
        cout << position -> getData() << endl;
        inorder(position -> getRight());
    }
}

template <class T>
void postorder(TNode<T> *position){
    if (position != NULL){
        postorder(position -> getLeft());
        postorder(position -> getRight());
        cout << position -> getData() << endl;
    }
}

template <class T>
TNode<T> *copy(TNode<T> *ori){
    TNode<T> *new_node = new TNode<T>;
    if (ori == NULL){
        new_node = NULL;
        return new_node;
    }
    new_node -> addData(ori -> getData());
    new_node -> addLeft(copy(ori -> getLeft()));
    new_node -> addRight(copy(ori -> getRight()));
    return new_node;
}


template <class T>
class BinaryTree{
    private:
        TNode<T> *root;
        int n;  // the number of nodes.
    public:
        BinaryTree():root(NULL),n(0){}
        bool IsEmpty(){ return root == NULL;}
        TNode<T> *GetRoot(){ return root;}
        int NodeNum(){ return n;}
        void PreOrder(){ preorder(root);}   // DLR
        void InOrder(){ inorder(root);}     // LDR
        void PostOrder(){ postorder(root);}    // LRD
        void Copy(BinaryTree<T> BTree){ root = copy(BTree.GetRoot());}
        void AddRoot(T data){
            TNode<T> *new_node = new TNode<T>;
            new_node -> addData(data);
            root = new_node;
            n = 1;
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
            n++;
        }
        // void RemoveTree(TNode<T> *position){    // free the node space.
        //     if (position == NULL) return;
        //     RemoveTree(position -> getLeft());
        //     RemoveTree(position -> getRight());
        //     cout << "delete" << endl;
        //     delete position;
        // }
        //~BinaryTree(){ RemoveTree(root);}
};
#endif

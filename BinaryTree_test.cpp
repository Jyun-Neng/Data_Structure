#include "BinaryTree.h"

int main(){
    BinaryTree<int> BTree;
    BTree.AddRoot(0);
    BTree.AddChild(1);
    BTree.AddChild(2);
    BTree.AddChild(3);
    BTree.AddChild(4);
    BTree.AddChild(5);
    BTree.PreOrder();
    BTree.InOrder();
    BTree.PostOrder();

    return 0;
}

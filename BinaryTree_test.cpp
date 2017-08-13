#include "BinaryTree.h"
#include <cstdio>

using namespace std;

template <class T>
void isEqual(BinaryTree<T> &s, BinaryTree<T> &t){
    if (s == t) printf("These two trees are equal.\n");
    else printf("These two trees are not equal.\n");
}

int main(){
    BinaryTree<char> BTree;
    char data = 'a';
    BTree.AddRoot(data);
    data = 'b';
    BTree.AddChild(data);
    data = 'c';
    BTree.AddChild(data);
    data = 'd';
    BTree.AddChild(data);
    data = 'e';
    BTree.AddChild(data);
    data = '1';
    BTree.AddChild(data);
    BTree.PreOrder();
    BTree.InOrder();
    BTree.PostOrder();

    printf("The total nodes in this binary tree is %d\n", BTree.NodeNum());

    BinaryTree<char> BTree2;
    BTree2 = BTree; // copy BTree to BTree2
    printf("BTree2\n");
    BTree2.PreOrder();

    isEqual(BTree, BTree2);

    BinaryTree<char> BTree3;
    data = '1';
    BTree3.AddRoot(data);
    data = '2';
    BTree3.AddChild(data);
    data = 'c';
    BTree3.AddChild(data);
    data = 'd';
    BTree3.AddChild(data);
    BTree2 = BTree3;
    BTree2.PreOrder();
    isEqual(BTree3,BTree2);
    isEqual(BTree2, BTree);

    return 0;
}

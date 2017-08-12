#include "BinaryTree.h"
#include <cstdio>

using namespace std;

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
    printf("%d\n", BTree.NodeNum());
    
    BinaryTree<char> BTree2;
    BTree2.Copy(BTree);
    BTree2.PreOrder();


    return 0;
}

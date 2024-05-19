#include <iostream>
#include "Binary_Tree.h"

int main() 
{
    BinaryTree<int> tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    tree.inorderTraversal();

    return 0;
}
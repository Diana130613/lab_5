#ifndef Binary_Tree_H
#define Binary_Tree_H
#include <iostream>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T value) : data(value), left(nullptr), right(nullptr) {}
};

template <typename T>
class BinaryTree
{
private:
    BinaryTreeNode<T>* root;

    void insert(BinaryTreeNode<T>*& node, T value)
    {
        if (node == nullptr) 
        {
            node = new BinaryTreeNode<T>(value);
        }
        else if (value < node->data)
        {
            insert(node->left, value);
        }
        else
        {
            insert(node->right, value);
        }
    }

    void inorder(BinaryTreeNode<T>* node) {
        if (node != nullptr) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(T value)
    {
        insert(root, value);
    }

    void inorderTraversal()
    {
        inorder(root);
        cout << endl;
    }
};
#endif
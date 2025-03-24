/*
Leaf node - A node in a binary tree that doesn't have any child node is called a leaf node

                                1
                    2                       3
            4               5         6             7
        8       9                 10      11
                                12           13

The lead nodes in above binary tree are nodes with value 8, 9, 5, 12, 13, 7
Hence the total number of leaf nodes in our binary tree is 6



*/

#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value)
        {
            data = value;
            left = right = NULL;
        }
};

int countLeaf(Node* root)
{
    int count;
    if(root->left && root->right == NULL)
    {
        count++;
        return;
    }

    countLeaf(root->left);
    countLeaf(root->right);

    return count;

}
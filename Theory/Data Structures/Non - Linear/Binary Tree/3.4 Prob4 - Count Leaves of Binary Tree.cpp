/*
Leaf node - A node in a binary tree that doesn't have any child node is called a leaf node

                                1
                    2                       3
            4               5         6             7
        8       9                 10      11
                                12           13

The leaf nodes in above binary tree are nodes with value 8, 9, 5, 12, 13, 7
Hence the total number of leaf nodes in our binary tree is 6

The leaf nodes are present at the bottom of the binary tree. We traverse the Binary tree & once we reach the bottom node we increment the value of the counter
variable by 1.

So we start from the root node ie. node with value 1. We then traverse the left subtree followed by the right subtree of this node with value 1.

We first traverse the left subtree of this node with value 1 ie. we start by traversing the left node of node with value 1 ie. the root node.

We go to the node with value 2 which is the left child of node with value 1 ie. the root node. We check whether this node with value 2 is a leaf node or not ie. 
whether this node with value 2 has a left or right child node or not. Now as node with value 2 has a left child node , the value of count variable is not incremented 
because node with value 2 is not a leaf node. We then make a recursive call to get the count/number of total leaf nodes present in the left subtree of node with value 2.

We go to the node with value 4 which is the left child of node with value 2. We check whether this node with value 4 is a leaf node or not ie. whether this node with value 4 
has a left or right child node or not. Now as node with value 4 has a left child node , the value of count variable is not incremented because node with value 4 is not a leaf node. 
We then make a recursive call to get the count/number of total leaf nodes present in the left subtree of node with value 4.




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
    if(!root->left && !root->right == NULL)
    {
        count++;
        return;
    }

    countLeaf(root->left);
    countLeaf(root->right);

    return count;

}
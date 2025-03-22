/*
In this approach we add the value of the current node to the value obtained from the recursive call for the left node/left subtree 
of the current node & the value obtained from the recursive call for the right node/right subtree of the current node.

Lets say we are given a binary tree 
                            3
                    2               1
            4           7               5
        8       9                           6


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

int TotalSum(Node* root, int& sum)
{
    if(root == NULL)
    {
        return;
    }

    int sum = root->data + TotalSum(root->left, sum) + TotalSum(root->right, sum);
    return sum;
}
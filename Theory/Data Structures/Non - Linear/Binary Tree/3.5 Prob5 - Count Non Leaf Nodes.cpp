/*

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
            right = left = NULL;
        }

};

int countNonLeaves(Node* root)
{
    if(!root)
    {
        return 0;
    }
    
    if(!root->left && !root->right)
    {
        return 0;
    }

    return(1+countNonLeaves(root->left)+countNonLeaves(root->right));
}
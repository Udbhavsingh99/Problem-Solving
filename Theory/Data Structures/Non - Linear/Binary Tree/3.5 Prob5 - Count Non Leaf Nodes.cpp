/*
Now we want to get the total number of non leaf nodes in our tree.

So, we traverse the tree & for each node we check whether the node has a left & right child node or not. If the tree has atleast one child node ie. 
the node has either the left child node or the right child node , then we increment the value of count. 
If the node has neither a left child node nor a right child node , then it implies that this node is a leaf node & hence we don't increment the count 
variable. 

For each node which is not a leaf node we add 1 to the recursive call to get all the non leaf nodes in the left subtree of the node & the recursive call to get
all the non leaf nodes in the right subtree of the node. 

If we encounter a leaf node then we return 0 for that recursive subtree call. 

int NonLeaf(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    if(!root->left && !root->right)
    {
        return 0;
    }

    return (1+NonLeaf(root->left)+NonLeaf(root->right));
}
    
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
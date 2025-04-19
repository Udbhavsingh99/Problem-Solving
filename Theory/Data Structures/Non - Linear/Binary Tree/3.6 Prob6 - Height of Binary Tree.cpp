/*
Height of Binary Tree is defined as the distance between the root node & the farthest node from this root node.

Height of Binary Tree is the total sum of number of all the edges present between the root node & the farthest node from this root node.

Technically the height of a binary tree is defined as the number of edges from the root node to the farthest node in the binary tree. 

But for practicality purpose the height of tree is defined as the sum of total number of nodes between the root node of the tree & the farthest node from this
root node.

So for practicality purpose we will count the number of nodes & not the number of edges between the root node & the farthest node from this 
root node.

If we want to get the height of the tree , then we need to go to the farthest node from the root node which will be the leaf node because the 
leaf nodes will be the farthest nodes from the root node of the tree.

So in order to get the height of the binary tree we need to check the distance of all leaf nodes from the root node of the tree. The height of the 
tree is the distance ie. number of nodes between the root node & the leaf node farthest away from this root node of the tree. 

We start from the root node & traverse to the leaf node & while doing so keep on counting the number of nodes between the root node & the leaf node 
we are traversing to. We stop only once we reach a leaf node.

Now we add 1 as the height of the present node. Then we need to find the largest possible height in the left subtree & the largest possible height in the right subtree.
Now the maximum of these two heights ie. the maximum of the largest possible height in the left subtree & the right subtree will be added to the 1 ie. the height of the present 
node.

Lets assume we have a tree

                                                    1
                                        2                       3
                                4           5               6           7  
                            8            9              10     11          12
                                            13                                  14
                                                                              15
                                
Now we start with the root node ie. node with value 1. We then traverse the left subtree of this root node ie. node with value 1 to find the largest possible height in the left subtree. 
We then traverse the right subtree of this root node ie. node with value 1 to find the largest possible height in the right subtree. 

Now we know that for the left subtree of node with value 1 , the largest possible height is 4 for the nodes 1-2-5-9-13 .
Now for the right subtree of node with value 1 , the largest possible height is 6 for the nodes 1-3-7-12-14-15

Basically we add 1 to the largest/maximum possible height in both the subtrees of the present node. 
1:32:50




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

int treeHeight(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    if(treeHeight(root->left) > treeHeight(root->right))
    {
        return 1+treeHeight(root->left);
    }
    else
    {
        return 1+treeHeight(root->right);
    }
}
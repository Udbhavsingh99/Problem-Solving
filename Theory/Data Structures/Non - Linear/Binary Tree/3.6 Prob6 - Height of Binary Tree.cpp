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
                                
Now we start with the root node ie. node with value 1. We then traverse the left subtree of this root node ie. node with value 1 , to find the largest possible height in the left subtree. 
We then traverse the right subtree of this root node ie. node with value 1 , to find the largest possible height in the right subtree. 

Now we know that for the left subtree of node with value 1 , the largest possible height is 4 for the nodes 1-2-5-9-13 .
Now for the right subtree of node with value 1 , the largest possible height is 5 for the nodes 1-3-7-12-14-15

Basically we add 1 to the largest/maximum possible height in both ie. left & right the subtrees of the present node. 
So we add the height of the present node ie. 1 to the maximum of the value returned by the  recursive call for getting the height of the left subtree 
& the recursive call for getting the height of the right subtree  

So we get the height for the left subtree of a given node & then get the height for the right subtree of a given node.
Then we take the maximum of these two heights & add 1 to it.

Check the distance of the root node with all the leaf nodes & the height of the binary tree will be equal to the distance of the leaf node that is present 
at the maximum distance from the root node. 

So we add 1 for the present node value & then to this we add the maximum of the maximum possible height in the left subtree & the maximum possible height in the right subtree 
of the present node.

The maximum possible height in the left subtree of node with value 1 is 4 & the maximum possible height in the right subtree of node with value 1 is 5.
As 5>4 ie. the height of the right subtree for node with value 1 is greater than the height of the left subtree for node with value 1 , so we take 5 as the maximum possible height between the left & right subtree of node with value 1
& add 1 to it for the present node ie. 1+5 = 6. Hence, 6 is the height of the binary tree.

At each node we call the function recursively as

1 + max(height(left subtree), height(right subtree))

int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    return 1 + max(height(root->left), height(root->right));
}

Dry Run of the Code on following tree :

                                                    1
                                        2                       3
                                4           5               6           7  
                            8            9              10     11          12
                                            13                                  14
                                                                              15

The height of the binary tree is 6 as the maximum distance from the root node to the farthest leaf node is 6 ie. for the path 1-3-7-12-14-15
First we traverse the left subtree of root node ie. node with value 1 , to get the maximum possible height in the left subtree.
Then we traverse the right subtree of root node ie. node with value 1 , to get the maximum possible height in the right subtree.

For the left subtree of node with value 1 , we go to node with value 2 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 2.
We go to the left subtree of node with value 2 , ie. node with value 4 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 4.
We go to the left subtree of node with value 4 , ie. node with value 8 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 8.
We go to the left subtree of node with value 8 , which is NULL , so we return 0. We then go to the right subtree of node with value 8 , which is NULL , so we return 0.
So for node with value 8 , we have 1 + max(0,0) = 1 , so we return 1 to the previous call ie. node with value 4.
We then go to the right subtree of node with value 4 , which is NULL , so we return 0.
So for node with value 4 , we have 1 + max(1,0) = 2 , so we return 2 to the previous call ie. node with value 2.
We then go to the right subtree of node with value 2 , ie. node with value 5 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 5.
We go to the left subtree of node with value 5 , which is 9 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 9.
We go to the left subtree of node with value 9 , which is NULL , so we return 0. We then go to the right subtree of node with value 9 , ie. node with value 13 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 13.
We go to the left subtree of node with value 13 , which is NULL , so we return 0. We then go to the right subtree of node with value 13 , which is NULL , so we return 0.
So for node with value 13 , we have 1 + max(0,0) = 1 , so we return 1 to the previous call ie. node with value 9.
So for node with value 9 , we have 1 + max(0,1) = 2 , so we return 2 to the previous call ie. node with value 5.
We then go to the right subtree of node with value 5 , which is NULL , so we return 0. So for node with value 5 , we have 1 + max(2,0) = 3 , so we return 3 to the previous call ie. node with value 2.
So for node with value 2 , we have 1 + max(2,3) = 4 , so we return 4 to the previous call ie. node with value 1.

We then go to the right subtree of node with value 1 , ie. node with value 3 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 3.
We go to the left subtree of node with value 3 , ie. node with value 6 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 6.
We go to the left subtree of node with value 6 , which is 10 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 10.
We go to the left subtree of node with value 10 , which is NULL , so we return 0. We then go to the right subtree of node with value 10 , which is NULL , so we return 0.
So for node with value 10 , we have 1 + max(0,0) = 1 , so we return 1 to the previous call ie. node with value 6.
We then go to the right subtree of node with value 6 , which is 11 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 11.
We go to the left subtree of node with value 11 , which is NULL , so we return 0. We then go to the right subtree of node with value 11 , which is NULL , so we return 0.
So for node with value 11 , we have 1 + max(0,0) = 1 , so we return 1 to the previous call ie. node with value 6.
So for node with value 6 , we have 1 + max(1,1) = 2 , so we return 2 to the previous call ie. node with value 3.
We then go to the right subtree of node with value 3 , ie. node with value 7 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 7.
We go to the left subtree of node with value 7 , which is NULL , so we return 0. We then go to the right subtree of node with value 7 , which is 12 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 12.
We go to the left subtree of node with value 12 , which is NULL , so we return 0. We then go to the right subtree of node with value 12 , which is 14 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 14.
We go to the left subtree of node with value 14 , which is NULL , so we return 0. We then go to the right subtree of node with value 14 , which is 15 , we add 1 & we again make call to height method for maximum of left & right subtree of node with value 15.
We go to the left subtree of node with value 15 , which is NULL , so we return 0. We then go to the right subtree of node with value 15 , which is NULL , so we return 0.
So for node with value 15 , we have 1 + max(0,0) = 1 , so we return 1 to the previous call ie. node with value 14.
So for node with value 14 , we have 1 + max(0,1) = 2 , so we return 2 to the previous call ie. node with value 12.
So for node with value 12 , we have 1 + max(0,2) = 3 , so we return 3 to the previous call ie. node with value 7.
So for node with value 7 , we have 1 + max(0,3) = 4 , so we return 4 to the previous call ie. node with value 3.
So for node with value 3 , we have 1 + max(2,4) = 5 , so we return 5 to the previous call ie. node with value 1.

So for node with value 1 , we have 1 + max(4,5) = 6 , so we return 6 as the height of the binary tree.

HW - Largest Value in Each Level of Binary Tree
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

int recTreeHeight(Node* root) 
{
    if(root == NULL)
    {
        return 0;
    }

    return 1 + recTreeHeight(root->left) > recTreeHeight(root->right) ? recTreeHeight(root->left) : recTreeHeight(root->right);
}
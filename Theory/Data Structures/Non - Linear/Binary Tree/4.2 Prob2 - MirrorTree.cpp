/*
Mirror Tree - 
We are provided with a tree & we want to convert this tree into its mirror image. 
We are provided the root node of the tree as input.

So the left subtree ie. the left child node in input tree becomes the right subtree ie. the right child node in output tree. 

Input tree : 

            1
          /   \
        3      2
              / \
             5   4

Output tree : 
            1
          /  \
         2    3
        / \
       4   5

The left & right part ie. the left & right subtree are swapping positions in the tree. 


Input tree :
            1
          /   \
         2     3
        / \   / \
       4  5  6   7

Output tree :
            1
          /   \
         3     2
        / \   / \
       7  6  5   4


We first flip the left & right child nodes of the root node ie.
            1
          /   \
         2     3
        / \   / \
       4  5  6   7
    
after flipping the child nodes of the root node ie. node with value 1, we get
            1
          /   \
         3     2
        / \   / \
       6  7  4   5
Now the child nodes of the root node ie. node with value 1 have their values flipped.
We now need to flip the values of the child nodes of left & right child node of the root node ie. node with value 1. So we need to flip the child nodes of the node with 
value 3 & the child nodes of the node with value 2. 

We first flip the values of the left & right child nodes of the node with value 3 , ie. we swap/flip the values of the left & right child nodes of the node with value 3 , 
hence we get , 
            1
          /   \
         3     2
        / \   / \
       7  6  4   5

Now we again check for the left child node ie. left subtree of the node with value 3 ie. node with value 7. As the node with value 7 has no child node ie. the node with value
7 has neither a left child node nor a right child node , hence there are no nodes to flip/swap , so we return from this node with value 7 to the parent node ie. node with value 3.
Now we have completed checking for the left child node ie. left subtree of the node with value 3 ie. node with value 7 , we now need to check for the right child node of the node
with value 3 ie. node with value 6. 
As the node with value 6 has no child node ie. the node with value 6 has neither a left child node nor a right child node, hence there are no nodes to flip/swap , so we return from 
this node with value 6 to the parent node ie. node with value 3. 
Now we have completed checking for both the left & right child node ie. left & right subtree of the node with value 3. So we again return to the parent node of the node with value 3 
ie. node with value 1.

We have now completed swapping/flipping the child nodes of the node with value 1 ie. we have completed swapping/flipping the nodes in the left subtree of the node with value 1. Hence 
we now need to swap/flip the nodes in the right subtree ie. right child nodes of the node with value 1 ie. the root node.

Hence we move to the right subtree ie. right child node of the node with value 1 ie. the node with value 2. We


*/
#include <iostream>

using namespace std;

class Node 
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val) 
    {
        left = right = NULL;
        data = val;
    }
};



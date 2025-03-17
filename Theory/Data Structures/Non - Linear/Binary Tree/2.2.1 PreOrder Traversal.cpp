/*
Traversal in Binary Tree means visiting the nodes of the Binary Tree in a particular order.

The different types of traversal in Binary Tree are :
1. Pre-Order traversal - NLR
2. In-Order traversal - LNR
3. post-Order traversal - LRN

In Pre-Order traversal we first visit the node , then the left node & then the right node
In In-Order traversal we first visit the left node , then the node & then the right node
In Post-Order traversal we first visit the left node , then the right node & then the node

Pre-Order Traversal :
In Pre-Order traversal we first visit a node & then print the value of this node. After visiting & printing the value stored in
a node, we then move to the left side ie. the left node of this node. We again print the value of this node & again move to the
left side ie. the left node of this node. We keep on doing this till we encounter a node which has no left node ie. we cannot
move to the left side. Then we try to move to the right side of this node ie. the right node of this node. if there is no right
side ie. right node it not present then we start returning back ie. traversing back & on our way we keep on visiting the right side
ie. the right node of each node. While returning back we again print the value of the node & then check for the left & right node.
For each node while traversing we follow the sequence : Node , Left , Right ie. we first visit the node & print its value, then we 
move to the left node & then keep on printing values of the nodes & keep on moving left till we get -1 ie. empty left node , then 
we move to the right node & again repeat the sequence.
The output of Pre-Order Traversal for the below Binary Tree would be, 
                1
            2       7
        3       6       8
    4       5       9       10

Output : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

We return after visiting a node to its parent node if both left & right child are absent ie. both have value -1.
We start moving to right side ie. right node only after we have completed traversing for all left side ie. all left nodes.

Here the nodes 2,3,4,5,6 are the left subtree for the node with value 1. So we print the value for any node & then move to the left
subtree for that particular node & we repeat this process till we encounter -1 as the left node.
*/

/*Code*/
/*
Pre-Order steps :
1. Print Node
2. Left Side
3. Right Side
*/
#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void PreOrder(Node* root)
{
    //Base Condition. 
    if(root == NULL)
        return;
    //N ie. Node
    cout<<root->data;
    //L ie. Left Node
    PreOrder(root->left);
    //R  ie. Right Node
    PreOrder(root->right);
}

/*
Pre Order Traversal, 
Time Complexity - O(N)
Space Complexity - O(h) where h is the height of the tree
*/
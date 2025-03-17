/*
In Post-Order Traversal, we first move to the left side of the present node & then we keep on moving to the left side of the present
node ie. we keep on moving to the left child node of the present node without printing any value of any of the nodes we are 
traversing through. 
Once we encounter a -1 ie. there is no left child node present for the present node,then we start moving to the right side of 
the present node ie. we keep on moving to the right child node of the present node without printing any value of any of the nodes we are 
traversing through. 
Once we get a node that doesn't have both the left & right child node value as -1 ie. the node has no left or right child node, 
then we print the value of the present node. So we only print the present node value once we have completed traversing both the left
& right child/sides/subtree of a node.

The output of Post-Order Traversal for the below Binary Tree would be, 
                1
            2       7
        3       6       8
    4       5       9       10

Output : 4, 5, 3, 6, 2, 9, 10, 8, 7, 1
*/
/*Code*/
/*
In-Order steps :
1. Left Side
2. Right Side
3. Print Node
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

void PostOrder(Node* root)
{
    if(root == NULL)
        return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data;
}
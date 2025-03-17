/*
In In-Order Traversal, we first move to the left side of the present node & then we keep on moving to the left side of the present
node ie. we keep on moving to the left child node of the present node without printing any value of any of the nodes we are 
traversing through. 
Once we encounter a -1 ie. there is no left child node present for the present node, then we print the value of the present node & 
then we move to the right side ie. the right node of the present node.
If both the left & the right node are -1 ie. both the left & the right node are not present , then we return the the previous node, 
ie. we start traversing backwards.

52:34

The output of In-Order Traversal for the below Binary Tree would be, 
                1
            2       7
        3       6       8
    4       5       9       10

Output : 4, 3, 5, 2, 6, 1, 7, 9, 8, 10

Before printing any node we print the left side of that node, then after all the left side nodes have been traversed ie. no more 
left side nodes are present , then we print the value of the present node , then we check for the right side nodes ie. the right
node & if a node is present then we traverse & again look for the left side node.


*/

/*Code*/
/*
In-Order steps :
1. Left Side
2. Print Node
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

void InOrder(Node* root)
{
    if(root == NULL)
        return;

    InOrder(root->left);
    cout<<root->data;
    InOrder(root->right);
}

/*

*/
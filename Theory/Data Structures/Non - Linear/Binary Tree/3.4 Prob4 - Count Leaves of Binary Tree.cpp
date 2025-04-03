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

We go to the node with value 8 which is the left child of node with value 4. We check whether this node with value 8 is a leaf node or not ie. whether this node with value 8 
has a left or right child node or not. Now as node with value 8 has no left child node ie. no left subtree , we check for the right child node ie. right subtree for this node with value 8. 
Node with value 8 has no right child node ie. no right subtree , then this implies that node with value 8 has neither a left child node nor a right child node & hence this node with value 
8 is a leaf node & so we increment the value of count variable by 1 ie. count = 1. As node with value 8 has no child nodes & is a leaf node , we return to the parent node of node with value
8 ie. node with value 4 with the value of count variable.

Now the left subtree traversal ie. left child node traversal for node with value 4 is complete & so we traverse the right subtree of node with value 4 ie. we traverse the right child node of
node with value 4. We make a recursive call to get the total number of leaf nodes in the right subtree of node with value 4.

We go to the node with value 9 which is the right child of node with value 4. We check whether this node with value 9 is a leaf node or not ie. whether this node with value 9 
has a left or right child node or not. Now as node with value 9 has no left child node ie. no left subtree , we check for the right child node ie. right subtree for this node with value 9. 
Node with value 9 has no right child node ie. no right subtree , then this implies that node with value 9 has neither a left child node nor a right child node & hence this node with value 
9 is a leaf node & so we increment the value of count variable by 1 ie. count = 2. As node with value 9 has no child nodes & is a leaf node , we return to the parent node of node with value
9 ie. node with value 4 with the value of count variable.

Now the left & right subtree traversal for the node with value 4 is complete. Hence we return to the parent node of node with value 4 ie, node with value 2 with the variable count ie. the number
of leaf nodes in the subtree.

Now the left subtree traversal ie. left child node traversal for node with value 2 is complete & so we traverse the right subtree of node with value 2 ie. we traverse the right child node of
node with value 2. We make a recursive call to get the total number of leaf nodes in the right subtree of node with value 2.

We go to the node with value  5 which is the right child node of node with value 2. We check whether this node with value 5 is a leaf node or not ie. whether this node with value 5 
has a left or right child node or not. Now as node with value 5 has no left child node ie. no left subtree , we check for the right child node ie. right subtree for this node with value 5. 
Node with value 5 has no right child node ie. no right subtree , then this implies that node with value 5 has neither a left child node nor a right child node & hence this node with value 
5 is a leaf node & so we increment the value of count variable by 1 ie. count = 3. As node with value 5 has no child nodes & is a leaf node , we return to the parent node of node with value
5 ie. node with value 2 with the value of count variable.

Now the left & right subtree traversal for the node with value 2 is complete. Hence we return to the parent node of node with value 2 ie, node with value 1 with the variable count ie. the number
of leaf nodes in the subtree.

Now the left sutbree traversal for node with value 1 ie. the root node is complete & hence we traverse the right subtree for this node with value 1.We make a recursive call to get the total number of 
leaf nodes in the right subtree of node with value 1.

We go to the node with value 3 which is the right child of node with value 1. We check whether this node with value 3 is a leaf node or not ie. whether this node with value 3 
has a left or right child node or not. Now as node with value 3 has a left child node , the value of count variable is not incremented because node with value 3 is not a leaf node. 
We then make a recursive call to get the count/number of total leaf nodes present in the left subtree of node with value 3.

We go to the node with value 6 which is the left child node of node with value 3. We check whether this node with value 6 is a leaf node or not ie. whether this node with value 6 
has a left or right child node or not. Now as node with value 6 has a left child node , the value of count variable is not incremented because node with value 6 is not a leaf node. 
We then make a recursive call to get the count/number of total leaf nodes present in the left subtree of node with value 6.

We go to the node with value 10 which is the left child node of node with value 6. We check whether this node with value 10 is a leaf node or not ie. whether this node with value 10 
has a left or right child node or not. Now as node with value 10 has a left child node , the value of count variable is not incremented because node with value 10 is not a leaf node. 
We then make a recursive call to get the count/number of total leaf nodes present in the left subtree of node with value 10.

We go to the node with value 12 which is the left child node of node with value 10. We check whether this node with value 12 is a leaf node or not ie. whether this node with value 12 
has a left or right child node or not. Now as node with value 12 has no left child node ie. no left subtree , we check for the right child node ie. right subtree for this node with value 12. 
Node with value 12 has no right child node ie. no right subtree , then this implies that node with value 12 has neither a left child node nor a right child node & hence this node with value 
12 is a leaf node & so we increment the value of count variable by 1 ie. count = 4. As node with value 12 has no child nodes & is a leaf node , we return to the parent node of node with value
12 ie. node with value 10 with the value of count variable.

Now the left subtree traversal ie. left child node traversal for node with value 10 is complete & so we traverse the right subtree of node with value 10 ie. we traverse the right child node of
node with value 10. As the node with value 10 has no right child node ie. the node with value 10 has no right subtree we return to the parent node of node with value 10 ie. node with value 6
with the variable count.


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
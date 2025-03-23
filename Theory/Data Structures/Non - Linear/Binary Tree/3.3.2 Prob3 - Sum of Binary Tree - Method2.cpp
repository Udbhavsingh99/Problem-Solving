/*
In this approach we add the value of the current node to the value obtained from the recursive call for the left node/left subtree 
of the current node & the value obtained from the recursive call for the right node/right subtree of the current node.

Lets say we are given a binary tree 
                            3
                    2               1
            4           7               5
        8       9                           6

For the root node ie. node with value 3. We will add 3 to the recursive call for total values of left subtree & recursive call for 
the total values of right subtree. Hence, we get , 

sum = root->data + Sum of values in left subtree + Sum of values in right subtree 
    = 3 + Sum of values in left subtree + Sum of values in right subtree 

Now we traverse the left subtree of node with value 3 & hence the left child node of node with value 3 which in this case is node with
value 2. Hence , we get , 

sum = 3 + 2 + Sum of values in left subtree + Sum of values in right subtree 

Now we traverse the left subtree of node with value 2 & hence the left child node of node with value 2 which in this case is node with 
value 4. Hence , we get , 

sum = 3 + 2 + 4 + Sum of values in left subtree + Sum of values in right subtree

Now we traverse the left subtree of node with value 4 & hence the left child node of node with value 4 which in this case is node with 
value 8. Hence , we get , 

sum = 3 + 2 + 4 + 8 + Sum of values in left subtree + Sum of values in right subtree

Now the node with value 8 has no left child node or right child node & hence no left subtree & no right subtree & so we return to the parent node of node with value 8 which
in this case is node with value 4. 

Now the left subtree traversal for node with value 4 is complete & hence we need to traverse the right subtree of node with value 4. 
So the right child node of node with value 4 is node with value 9. Hence , we get , 

sum = 3 + 2 + 4 + 8 + 9 + Sum of values in left subtree + Sum of values in right subtree

Now the node with value 9 has no left child node or right child node & hence no left subtree & no right subtree & so we return to the parent node of node with value 9 which
in this case is node with value 4. 

The recursive traversal for both the right & left subtree for the node with value 4 is complete & hence we return to the parent node of node with value 4 which in this case 
is node with value 2.

Now the recursive left subtree traversal of node with value 2 is complete & hence we need to recursively traverse the right subtree of node with value 2. 
So the right child node of node with value 2 is node with value 7. Hence , we get , 

sum = 3 + 2 + 4 + 8 + 9 + 7 + Sum of values in left subtree + Sum of values in right subtree

Now the node with value 7 has no left child node or right child node & hence no left subtree & no right subtree & so we return to the parent node of node with value 7 which
in this case is node with value 2.

The recursive traversal for both the right & left subtree for the node with value 2 is complete & hence we return to the parent node of node with value 2 which in this case 
is node with value 3.

Now the recursive left subtree traversal of node with value 3 is complete & hence we need to recursively traverse the right subtree of node with value 3. 
So the right child node of node with value 3 is node with value 1. Hence , we get , 

sum = 3 + 2 + 4 + 8 + 9 + 7 + 1 + Sum of values in left subtree + Sum of values in right subtree

Now the node with value 1 has no left subtree ie. no left child nodes & hence we recursively traverse the right subtree of node with value 1. 
So the right child of node with value 1 is node with value 5. Hence , we get , 

sum = 3 + 2 + 4 + 8 + 9 + 7 + 1 + 5 + Sum of values in left subtree + Sum of values in right subtree

Now the node with value 5 has no left subtree ie. no left child nodes & hence we recursively traverse the right subtree of node with value 5. 
So the right child of node with value 5 is node with value 6. Hence , we get , 

sum = 3 + 2 + 4 + 8 + 9 + 7 + 1 + 5 + 6 + Sum of values in left subtree + Sum of values in right subtree 

Now the node with value 6 has no left child node or right child node & hence no left subtree & no right subtree & so we return to the parent node of node with value 6 which
in this case is node with value 5.

The recursive traversal for both the right & left subtree for the node with value 5 is complete & hence we return to the parent node of node with value 5 which in this case 
is node with value 1. 

The recursive traversal for both the right & left subtree for the node with value 1 is complete & hence we return to the parent node of node with value 1 which in this case 
is node with value 3 which is the root node.

Hence the sum of values of all nodes in the binary tree is 45
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
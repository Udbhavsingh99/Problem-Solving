/*
Lets say we are given a binary tree 
                            3
                    2               1
            4           7               5
        8       9                           6

The total sum of the values in all the nodes is 45. 
We traverse all the nodes of the binary tree & while traversing we sum the values in all the nodes of the tree.alignas
We declare a variable sum & initiate it to value 0. 

We start traversing from the root node ie. the node with value 3. Hence we add 3 to the variable sum & hence sum = 3.

As we are using Pre-Order traversal,  we use the NLR method ie. Node, Left, Right. Instead of printing the data/value stored in 
each node , rather we add this data/value to the sum variable , then we traverse the left nodes ie. left subtree of a particular node till we have no 
left child node present for a particular node. Then we traverse the right node/subtree for that particular node.

We then traverse the left subtree ie. we go to the left node of the root node/node with value 3 , in this case that would be node with value
2. We add 2 to the variable sum & hence sum = 3+2 = 5.

We then traverse the left subtree ie. we go to the left node of node with value 2 , in this case that would be node with value
4. We add 4 to the variable sum & hence sum = 3+2+4 = 9.

We then traverse the left subtree ie. we go to the left node of node with value 4 , in this case that would be node with value
8. We add 8 to the variable sum & hence sum = 3+2+4+8 = 17.

Now the node with value 8 has no left node/left child & hence we traverse the right subtree for node with value 8. As there is no right subtree ie. there
is no right child node present for the node with value 8 , we return the sum variable to the parent node of node with value 8 ie. node with value 4.

The left subtree traversal ie. traversal of left child nodes of node with value 4 is complete. So, now we traverse the right subtree for the node with value
4 ie. we traverse the right child node of the node with value 4.

So , we traverse the right subtree ie. we go to the right node of the node with value 4 , in this case that would be node with value
9. We add 9 to the variable sum & hence sum = 3+2+4+8+9 = 26

Now the node with value 9 has no left node/left child & hence we traverse the right subtree for node with value 9. As there is no right subtree ie. there 
is no right child node present for the node with value 9 , we return the sum variable to the parent node of node with value 9 ie. node with value 4. 

Now the traversal for both the left & right subtrees ie. left & right child nodes of the node with value 4 is complete & hence we return the value of sum variable 
to the parent node of node with value 4 ie. node with value 2. 

Now the left subtree traversal ie. traversal of left child nodes of the node with value 2 is complete. So, now we traverse the right subtree for the node with value
2 ie. we traverse the right child node of the node with value 2. 

So , we traverse the right subtree ie. we go to the right node of the node with value 2 , in this case that would be node with value
7. We add 7 to the variable sum & hence sum = 3+2+4+8+9+7 = 33

Now the node with value 7 has no left node/left child & hence we traverse the right subtree for node with value 7. As there is no right subtree ie. there 
is no right child node present for the node with value 7 , we return the sum variable to the parent node of node with value 7 ie. node with value 2.

Now the traversal for both the left & right subtrees ie. left & right child nodes of the node with value 2 is complete & hence we return the value of sum variable 
to the parent node of node with value 2 ie. node with value 3. 

Now the left subtree traversal ie. traversal of left child nodes of the node with value 3 is complete. So, now we traverse the right subtree for the node with value
3 ie. we traverse the right child node of the node with value 3. 

So , we traverse the right subtree ie. we go to the right node of the node with value 3 , in this case that would be node with value
1. We add 1 to the variable sum & hence sum = 3+2+4+8+9+7+1 = 34

Now the node with value 1 has no left node/left child & hence we traverse the right subtree of node with value 1.

So , we traverse the right subtree ie. we go to the right node of the node with value 1 , in this case that would be node with value
5. We add 5 to the variable sum & hence sum = 3+2+4+8+9+7+1+5 = 39

Now the node with value 5 has no left node/left child & hence we traverse the right subtree of node with value 5.

So , we traverse the right subtree ie. we go to the right node of the node with value 5 , in this case that would be node with value
6. We add 6 to the variable sum & hence sum = 3+2+4+8+9+7+1+5+6 = 45

Now the node with value 6 has no left node/left child & hence we traverse the right subtree for node with value 6. As there is no right subtree ie. there 
is no right child node present for the node with value 6 , we return the sum variable to the parent node of node with value 6 ie. node with value 5.

Now the traversal for both the left & right subtrees ie. left & right child nodes of the node with value 5 is complete & hence we return the value of sum variable 
to the parent node of node with value 5 ie. node with value 1.

Now the traversal for both the left & right subtrees ie. left & right child nodes of the node with value 1 is complete & hence we return the value of sum variable 
to the parent node of node with value 1 ie. node with value 3.

Now the traversal for both the left & right subtrees ie. left & right child nodes of the node with value 3 is complete & hence as node with value 3 is the root node
the sum of all the values of all the nodes in the tree is 45. 
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

        sum+= root->data;
        TotalSum(root->left , sum);
        TotalSum(root->right, sum);

        return sum;
}
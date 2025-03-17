/*
A binary tree will be provided to us & we need to print the size of this binary tree.
Size of a binary tree here means the total number of nodes present in a binary tree.

Lets say a binary tree of size 10 has been provided to us as follows :

                    1
            2               3
        5       6       4       9
    7       8               11

The root node of the binary tree will be provided to us. 
We start traversing the binary tree from the root node. We create a counter variable & initialize it to 0. Every time we traverse
a node we increase the value of the counter variable by 1.

So we traverse the entire tree & when we encounter each node in the tree we increase/increment the value of the counter variable by 1. 
The traversal strategy used here is the Pre-Order traversal strategy. 

As we are using Pre-Order traversal,  we use the NLR method ie. Node, Left, Right. Instead of printing the value of the data stored in 
each node , rather we increase the counter variable , then we traverse the left nodes ie. left subtree of a particular node till we have no 
left child node present for a particular node. Then we traverse the right node/subtree for that particular node.

So when we reach a particular node, we do :
Count++
Left side
Right side

Now we will need to make a variable count that is global & will be initialized to value 0 & we will pass it as a reference because the variable count 
will be common for all the nodes in our tree.

Now we will have a function  Total() that takes in the pointer to root node as well as the reference of the count variable as input.
Now inside this Total() method, 
a. We will increase the value of the count by 1. 
b. Then we recursively call this Total() method & pass root->left as the first argument & variable count as the second argument. This will handle the left subtree.
c. Then we recursively call this Total() method & pass root->right as the first argument & variable count as the second argument. This will handle the right subtree.

We are using recursion here as the same procedure gets repeated multiple times for each node in the tree.

Now the base case for this Total() method will be when the root is NULL & in that case we return ie. no node exists & hence we return.

void Total(Node* root, int &count)
{
    if(root == NULL)
    {
        return;
    }

    count++;
    Total(root->left, count);
    Total(root->right, count);
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

        Node(int x)
        {
            left = right = NULL;
            data = x;
        }
};

int TotalCount(Node* root, int &count)
{
    if(root == NULL)
    {
        return;
    }

    count++;
    TotalCount(root->left, count);
    TotalCount(root->right, count);

    return count;

}

void main() 
{
    int x;
    cout<<"Enter the value of the root node ";
    cin>>x;
    Node *root = new Node(x);
    int count = 0;

    int total = TotalCount(root, count);
}
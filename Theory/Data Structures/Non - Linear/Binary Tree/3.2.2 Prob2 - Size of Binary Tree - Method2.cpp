/*
Lets say a binary tree of size 10 has been provided to us as follows :

                    1
            2               3
        5       6       4       9
    7       8               11

We are going to start from root node ie. node with value 1. 

When we go to the node with value 1 ie. the root node, we increment the value of the count variable by 1.
Then we recursively get the total number of nodes in the left subtree & the total number of nodes in the right 
subtree for this root node ie. node with value 1. We will add up all these values & return from our method. 


Now we go to node with value 2 which is the left child of node with value 1 ie. the root node. Again, we increment
the count variable value. Then we recursively get the total number of nodes in the left subtree & right subtree for 
this node with value 2. 

Then we go to the node with value 5 which is the left child of node with value 2. Again, we increment
the count variable value. Then we recursively get the total number of nodes in the left subtree & right subtree for 
this node with value 5.

Then we go to the node with value 7 which is the left child of node with value 5. Again, we increment
the count variable value. Then we recursively get the total number of nodes in the left subtree & right subtree for 
this node with value 7. Now as the node with value 7 has no left node , then we return from the recursive call to get
the total number of nodes in the left subtree & then we make a recursive call to get the total number of nodes in the 
right subtree. Now as the node with value 7 has no right subtree. We return the total number of nodes in the left subtree 
of node with value 5 & return to the node with value 5.

Now the recursive call for the number of nodes in  left subtree of node with value 5 is complete. Now we make a recursive
call to  get the total number of nodes in the right subtree of node with value 5. Now as there is no right child of node with
value 5 , we return the value for the number of nodes in the right subtree of node with value 5 & return to the node with 
value 2.

Now the recursive call for the number of nodes in  left subtree of node with value 2 is complete. Now we make a recursive
call to  get the total number of nodes in the right subtree of node with value 2. The node with value 2 has a right child ie. 
node wih value 6.  

So we increment the count variable. Now we make a recursive call to get the total number of nodes in the left subtree of node 
with value 6. Now node with value 6 has a left child ie. node with value 8 & hence we increment the count variable by 1.

Now we make a recursive call to get the total number of nodes in the left subtree of node with value 8. Now the node with value 
8 has no left child & hence we return. Now we make a recursive call to get the total number of nodes in the right subtree of node 
with value 8. Now the node with value 8 has no right child & hence we return to the node with value 6. 

Now the recursive call for the number of nodes in the left subtree of node with value 6 has been completed. Now we need to make a
recursive call to get the total number of nodes in the right subtree of node with value 6. Now the node with value 6 has no right 
child & hence we return. 

Now the recursive calls for both the left & right subtree for node with value 2 is complete. Hence we return to the node with value 1 
& return the total number of nodes in the left subtree of root node ie. node with value 1. 

Total number of nodes in the left subtree of node with value 1 is 5. Now the traversal for all the nodes in the left subtree of node 
with value 1 ie. the root node is complete & hence we now need to get the total number of nodes in the right subtree of node with value
1 ie. we need to traverse all the nodes in the right subtree of node with value 1.

Now we go to node with value 3 which is the right child of node with value 1 ie. the root node. Again, we increment
the count variable value. Then we recursively get the total number of nodes in the left subtree & right subtree for 
this node with value 3.

Then we go to the node with value 4 which is the left child of node with value 3. Again, we increment
the count variable value. Then we recursively get the total number of nodes in the left subtree & right subtree for 
this node with value 4.

Now the node with value 4 has no left child & hence we return from the recursive call to get the total number of nodes in the left
subtree of node with value 4. We then make a recursive call to get the total number of nodes in the right subtree of node 
with value 4. Now the node with value 4 has a right child/node ie. the node with value 10 , so we increment the value of count variable.

Now we make a recursive call to get the total number of nodes in the left subtree of node with value 10. Now the node with value 10 has no
left child/node & hence we return from the recursive call to get the total number of nodes in the left subtree of node with value 10. Now we 
make a call to get the total number of nodes in the right subtree of node with value 10. Now the node with value 10 has no right child & hence 
we return from the recursive call to get the total number of nodes in the right subtree of node with value 10. Now as the recursive calls 
for both the right & left subtree of the node with value 10 has been completed we return to the node with value 4. 

Now the recursive calls to get the total number of nodes in the left & the right subtree for the node with value 4 have been finished & hence 
we return to the node with value 3.

Now the recursive call to get the total number of nodes in the left subtree of the node with value 3 has been finished. Now we need to 
recursively get the total number of nodes in the right subtree of node with value 3. Now the node with value 3 has a right child ie. node
with value 9 , hence we increment the value of the count variable.

Now we make a recursive call to get the total number of nodes in the left subtree of node with value 9. Now the node with value 9 has no
left child/node & hence we return from the recursive call to get the total number of nodes in the left subtree of node with value 9. Now we 
make a call to get the total number of nodes in the right subtree of node with value 9. Now the node with value 9 has no right child & hence 
we return from the recursive call to get the total number of nodes in the right subtree of node with value 9. Now as the recursive calls 
for both the right & left subtree of the node with value 9 has been completed we return to the node with value 3. 

Now the recursive calls to get the total number of nodes in the left & the right subtree for the node with value 3 have been finished & hence 
we return to the node with value 1. 

The total number of nodes in right subtree of node with value 1 is 4. 

Hence the total number of nodes in the tree are Root+Left Subtree+Right Subtree => 1 + 5 + 4 = 10

Total value of nodes in a Tree = Value of root node + Total node values in left subtree + Total node values in right subtree

in our case the value of the root node is 1 & hence the formula would be,

Total number of nodes in a Tree = 1 + Total number of nodes in left subtree + Total number of nodes in right subtree

So we add 1 (for the root node) to the total number of nodes in the left subtree/side of the root node & the total number of nodes in 
the right subtree/side of the root node

int TotalNode(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    return(1+TotalNode(root->left)+TotalNode(root->right));
}

Now the base case for this Total() method will be when the root is NULL & in that case we return 0 ie. no node exists & hence we return 0.
So when the value of root is null then we return 0 signifying that the node doesn't exist.

Each child node returns 1 + sum of total number of nodes in the left subtree for that child node + sum of total number of nodes in the right subtree for that child node,
to the parent node. This happens for each & every node. 

Time Complexity - O(N) 
Space Complexity - O(N) , this will be used by the recursion stack & is the worst case space complexity

where N refers to the size of the binary tree


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
        data = x;
        left = right = NULL;
    }
};

int TotalNode(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int count = 1 + TotalNode(root->left) + TotalNode(root->right);

    return count;
}

void main()
{
    int x;
    cout<<"Enter the value of the root node : ";
    cin>>x;
    Node* root = new Node(x);

    int total = TotalNode(root);
    cout<<"The size of tree is "<<total;
}
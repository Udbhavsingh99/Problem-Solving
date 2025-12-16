/*
We are going to calculate the height of a binary tree using Induction - Base - Hypothesis method.

We are going to resolve this problem in three steps -
1. We'll first see the Problem Statement - Input - Output
2. Then we'll see how to design the Induction - Base Condition - Hypothesis for this problem
3. Code

Lets say that we have a binary tree like this -

          1
        /   \
       2     3
      / \   / \
     4   5 6   7
    / \
   8   9

Problem Statement -
Height of a binary tree is defined as the number of edges in longest path from root node to a leaf node.
It can also be said that the depth of the layers ie. the number of layers in the binary tree is the height of the binary tree.

The input provided to us will be the root node of the binary tree.

So we create a method named height() which takes the root node of the binary tree as input and returns the height of the binary tree.

We first design the hypothesis for this problem -
On whichever node we call the height() method, it should return the height of the binary tree rooted at that node. So the height() method 
will return the height of that node.

We define what our function would do in the hypothesis stage.

Test the hypothesis on smaller inputs -
So basically if we run the height() method on root node then the smaller inputs would be the left & right child nodes of the root node
as well as the subtrees rooted at/associated with those child nodes.

For eg. in our binary tree
          1
        /   \
       2     3
      / \   / \
     4   5 6   7
    / \
   8   9

If we run height(1) ie. the root node,  then the smaller inputs would be height(2) & height(3) ie. the left & right child nodes of root node 1.
The smaller input would then be for the left subtree rooted at node 2 & right subtree rooted at node 3.

If we pass the root node to the height() method ie. if we apply the height() method on the root node, then it will return us the height of the entire binary tree.
Now if we apply the height() method on the left child node of the root node ie. node 2, then it will return us the height of the left subtree rooted at node 2.

So we make a recursive call to height() method on the left & right child nodes of whichever node we are currently on. 
We call the height() method recursively on the left & right child nodes ie. smaller input, of the current node.
We first call the height() method on the left child node of the root node ie. height(root->left) ie. height(2) which will return us the height of the left subtree rooted at node 2.
Then we call the height() method on the right child node of the root node ie. height(root->right) ie. height(3) which will return us the height of the right subtree rooted at node 3.

We are doing this because once the hypothesis is designed ie. once we design what the method/function is supposed to do , then it means that the method will work the same for smaller
inputs as well.
So ,height(root->left) will return us the height of the left subtree rooted at node 2 & height(root->right) will return us the height of the right subtree rooted at node 3.

Induction Step -
Now the recursive calls height(root->left) & height(root->right) will return us the heights of the left & right subtrees respectively, for each node in the tree.
So if we have a tree like this -

          1
        /   \
       2     3
      / \   / \
     4   5 6   7
    / \
   8   9

If we call height(1) ie. the root node, then height(2) will return us 3 which is the height of the left subtree rooted at node 2
& height(3) will return us 2 which is the height of the right subtree rooted at node 3.
So to calculate the height of the entire binary tree rooted at node 1, we take the maximum of the heights of the left & right subtrees.
In our case max(3,2) = 3 ie. out of the height returned by the recursive calls to height() method on left & right child nodes of the root node ie. the left & right subtrees, 
we take the maximum height of the two. Now the recursive call to calculate height of left subtree returned us 3 & that of right subtree returned us 2.
So we take the maximum of the two heights ie. max(3,2) = 3 & hence the height of the entire binary tree rooted at node 1 is 3.
So whichever recursive call to height() method returns us the maximum height between the left & right subtrees, we take that maximum height + 1 (to account for the edge between the current node & its child nodes) & return
that value as the height of the binary tree rooted at that node.

We store the height returned by the recursive call to height() method on left child node in a variable named leftHeight.
We store the height returned by the recursive call to height() method on right child node in a variable named rightHeight.
We then return max(leftHeight, rightHeight) + 1 as the height of the binary tree rooted at that node.
Basically in induction step we return 1+max(height(root->left), height(root->right)), in order to include the height of the root node as well.

Base Condition - 
The smallest valid input for the height() method would be a NULL node ie. when the binary tree is empty.
So when the input node is NULL, we return -1 as the height of the binary tree.
The leaf nodes in our tree point to null nodes as their left & right child nodes. 
If we have null nodes as input to our height() method, then we return -1 as the height of the binary tree.

Code - 
We create a method height() which takes a pointer to the root node of the binary tree as input & returns an integer value representing the height of the binary tree.
If the root node points to NULL, we return -1 as the height of the binary tree.
Now we will apply our hypothesis on smaller inputs. 
In order to do this we will first create a variable named lh which will store the value returned by the recursive call to height() method on the left child node of the current node ie. root->left.
Hence the recursive call will be int lh = height(root->left);
Similarly we create a variable named rh which will store the value returned by the recursive call to height() method on the right child node of the current node ie. root->right.
Hence the recursive call will be int rh = height(root->right);

In the induction step, we return 1 + max(lh, rh) as the height of the binary tree rooted at that node. This will finally give us the height of the entire binary tree when we call height() method on the root node.
We are doing this because basically whichever recursive call to height() method returns us the maximum height between the left & right subtrees, we take that maximum height + 1 (to account for the edge between the current node & its child nodes) & return
that value as the height of the binary tree rooted at that node.

Whichever subtree is larger in height , will determine the height of the entire binary tree rooted at that node.
So height of our binary tree will be 1 (for the current node) + maximum of the heights of left & right subtrees.

*/

#include<iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(Node* root) {
    // Base Condition
    if(root == NULL) {
        return -1;
    }

    // Hypothesis on smaller inputs
    int lh = height(root->left);
    int rh = height(root->right);

    // Induction Step
    return 1 + max(lh, rh);
}
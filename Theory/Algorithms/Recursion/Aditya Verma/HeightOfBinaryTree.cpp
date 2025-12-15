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

5:00

*/
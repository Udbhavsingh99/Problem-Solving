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

2:21

*/
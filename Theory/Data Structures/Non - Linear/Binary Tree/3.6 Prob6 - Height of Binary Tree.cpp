/*
Height of Binary Tree is defined as the distance between the root node & the farthest node from this root node.

Height of Binary Tree is the total sum of number of all the edges present between the root node & the farthest node from this root node.

Technically the height of a binary tree is defined as the number of edges from the root node to the farthest node in the binary tree. 

But for practicality purpose the height of tree is defined as the sum of total number of nodes between the root node of the tree & the farthest node from this
root node.

So for practicality purpose we will count the number of nodes & not the number of edges between the root node & the farthest node from this 
root node.

If we want to get the height of the tree , then we need to go to the farthest node from the root node which will be the leaf node because the 
leaf nodes will be the farthest nodes from the root node of the tree.

So in order to get the height of the binary tree we need to check the distance of all leaf nodes from the root node of the tree. The height of the 
tree is the distance ie. number of nodes between the root node & the leaf node farthest away from this root node of the tree. 

We start from the root node & traverse to the leaf node & while doing so keep on counting the number of nodes between the root node & the leaf node 
we are traversing to. We stop only once we reach a leaf node.

1:32:50




*/
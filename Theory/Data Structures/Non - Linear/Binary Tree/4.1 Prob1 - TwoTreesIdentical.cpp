/*
Two Trees are identical -
If the second tree is copy of the first tree then we need to return true else false.
Lets say we have two trees - 

        Tree 1                        Tree 2
           1                             1
        /     \                       /     \
       2       3                     2       3
     /  \     /  \                 /  \     /  \
    4    5   6    7               4    5   6    7   

Here both of these trees are identical because tree 2 is copy of tree 1. But lets say we have trees - 

    Tree 1                            Tree 2
        1                                1
     /    \                           /    \
    2      3                         2      3
   /                                  \ 
  4                                    4
Here both of these trees are not identical because tree 2 is not a copy of tree 1. The node with value 2 ie. left child node of the root node
in tree 1 has a left child node with value 4, whereas the node with value 2 in tree 2 has a right child node with value 4.
Further if we have trees - 
    Tree 1                             Tree 2
        1                                 1
      /   \                             /   \
     2    3                            3     2
Here both of these trees are not identical because tree 2 is not a copy of tree 1. The root node in tree 1 has left child node with value 2 & right child node with value 3,
whereas the root node in tree 2 has left child node with value 3 & right child node with value 2.

So in order to check if two trees are identical or not , we will traverse both the trees simultaneously & in each step we will compare the value of the nodes.
We traverse a particular node & check its value & compare its value with the corresponding node in the other tree. If the particular node exists & the values are same in both
the trees then we move forward & traverse the left subtree for that particular node , followed by that we traverse the right subtree for that particular node.
If all the nodes in the left & right subtrees for the root node have same values , then in that case we say that both the trees are same.

Lets say we have trees -
        Tree 1                        Tree 2
           1                             1
        /     \                       /     \
       2       3                     2       3
     /  \     /  \                 /  \     /  \
    4    5   6    7               4    5   6    7

then we start with the root node ie. node with value 1. As both tree 1 & tree 2 have the same value for the root node ie. 1 , then we start with the left subtree traversal for the root node
ie. node with value 1. Then the left & right subtrees for the node with value 1 ie. root node should have all the values same.
Then we traverse the left subtree for the node with value 1 ie. root node for both tree 1 & tree 2.
So the left child node of the root node ie. node with value 1 is node with value 2 for tree 1.
Similarly the left child node of the root node ie. node with value 1 is node with value 2 for tree 2.
As the left child nodes for the root node ie. node with value 1 are same ie. node with value 2. Then the left & right subtree for the node with value 2 should have all the values same.
Then we traverse the left subtree for the node with value 2 for both tree 1 & tree 2.
So the left child node of the node with value 2 is node with value 4 for tree 1.
Similarly the left child node for the node with value 2 is node with value 4 for tree 2.
As the left child node for the node with value 2 are same ie. node with value 4 for both the trees ie. tree 1 & tree 2. Then the left & right subtree for the node with value 4 should have all the values same.
Now the node with value 4 has no child nodes in tree 1. Hence we return to the parent node ie. node with value 2.
Similarly the node with value 4 has no child nodes in tree 2. Hence we return to the parent node ie. node with value 2.
Now as both the left & right subtree for the node with value 4 is similar in tree 1 & tree 2 ie. in both tree 1 & tree 2 the node with value 4 has no left child node nor right child node , then we return 1 for the
left & right child node/subtree each for node with value 4. We return this value 1 to the parent node of node with value 4 ie. node with value 2 implying that the left subtree/child node of node with value 2 ie. in this case node with
value 4 is similar/identical in both tree 1 & tree 2.
Now we have completed left subtree traversal for node with value 2 in tree 1 & tree 2.
We now traverse the right subtree for node with value 2.
So the right child node for node with value 2 is node with value 5 for tree 1.
Similarly the right child node for node with value 2 is node with value 5 for tree 2.
As the right child node for the node with value 2 are same ie. node with value 5 for both the trees ie. tree 1 & tree 2. Then the left & right subtree for the node with value 5 should have all the values same.
Now the node with value 5 has no child nodes in tree 1. Hence we return to the parent node ie. node with value 2.
Similarly the node with value 5 has no child nodes in tree 2. Hence we return to the parent node ie. node with value 2.
Now as both the left & right subtree for the node with value 5 is similar in tree 1 & tree 2 ie. in both tree 1 & tree 2 the node with value 5 has no left child node nor right child node , then we return 1 for the
left & right child node/subtree each for node with value 5. We return this value 1 to the parent node of node with value 5 ie. node with value 2 implying that the right subtree/child node of node with value 2 ie. in this case node with
value 5 is similar/identical in both tree 1 & tree 2.
Now the traversal for both the left & right subtree of node with value 2 has been completed, we return 1 signifying that the left subtree of node with value 1 ie. root node, is identical in both tree 1 & tree 2. Hence we return to the parent node of node with value 2 ie.
the root node ie. node with value 1.
Now the left subtree traversal for node with value 1 has been completed in both tree 1 & tree 2 hence we will now traverse the right subtree of node with value 1.
So the right child node of the root node ie. node with value 1,  is node with value 3 for tree 1.
Similarly the right child node of the root node ie. node with value 1 , is node with value 3 for tree 2.
As the right child nodes for the root node ie. node with value 1 are same ie. node with value 3. Then the left & right subtree for the node with value 3 should have all the values same.
Then we traverse the left subtree for the node with value 3 for both tree 1 & tree 2.
So the left child node for the node with value 3 is node with value 6 for tree 1.
Similarly the left child node for node with value 3 is node with value 6 for tree 2.
As the left child node for the node with value 3 are same ie. node with value 6 for both the trees ie. tree 1 & tree 2. Then the left & right subtree for the node with value 6 should have all the values same.
Now the node with value 6 has no child nodes in tree 1. Hence we return to the parent node ie. node with value 3.
Similarly the node with value 6 has no child nodes in tree 2. Hence we return to the parent node ie. node with value 3.
Now we have completed left subtree traversal for node with value 3 in tree 1 & tree 2. We now traverse the right subtree for node with value 3.
So the right child node for node with value 3 is node with value 7 for tree 1.
Similarly the right child node for node with value 3 is node with value 7 for tree 2.
As the right child node for the node with value 3 are same ie. node with value 7 for both the trees ie. tree 1 & tree 2. Then the left & right subtree for the node with value 7 should have all the values same.
Now the node with value 7 has no child nodes in tree 1. Hence we return to the parent node ie. node with value 3.
Similarly the node with value 7 has no child nodes in tree 2. Hence we return to the parent node ie. node with value 3.
Now the traversal for both the left & right subtree of node with value 3 has been completed. Hence we return to the parent node of node with value 3 ie.
the root node ie. node with value 1.
The traversal for both the left & right subtree for the node with value 1 ie. the root node is complete. Hence the tree traversal is complete & both the trees are similar/identical.


7:37


*/
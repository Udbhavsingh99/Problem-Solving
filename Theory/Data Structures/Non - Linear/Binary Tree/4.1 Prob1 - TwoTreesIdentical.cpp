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
2:43


*/
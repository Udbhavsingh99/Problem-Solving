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
is no right child node present for the node with value 8 , we return the count variable to the parent node of node with value 8 ie. node with value 4.




*/
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
Now as both the left & right subtree for the node with value 6 is similar in tree 1 & tree 2 ie. in both tree 1 & tree 2 the node with value 6 has no left child node nor right child node , then we return 1 for the
left & right child node/subtree each for node with value 6. We return this value 1 to the parent node of node with value 6 ie. node with value 3 implying that the left subtree/child node of node with value 3 ie. in this case node with
value 6 is similar/identical in both tree 1 & tree 2.
Now we have completed left subtree traversal for node with value 3 in tree 1 & tree 2. We now traverse the right subtree for node with value 3.
So the right child node for node with value 3 is node with value 7 for tree 1.
Similarly the right child node for node with value 3 is node with value 7 for tree 2.
As the right child node for the node with value 3 are same ie. node with value 7 for both the trees ie. tree 1 & tree 2. Then the left & right subtree for the node with value 7 should have all the values same.
Now the node with value 7 has no child nodes in tree 1. Hence we return to the parent node ie. node with value 3.
Similarly the node with value 7 has no child nodes in tree 2. Hence we return to the parent node ie. node with value 3.
Now as both the left & right subtree for the node with value 7 is similar in tree 1 & tree 2 ie. in both tree 1 & tree 2 the node with value 7 has no left child node nor right child node , then we return 1 for the
left & right child node/subtree each for node with value 7. We return this value 1 to the parent node of node with value 7 ie. node with value 3 implying that the right subtree/child node of node with value 3 ie. in this case node with
value 7 is similar/identical in both tree 1 & tree 2.
Now the traversal for both the left & right subtree of node with value 3 has been completed, we return 1 signifying that the right subtree of node with value 1 ie. root node, is identical in both tree 1 & tree 2. Hence we return to the parent node of node with value 3 ie.
the root node ie. node with value 1.
The traversal for both the left & right subtree for the node with value 1 ie. the root node is complete. Hence the tree traversal is complete & both the trees are similar/identical as the final value is 1.
At each step we take the AND between the value returned by the left subtree/child node of a particular node & the value returned by the right subtree/child node of a particular node.

We check the value of the present node in both tree 1 & tree 2. Then we check the left child node/subtree of the present node & then we check the right child node/subtree of the present node. If the nodes present in both the trees are same/similar
then at that particular step we return 1 indicating that the same node ie. node has same value in both the trees. We return 0 if the nodes are different ie. node has different value in both the trees. At each step we take the AND between the values
returned by the values returned by the left & right subtree ie. left & right child nodes.

Now we do the AND ie. && operation because , if the value at any particular node is not equal ie. different in tree 1 & tree 2, then in that case instead of returning 1, we return 0 & return ie. we don't need to check the value of any other further
nodes in the tree. Now if the value at a particular given node is equal , then in that case we check for the equality of the left subtree of that node & the right subtree of that node.

We take the AND operation ie. && between the values returned by the left & right subtree of a particular node & then return the resultant of this AND operation to the parent node of that particular node.
So if the left & right subtree of a particular node are identical ie. both the left & right subtree of a particular node return the value 1 , then in that scenario L && R becomes 1 && 1 which is equal to 1
& hence the value 1 is returned to the parent node of that particular node.
If any one of the left or the right subtree of a particular node is not identical ie. either the left subtree or the right subtree of a particular node returns the value 0 , then in that scenario L && R becomes 1 && 0 or 0 && 1 which is equal to 0.
We do this for all the nodes in the trees & if we get the final value as 1 then we say that both the trees are identical else if we get the final value as 0 then we say that both the trees are not identical.

We also check the values at the present nodes as well. If the values at the present nodes are different in both the trees then we return 0 without checking for the left & right subtree of that particular node. 
If the values at the present nodes are same in both the trees then we check for the left & right subtree of that particular node.

In order to check for equality of 2 given binary trees , we first compare the value at the present node in both the trees. If the values at the present nodes are different in both the trees then we return 0 without checking for the left & right subtree of that 
particular node. If the values at the present nodes are same in both the trees then we check for the left & right subtree of that particular node. We take the AND operation ie. && between the values returned by the left & right subtree of a particular node & then 
return the resultant of this AND operation to the parent node of that particular node.

Lets say we are given trees - 

    Tree 1                            Tree 2
        1                                1
     /    \                           /    \
    2      3                         2      3
   /                                  \ 
  4                                    4

then we start with the root node ie. node with value 1. As both tree 1 & tree 2 have the same value for the root node ie. 1 , then we start with the left subtree traversal for the root node.
We then traverse the left child node of the root node ie. node with value 1 for both tree 1 & tree 2 which is node with value 2 for both tree 1 & tree 2. As the left child nodes for the root node ie. node with value 1 are same ie. node with value 2. Then the left & right subtree for the node with value 2 should have all the values same.
Then we traverse the left subtree for the node with value 2 for both tree 1 & tree 2.
Now the left subtree ie. the left child node for the node with value 2 is node with value 4 for tree 1. Whereas the left subtree ie. the left child node for the node with value 2 is NULL for tree 2. As the left child node for the node with value 2 is different in tree 1 & tree 2 , then we return 0 without checking for the right subtree of node with value 2.
We don't check for the right subtree of node with value 2 because the left subtree ie. left child node for the node with value 2 returns 0 & hence the value returned by the left subtree of node with value 2 is 0. Now we take the AND operation between the value returned by the left subtree of node with value 2 ie. 0 & the value returned by the right subtree of node with value 2.
Now  irrespective of the value returned by the right subtree ie. right child node of the node with value 2, as its an AND operation ie. && , the resultant of the AND operation will be 0 && R which is equal to 0. Hence we return 0 to the parent node of node with value 2 ie. the root node ie. node with value 1.
This is why once we get 0 for the left subtree ie. the left chile node of the current node ,  we don't check for the right subtree ie. the right child node of the current node because the resultant of the AND operation will be 0 irrespective of the value returned by the right subtree ie. right child node of the current node.

We write a method isIdentical which takes the root node of both the trees as input parameters & returns true if both the trees are identical else returns false.
Our first base condition is that both root nodes ie. r1 & r2 are NULL. In this scenario again both the trees are identical as both the trees are empty. Hence we return true ie. 1 in this case.
The second condition is that if any one of the trees ie. either r1 or r2 is NULL but the other tree is not NULL then in that case both the trees are not identical as one tree is empty & the other tree is not empty. Hence we return false ie. 0 in this case.
Now we check whether the data stored in the root node ie. the node being pointed by r1 in tree 1 is equal to the data stored in the root node ie. the node being pointed by r2 in tree 2. If the data stored in the root node of tree 1 is not equal to the data stored in the root node of tree 2 then in that case both the trees are not identical & hence we return false ie. 0 in this case.
If the data stored in the root node of tree 1 is equal to the data stored in the root node of tree 2 then in that case we check for the left subtree of the root node & the right subtree of the root node. We take the AND operation between the value returned by the left subtree of the root node & the value returned by the right subtree of the root node & return this value to the root node.
We do this by taking AND ie. && operation between the recursive call to the isIdentical() method for the left subtree of the root node & the recursive call to the isIdentical() method for the right subtree of the root node.
If both are identical then we return 1 , else we return 0. 
We pass the left child node of root nodes of both the trees as input parameters to the recursive call to the isIdentical() method for the left subtree of the root node & we pass the right child node of root nodes of both the trees as input parameters to the recursive call to the isIdentical() method for the right subtree of the root node. We use AND ie. && operation between them
because if the value returned by any one of the left or right subtree ie. left or right child node is 0 then the resultant of the AND operation will be 0 & hence we can return 0 without checking for any further nodes in the tree. If both the left & right subtree ie. left & right child node return 1 then the resultant of the AND operation will be 1 & hence we can return 1 to the parent node of the root node.
Now the possible conditions for the root nodes of tree 1 & tree 2 ie. r1 & r2 are -
r1                r2
NULL              NULL
NULL              Node
Node              NULL
Node              Node

All above conditions are handled in the code. 

Pseudocode :
bool isIdentical(Node *r1, Node *r2)
{
    if(r1 == NULL && r2 == NULL) 
        return 1;
    
    if((!r1 && r2) || (r1 && !r2)) 
        return 0;
    
    if(r1->data != r2->data)
        return 0;
    
    return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
}

Time Complexity: O(N) where N is the number of nodes in the tree. We are traversing all the nodes in the tree once.
Space Complexity: O(H) where H is the height of the tree. This space is required for the recursive stack space. In the worst case when the tree is skewed then H can be equal to N & hence in the worst case space complexity can be O(N). 
In the best case when the tree is complete or full then H can be equal to logN & hence in the best case space complexity can be O(logN).

*/

#include <iostream>

using namespace std;

class Node 
{
    public: 
    int data;
    Node * left;
    Node * right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isIdentical(Node *r1, Node *r2)
{
    if( !r1 && !r2)
        return 1;

    if((!r1 && r2) || (r1 && !r2))
        return 0;

    if(r1->data != r2->data)
        return 0;

    return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
}
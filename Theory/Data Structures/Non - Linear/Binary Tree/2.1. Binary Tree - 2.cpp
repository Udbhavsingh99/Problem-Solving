/*
Now instead of creating a tree by creating the left child of the root nde followed by the right child of the root node & then
moving on to the next node , we use a different method where , 

We go on creating the left child of the nodes till the user inputs a -1 ie. an empty node 
After this we create the right child of the present node. Now we create the left child of this newly created node , if a left 
child is present ie. a value other than -1 is entered for the left child of the newly created node , then again we keep on 
creating the left child of the nodes till user inputs a -1 ie. an empty node.  

If the user enters -1 ie. an empty node , so the newly created node has no left child. 

Then we take ths user input for the right child of this newly created node. Now if the input is -1 ie. an empty node then we 
start traversing back & then we ask user input for the right childs of the left child nodes ie. the right child of each node.

If the user enters value other than -1 ie. a right child is present then we create this right child node & then again ask input
from the user for the left & right child nodes. If the left child node is present then we create the left child node & then again
keep on creating the left child nodes till we encounter -1 as input from the user. Else we ask the right child node & if this is 
-1 then we again start traversing back  & take input from the user & keep on creating the right nodes. 

This traversal continues till we reach the root node.
 
lets say we have an input : 1, 2, 3, 4, -1, -1, 5, -1, -1, -1, 20, -1, -1 

Then the tree would be created as 

                        1  
                    2     20
                3
            4       5
        

Every time we return from a node to the previous node while traversing backwards , we will also return the address of the node
we are traversing from to the node we are traversing to ie. we return the address of the child node to the parent node while
traversing backwards.

Steps :
1. If the input value for a node by the user is -1 , then we return NULL to the parent node
2. Create Node
3. Traverse to the left node & keep on creating left nodes till we encounter -1
4. Traverse to the right node 
5. Return the address of the child node to the parent node while traversing back

*/

#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node* BinaryTree()
{
    int x;
    cout<<"Enter the value of the node : ";
    cin>>x;

    if(x == -1)
    {
        return NULL;
    }
    
    Node* temp = new Node(x);
    
    //Create left child
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = BinaryTree();

    //Create right child
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = BinaryTree();

    return temp;

}

int main()
{
    cout<<"Enter the root Node : ";
    Node* root;
    root = BinaryTree();
}
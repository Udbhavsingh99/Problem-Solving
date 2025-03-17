/*
Level Order Traversal - 
In level order traversal , we traverse/print all the nodes/elements in each level before moving on to the next level.

For example if we have a binary tree as follows - 

                        1
                2               3
            4       5       6       7
                8       9               10     

The output will be : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

We will store the output of the traversal in a vector & not print it directly. Rather we will return this vector from the 
function.

The address of the root node will be provided.

We have to access each node & then print the left & right child of that node. Once we have printed the node followed by its
left & right child, we move to the next node.
In above example we will print the left & right child of node with value 1 ie. the root node , which is 2 & 3. Then we will print the left &
right child of node with value 2 ie. 4 & 5, then we will print the value of the left & right child of node with value 3 ie. 6 & 7.
Now as node with value 4 has no children , we print the value of left & right child of node with value 5 ie. 8 & 9. Again node with
value 6 has no children & node with value 7 has only one right child which is node with value 10 & so we print it.

We push a node value into the vector & once we have pushed the values of both of its children ie. the left & right child nodes into the 
vector we then pop the parent node value from the vector. ie. if we have a node

                        1
                2               3

Here we have parent node with value 1 & 2 children node ie. the left & right node with value 2 & 3 respectively. So, we first push
the node with value 1 into the vector & we get 

Vector = 1

We then pop the node with value 1 from the queue.

Then we push the children of node with value 1 ie. both the left & right child of node with value 1 ie. nodes with value 2 & 3 
respectively in the queue. So presently our queue is , 

Vector = 1
Queue = 2, 3

After this we check for the children of left child of node with value 1 ie. node with value 2. Now node with value 2 has 2 child nodes ie. 
the left child is node with value 4 & the right child is node with value 5. We push the node with value 4 & node with value 5 in the queue & so we
get, 

Vector = 1 
Queue = 2, 3, 4, 5

We pop the left child of node with value 1 ie. node with value 2 from the queue.Then we push the left child of node with value 1 ie. node with value 2 into the vector & so now the vector is , 

Vector = 1, 2
Queue = 3, 4, 5

After this we check for the children of right child of node with value 1 ie. node with value 3. Now node with value 3 has 2 child nodes ie. 
the left child is node with value 6 & the right child is node with value 7. We push the node with value 6 & node with value 7 in the queue & so we
get, 

Vector = 1, 2
Queue = 3, 4, 5, 6, 7

We pop the right child of node with value 1 ie. node with value 3 from the queue.Then we push the right child of node with value 1 ie. node with value 3 into the vector & so now the vector is ,

Vector = 1, 2, 3
Queue = 4, 5, 6, 7

Now as the node with value 4 has no children , we pop the node with value 4 from the queue & push the node with value 4 into the vector & so we get,

Vector = 1, 2, 3, 4
Queue = 5, 6, 7

Now node with value 5 has 2 children ie. the left child of node with value 5 is node with value 8 & the right child of node with value 5 is node with 
value 9. So we push the node with value 8 & node with value 9 in the queue & we get ,

Vector = 1, 2, 3, 4
Queue = 5, 6, 7, 8, 9

Then we pop the node with value 5 from the queue. We push the node with value 5 in the vector. So we get,

Vector = 1, 2, 3, 4, 5
Queue = 6, 7, 8, 9

Now as the node with value 6 has no children , we pop the node with value 6 from the queue & push the node with value 6 into the vector & so we get,

Vector = 1, 2, 3, 4, 5, 6
Queue = 7, 8, 9

Now the node with value 7 has only one right child ie, node with value 10 & no left child. So we push this node with value 10 into the queue to get,

Vector = 1, 2, 3, 4, 5, 6
Queue = 7, 8, 9, 10

We then pop the node with value 7 from the queue & then push the node with value 7 in the vector to get,

Vector = 1, 2, 3, 4, 5, 6, 7
Queue = 8, 9, 10

Now node with value 8 has no child & so we pop the node with value 8 from the queue & push the node with value 8 into the vector to get,

Vector = 1, 2, 3, 4, 5, 6, 7, 8
Queue = 9, 10

Now node with value 9 has no child & so we pop the node with value 9 from the queue & push the node with value 9 into the vector to get,

Vector = 1, 2, 3, 4, 5, 6, 7, 8, 9
Queue = 10

Now node with value 10 has no child & so we pop the node with value 10 from the queue & push the node with value 10 into the vector to get,

Vector = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
Queue = 

Here the data structure being used by us is the queue because we are pushing the nodes from behind and popping the nodes from the front.

The queue that we are creating will be of the type Node* & not of type int because using the int value which will be the data of each node, we won't
be able to ascertain/access the left & right childs of the present node. 

But if we use Node* to create the queue & store the address of each Node in this queue, then using the address of the root node , we can access the 
address of its left & right child & similarly we can access all the children of each node in the tree thus being able to access all the nodes in a tree.

Using the address of a node we can access the data stored in that particular node as well as the address of its left & right child in order to traverse 
through the tree. We can access data of root node using root->data , we can access the left child of root node using root->left & we can access the right 
child of root node using root->right.

Function -

vector<int> LevelOrder(Node* root)
{
    queue<Node*> q;
    q.push(root);

    Vector<int> ans;
    Node* temp;

    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        ans.push_back(temp->data);

        if(temp->left != NULL)
        {
            q.push(temp->left);
        }

        if(temp->right != NULL)
        {
            q.push(temp->right);
        }

    }

    return ans;
}

Steps - 
1. Create queue of type Node* to store node addresses
2. Push the root node address in the queue 
3. Create vector of type int that will store the answer & will be returned
4. Create a pointer temp of type Node*
5. As long as the queue is not empty - 
    5.1 We will make this pointer temp of type Node* point to the same address as the one stored at the front of the queue
    5.2 We pop this address present at the front of the queue , from the queue
    5.3 We push the data of the node being pointed by pointer temp (which is pointing to the same address as the front of the queue) 
        into the vector ans
    5.4 We check if the node pointed by the left pointer of the node being pointed by temp points to NULL ie. we check if the left child 
        is present for the present node & if it is ie. if the left pointer of node being pointed by temp doesn't point to NULL then we push 
        the address being pointed by the left pointer of the node being pointed by temp in the queue.
    5.5 We check if the node pointed by the right pointer of the node being pointed by temp points to NULL ie. we check if the right child 
        is present for the present node & if it is ie. if the right pointer of node being pointed by temp doesn't point to NULL then we push 
        the address being pointed by the right pointer of the node being pointed by temp in the queue.

Time Complexity - O(n)
Space Complexity - O(n)

Lets say we have a Binary Tree as follows , 
                               1                                        1 = 2^0
                   2                      3                             2 = 2^1
            4           5           6           7                       4 = 2^2
        8      9    10     11   12    13    14    15                    8 = 2^3

All nodes in the above binary tree have 2 children except the last level of nodes which have no children at all.
In the above Binary Tree there is 1 node on first level , 2 nodes on second level , 4 nodes on third level & 8 nodes on 4th level.
Based on the pattern the 5th level would've had 16 nodes.
Now in the above tree n ie. the total number of nodes in our tree is 15 ie. 8+4+2+1 = 15 
If we have a perfect binary tree & we want to find the total number of nodes in its last level & we have the total number of nodes present in 
our tree as n , then the total number of nodes in the last level of our perfect binary tree will be n/2 + 1
The size of the queue will be the space complexity so at any given time the maximum number of elements present in our queue will be n/2+1 which
in our case means that the space complexity will be O(n).
The extra space is being used by our queue.

*/

#include<iostream>
#include<vector>
#include<queue>

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

vector<int> LevelOrder(Node* root)
{
    queue<Node*> q;
    q.push(root);

    vector<int> ans;
    Node* temp;

    while(!q.empty())
    {
        temp = q.front();
        q.pop();

        ans.push_back(temp->data);


        //Left Side
        if(temp->left)
        {
            q.push(temp->left);
        }

        //Right Side
        if(temp->right)
        {
            q.push(temp->right);
        }
    }

    return ans;

}

/*
Shortcut to calculate Pre-Order , In-Order & Post-Order traversal by looking at Binary Tree.
*/
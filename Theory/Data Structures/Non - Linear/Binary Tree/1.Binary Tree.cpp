#include <iostream>
#include<queue>

using namespace std;

/*
We create a class Node which contains the data of type integer , the pointer to the left child of the node ie. pointer left 
of type Node * & the pointer to the right child of the node ie. pointer right of type Node *

Then we create a constructor named Node which takes in an argument named val of type int , it assigns this val to data & makes
both the left & right pointer point to NULL ie. both left & right pointer will store NULL.
*/
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

/*
We create a variable x that stores the value of the root node & take input for the value from user. 
Then we create a queue of type Node* named q. 
We create variables first & second of type int. 
We create a new Node & to this we pass the value of x ie. the data for root that we took as input from user. We then store
the address of this newly created node in a pointer named root of type Node*.
We push this address of the newly created node ie. root inside the queue
*/
int main()
{
    int x;
    cout<<"Enter the value of the root node";
    cin>>x;
    queue<Node*> q;
    int first, second;

    Node* root = new Node(x);
    q.push(root);

    /*
    While the queue q is not empty, 
    We create a pointer named temp of type Node* & in this we store the address that is present at the front of the queue q ie.
    We make pointer temp point to the same address as the address stored at the front of the queue q.
    Then we pop this address from the queue q.

    Now we enter the value that we want to store in the left child node of the present node ie. first. If this entered value ie. 
    first is not equal to -1 ie. its not empty , then we create a new Node with value that we entered for the left child node 
    ie. first & make the left pointer of the node being pointed by temp point to this newly created node. Then we push the 
    address of this newly created left child node into the queue ie. we push the address being pointed by the left pointer of 
    the node being pointed by temp , into the queue.

    Now we enter the value that we want to store in the right child node of the present node ie. second. If this entered value ie. 
    second is not equal to -1 ie. its not empty , then we create a new Node with value that we entered for the right child node 
    ie. second & make the right pointer of the node being pointed by temp point to this newly created node. Then we push the 
    address of this newly created right child node into the queue ie. we push the address being pointed by the right pointer of 
    the node being pointed by temp , into the queue.

    */
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the value of the left child for : "<<temp->data<<" ";
        cin>>first;
        if(first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout<<"Enter the value of the right child for : "<<temp->data<<" ";
        cin>>second;
        if(second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
}

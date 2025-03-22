/*

*/

#include<iostream>

using namespace std;

class Node 
{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value)
        {
            data = value;
            left = right = NULL;
        }    
};

int TotalSum(Node* root, int& sum)
{
    if(root == NULL)
    {
        return;
    }

    int sum = root->data + TotalSum(root->left, sum) + TotalSum(root->right, sum);
    return sum;
}
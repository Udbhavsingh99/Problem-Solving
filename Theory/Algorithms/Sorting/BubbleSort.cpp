/*

*/

#include<iostream>

using namespace std;

int main()
{
    int size = 0;
    cout<<"Enter the size of the input array : ";
    cin>>size;

    int arr[size];

    cout<<"Enter the values in the array : ";
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i<size; i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] =temp;
        }
    }

    for (int n : arr) 
    {
        cout<<n;
    }
}

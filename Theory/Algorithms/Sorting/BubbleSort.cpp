/*
In bubble sort we compare the value at the present index to the value at the next index ie. we compare the value at arr[i] with
value at arr[i+1] 
If the value atarr[i+1] is smaller than the value at arr[i] , we swap the values at both these indexes. 
For swapping we use a temporary variable named temp as follows ,
temp = arr[i];
arr[i] = arr[i+1]
arr[i+1] = temp

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

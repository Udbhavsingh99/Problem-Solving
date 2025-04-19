/*
Lets say we have an array with values as below :
9 7 3 1 6
we need to put this array in increasing order.

We look for the smallest value in the array & swap it with the value at the smallest index in the array ie.
in above example we look for the smallest value in the array ie. 1 & swap it with the value at the smallest
index in the array ie. 9 at index 0. So the array that we obtain is :

1 7 3 9 6

Now we start sorting from the index 1 ie. our starting index gets incremented by one index.
ie. now sorting occurs in 7 3 9 6

Now we look for the second smallest value in the array & swap it with the value at the second smallest index
in the array ie. in above example we look for the second smallest value in the array ie. 3 & swap it with the
value at the second smallest index in the array ie. 7 at index 1. So the array that we obtain is :

1 3 7 9 6

Now we start sorting from the index 2 ie. our starting index gets incremented by one index.
ie. now sorting occurs in 7 9 6

Now we look for the third smallest value in the array & swap it with the value at the third smallest index in
the array ie. in above example we look for the third smallest value in the array ie. 6 & swap it with the value
at the third smallest index in the array ie. 7 at index 2. So the array that we obtain is :

1 3 6 9 7

Now we start sorting from the index 3 ie. our starting index gets incremented by one index.
ie. now sorting occurs in 9 7

Now we look for the fourth smallest value in the array & swap it with the value at the fourth smallest index in
the array ie. in above example we look for the fourth smallest value in the array ie. 7 & swap it with the value
at the third smallest index in the array ie. 9 at index 3. So the array that we obtain is :

1 3 6 7 9

Now the array is completely sorted in ascending/increasing order. This technique of sorting is called Selection Sort.

----- is used to signify the values that are undergoing the sorting operation.

                9 7 3 1 6
                ---------

Round 1 :       1 7 3 9 6
                  -------

Round 2 :       1 3 7 9 6
                    -----

Round 3 :       1 3 6 9 7
                      ---

Round 4 :       1 3 6 7 9
Sorting complete

Now if we have an array of size n then the sorting process will occur for n-1 rounds.
In above case our array was of size 5 & so the sorting occurred for n-1 ie. 4 rounds.

Similarly if we have an array as follows :

                10 8 2 3 1 4 
                ------------
Round 1 : Swap smallest value ie. 1 with value at smallest index ie. 10 at index 0
          swap(arr[4], arr[0])
                1 8 2 3 10 4
          Loop - 0->5

Round 2 :       1 8 2 3 10 4
                  ----------
          Swap second smallest value ie. 2 with value at second smallest index ie. 8 at index 1
          swap(arr[2], arr[1])
                1 2 8 3 10 4
          Loop - 1->5

Round 3 :       1 2 8 3 10 4       
                    --------
          Swap third smallest value ie. 3 with value at third smallest index ie. 8 at index 2
          swap(arr[3], arr[2])
                1 2 3 8 10 4
          Loop - 2->5

Round 4 :       1 2 3 8 10 4
                      ------
          Swap fourth smallest value ie. 4 with value at fourth smallest index ie. 8 at index 3
          swap(arr[5], arr[3])
                1 2 3 4 10 8
          Loop - 3->5

Round 5 :       1 2 3 4 10 8
                        ----
          Swap fifth smallest value ie. 8 with value at fifth smallest index ie. 10 at index 4
          swap(arr[5], arr[4])
                1 2 3 4 8 10
          Loop - 4->5

Sorting complete.
For 6 elements in the array we used 5 rounds to complete sorting.
So loop runs from 0 to n-1 & in each iteration the starting point ie. the 0 gets incremented by 1 in each round.

Return index of smallest element of an array -
Lets say we have an array :
index           0 1 2 3 4

                3 4 1 2 6

Now to get the index of the smallest element in the array , initially we assume that the value at
index 0 is the smallest element ie. we put index value as 0.

So currently the index value is 0 & hence its assumed that the smallest element in the array is 3.

Now we will run a for loop from index 1 till the last index & if we find some value that is smaller 
than the value which we have assumed to be the smallest ie. the value at index 0 which is 3, then we 
change the value of the index to the index of the new smallest value.

index = 0;
for(i = 1; i<=4; i++)
{
    if(arr[i]<arr[index])
    {
        index = i;
    }
}

1st pass - Index checked 1 -> n-1 ie. 4 : Check if arr[1]<arr[0] ie. 4<3 , False. Hence, index value remains same
2nd pass - Index checked 2 -> n-1 ie. 4 : Check if arr[2]<arr[0] ie. 1<3 , True. Hence, index value changes from 0 to 2
3rd pass - Index checked 3 -> n-1 ie. 4 : Check if arr[3]<arr[2] ie. 2<1 , False. Hence, index value remains same
4th pass - Index checked 4 -> n-1 ie. 4 : Check if arr[4]<arr[2] ie. 6<1 , False. Hence, index value remains same

As the starting index is increasing in each iteration/round , we assume it to be i which means we assume the index to be i
& the value of this i goes on increasing from 0 to n-1 ie. in our case value of i increases from 0 to 4.

We then run a for loop from i+1 till n-1 ie. j<n & we increment j in each iteration.
If the value at index j in our array is smaller than the value at the index in the variable index, that we assumed holds the smallest value ,
then we store this index j in our variable index.

Once the for loop for j is over , we swap the value at the index stored in variable index , with value stored at index denoted by i in the 
current iteration.

Now we put the above entire code in a loop that runs from 0 to n-2 ie. 0 to i<n-1 & increment i value in each iteration.

Method 2 -
In our array , the first swapping occurs between the smallest number in the array & value at index 1 , the second swapping operation occurs 


*/

#include<iostream>

using namespace std;

int main()
{
    int arr[5] = {12, 45, 78, 32, 56};
    int index;

    for(int i = 0; i<4; i++)
    {
        index = i;
        for(int j = i+1; j<5; j++)
        {
            if(arr[j]<arr[index])
            {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }


}

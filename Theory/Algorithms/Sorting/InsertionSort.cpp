/*
Lets say we have an array of size 5 with values , 

7 4 2 3 5

We assume the value at index 0 ie. the first value of the array to be sorted by default & hence we run the loop from index 1 ie. the second 
value of the array

Round 1 : Now in round 1 , the value at index 0 ie. the first value is 7 & the value at index 1 ie. the second value is 4. Now as 7>4 ie. 
arr[i]>arr[i+1] , then we swap the values at these indexes ie. we swap the first value ie. value at index 0 with the second value ie. value at 
index 1.
Hence after Round 1 the array is 4 7 2 3 5

Round 2 : Now in round 2 , the values at index 0  & index 1 ie. the first & second values of the array are now sorted. ie. 4 7 | 2 3 5
The value at index 1 ie. the second value is 7 & the value at index 2 ie. the third value is 2. Now as 7>2 ie. arr[i]>arr[i+1] , then we swap 
the values at these indexes ie. we swap the second value ie. value at index 1 with the third value ie. value at index 2. Hence we get the array 

4 2 7 3 5 

Now the value at index 0 ie. the first value is 4 & the value at index 1 ie. the second value is 2. Now as 4>2 ie. arr[i]>arr[i+1] , then we swap
the values at these indexes ie. we swap the first value ie. value at index 0 with the second value ie. value at index 1. Hence we get the array 

2 4 7 3 5

Round 3 : Now in round 3 , the values at index 0, 1 & 2 ie. the first,second & third values of the array are now sorted. ie. 2 4 7| 3 5
The value at index 2 ie. the third value is 7 & the value at index 3 ie. the fourth value is 3. Now as 7>3 ie. arr[i]>arr[i+1] , then we swap 
the values at these indexes ie. we swap the third value ie. value at index 2 with the fourth value ie. value at index 3. Hence we get the array

2 4 3 7 5

Now the values at index 1 ie. the second value is 4 & the value at index 2 ie. the third value is 3. Now as 4>3 ie. arr[i]>arr[i+1] , then we swap
the values at these indexes ie. we swap the second value ie. value at index 1 with the third value ie. value at index 2. Hence we get the array 

2 3 4 7 5

Round 4 : Now in round 4 , the values at index 0 , 1 , 2 & 3 ie. the first,second,third & fourth values of the array are now sorted ie. 2 3 4 7 | 5
The value at index 3 ie. the fourth value is 7 & the value at index 4 ie. the fifth value is 5. Now as 7>5 ie. arr[i]>arr[i+1] , then we swap 
the values at these indexes ie. we swap the fourth value ie. value at index 3 with the fifth value ie. value at index 4. Hence we get the array

2 3 4 5 7 

The array is now completely sorted

Lets say we have an array 

4 3 5 1 2 

Round 1 : As arr[0] > arr[1] ie. 4>3 , we swap & hence the array that we get is 

3 4 5 1 2

index 0 & index 1 are now sorted ie. arr[0] & arr[1] are now sorted

3 4 | 5 1 2 

Round 2 : As arr[2] > arr[1] ie. 5>4 , we don't need to swap as the elements are already sorted & so the array remains the same 

3 4 5 1 2

index 0 , index 1 & index 2 are now sorted ie. arr[0], arr[1] & arr[2] are now sorted

3 4 5 | 1 2

Round 3 : As arr[2] > arr[3] ie. 5>1 , we swap & hence the array that we get is

3 4 1 5 2

now , arr[1] > arr[2] ie. 4>1 , we swap & hence the array that we get is 

3 1 4 5 2

now , arr[0] > arr[1] ie. 3>1 , we swap & hence the array that we get is 

1 3 4 5 2

index 0 , index 1 , index 2 & index 3 are now sorted ie. arr[0], arr[1], arr[2] & arr[3] are now sorted

1 3 4 5 | 2

Round 4 : As arr[3] > arr[4] ie. 5>2 , we swap & hence the array that we get is 

1 3 4 2 5 

now , arr[2] > arr[3] ie. 4>2 , we swap & hence the array that we get is 

1 3 2 4 5

now , arr[1] > arr[2] ie. 3>2 , we swap & hence the array that we get is 

1 2 3 4 5

The array is now completely sorted

Lets say we have an array 

1 4 6 8 5

in this case we can observe that the values at arr[0], arr[1], arr[2] & arr[3] ie. first, second, third & fourth values are already
sorted 

1 4 6 8 | 5

so only the last value ie. arr[4] which is the 5th element in the array with value 5 is not in the correct order/position. The array 
with the correct order/position would be , 

1 4 5 6 8

So, instead of beginning from the 0th index ie. the first value we start from the n-1th index ie. the last value. In this case the value 
of n is 5 & hence we start from 4th index.

Round 1 : As arr[4] < arr[3] ie. 5<8 , we swap & hence the array that we get is

1 4 6 5 8

now , arr[3] < arr[2] ie. 5<6 , we swap & hence the array that we get is

1 4 5 6 8

The array is now completely sorted

The pseudocode will be following , 

for(j=4; j>=0; j--)
{
    if(arr[j]<arr[j-1])
    {
        swap(arr[j], arr[j-1]);
    }
}

1st iteration - 
j=4 , j>0 = true
arr[j]<arr[j-1] ie. arr[4]<arr[3] which is true because arr[4] = 5 & arr[3] = 8 & as 5<8 , we swap the indexes of 5 & 8 ie.
arr[4] & arr[3]
j-- ie. j=3

j=3 , j>0 = true
arr[j]<arr[j-1] ie. arr[3]<arr[2] which is true because arr[3] = 5 & arr[2] = 6 & as 5<6 , we swap the indexes of 5 & 6 ie.
arr[3] & arr[2]
j-- ie. j=2

j=2 , j>0 = true
arr[j]<arr[j-1] ie. arr[2]<arr[1] which is false because arr[2] = 5 & arr[1] = 4 & as 5>4 , we stop because the value at arr[1]
& arr[0] are going to be smaller than that of arr[2] ie. 5

So the value 5 is at the correct position ie. arr[2] & hence its not required to compare the value at arr[2] ie. 5 with indexes 
less than 2 because the values are in sorted order & hence any value before arr[1] ie. 4 is bound to be less than it thus making
it smaller than arr[2] ie. 5 because 5>4. To make the program more efficient , once the value in this case 5 reaches the correct 
position ie. arr[2] , then we stop the loop execution & break out because there is no point of irrelevant loop traversals.
Hence when the condition arr[j]<arr[j-1] is false, we break out of the loop because the value has reached its correct position in 
the array.

for(j=4; j>=0; j--)
{
    if(arr[j]<arr[j-1])
    {
        swap(arr[j], arr[j-1]);
    }
    else
    {
        break;
    }
}

Now there's a bug in the above code. 



*/

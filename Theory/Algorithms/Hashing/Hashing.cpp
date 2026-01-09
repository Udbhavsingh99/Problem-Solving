/*
Initial Problem -
How many times a particular value occurs in the array.

First Apprroach -
We compare the input value with value present at each index in the array.
For this we create a counter variable & initialize to 0 , we then run a for loop iterating from 0 to the
size of the array & in each iteration we compare the input variable to be searched with the value present at current
index of the array. If the values are same ie. input variable to be searched = value present at current index of the array,
we increment the counter variable by 1. Else if the values are different we move to the next iteration leaving the counter
variable unchanged.

Lets say the input number to be searched is 1 & the input array is ,

|1|2|1|3|2|

first approach is we iterate the entire array using for loop & then we compare with value present at each index in our array.
So the initial value of i is 0 ie. i = 0, counter variable is 0 & input value to be searched is 1,
For i = 0, arr[0] = 1 , as 1 = 1 , hence counter++ ie. counter = 1 , i++
For i = 1, arr[1] = 2 , as 2 != 1, hence counter remains same ie. counter = 1 , i++
For i = 2, arr[2] = 1 , as 1 = 1 , hence counter++ ie. counter = 2 , i++
For i = 3, arr[3] = 3 , as 3 != 1, hence counter remains same ie. counter = 2 , i++
For i = 4, arr[4] = 2 , as 2 != 1, hence counter remains same ie. counter = 2 , i++
i>size of array , exit counter = 2

Brute force approach :

int func(number, arr)
{
	cnt = 0;
	n = arr.size()
	for(i = 0; i<n; i++)
	{
		if(arr[i] == number)
		{
			cnt = cnt + 1;
		}
	}
	return cnt;
}

We iterate through the entire array & the counter variable will be updated in each iteration after comparison between the number
passed as argument to the function & the value/number at the current index in the array. If the values are same then the counter
value is increased/incremented else the counter value remains the same. At the end of the for loop ie. after the entire array
traversal is completed, the counter value is updated & we return this updated value of counter variable.

We pass the value whose occurence frequency we want to check as the first argument to the function/method.
It does a linear iteration ie. it goes to every element & checks if the value passed to the method is same/equal as the value present
at that particular index in the array & then it updates the counter , at the end of the method it returns the counter.

As we are running the loop for N times , hence the time that we are taking in order to compute how many times a number appears is O(N).
So if we want to search the number of occurences for a number present in the array , then for each number in our input array it will take
O(N) time ie. the complete loop is traversed to check the number of occurences of each value in our input array.

If our input array has 5 elements , then for 5 numbers we need to find how many times each number appears in the input array , the time complexity
for finding the occurence of each number in the input array is O(N) , then for 5 numbers the time complexity would be 5 times of O(N) ie.  5*O(N)

*/

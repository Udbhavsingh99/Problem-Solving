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

We pass the value whose occurrence frequency we want to check as the first argument to the function/method.
It does a linear iteration ie. it goes to every element & checks if the value passed to the method is same/equal as the value present
at that particular index in the array & then it updates the counter , at the end of the method it returns the counter.

As we are running the loop for N times , hence the time that we are taking in order to compute how many times a number appears is O(N).
So if we want to search the number of occurrences for a number present in the array , then for each number in our input array it will take
O(N) time ie. the complete loop is traversed to check the number of occurrences of each value in our input array.

If our input array has 5 elements/numbers , then for 5 numbers we need to find how many times each number appears in the input array , the time complexity
for finding the occurrence of each number in the input array is O(N) , then for 5 numbers the time complexity would be 5 times of O(N) ie.  5*O(N)

Lets say the input array has huge number of such elements ie. our input array has lot of such numbers, lets say we have Q numbers in our input array. 
For each one of the numbers out of this Q numbers present in our input array , we need to tell how many times each particular number appears in the 
input array. So for each number we are taking O(N) time , hence for Q numbers the time complexity would be Q*O(N) ie. O(QN).
This is because everytime we are taking a for loop & computing it, then for each for loop the time complexity is O(N) , hence as there are Q numbers 
present in the input array , hence the time complexity is O(QN). This is a very large time complexity.

Hashing - 
Hashing is pre-storing & fetching the stored data as per requirement.
Lets say that we have an input array & the problem statement states that this input array at max will have numbers till 12.

Now we know that our input array will have numbers only from 0 to 12. So we will create another array named HashArray of size 13 ( 0 to 12 inclusive ) & 
initialize all the values/indexes of this HashArray to 0.
The indexing in this newly created array will start from 0 & will go till 12. 

Now in this HashArray , we will do some pre-calculation. 
Lets say the input array is 

|1|2|1|3|2|

We go to the first index in the input array ie. index 0 , the value present at index 0 is 1. Now we go to the HashArray at index 1 & increment the value present at index 1 by 1. The value at index 1 in HashArray is now 1.
We go to the next ie. second index in the input array ie. index 1 , the value present at index 1 is 2. Now we go to the HashArray at index 2 & increment the value present at index 2 by 1. The value at index 2 in HashArray is now 1.
We go to the next ie. third index in the input array ie. index 2 , the value present at index 2 is 1. Now we go to the HashArray at index 1 & increment the value present at index 1 by 1. The value at index 1 in HashArray is now 2. 
We go to the next ie. fourth index in the input array ie. index 3 , the value present at index 3 is 3. Now we go to the HashArray at index 3 & increment the value present at index 3 by 1. The value at index 3 in HashArray is now 1.
We go to the next ie. fifth index in the input array ie. index 4 , the value present at index 4 is 2. Now we go to the HashArray at index 2 & increment the value present at index 2 by 1. The value at index 2 in HashArray is now 2.

Once we have traverse the entire input array for all its elements/numbers , the HashArray if we properly observe , in the index of HashArray representing the value in the input array , we can find the number of times a particular 
value/number appears in the input array. Each index in the HashArray represents the value present in the input array & the value present at that index in the HashArray represents the number of times that particular value appeats in 
the input array.

The value 2 at index 1 in HashArray represents/means that the value 1 appears 2 times in the input array.
The value 2 at index 2 in HashArray represents/means that the value 2 appears 2 times in the input array.
The value 1 at index 3 in HashArray represents/means that the value 3 appears 1 time in the input array. 
The remaining indexes in HashArray marked as 0 represents/means that the values 0, 4, 5, 6, 7, 8, 9, 10, 11, 12 appear 0 times
in the input array.

Hence the final HashArray will look like this -
Index: 0 1 2 3 4 5 6 7 8 9 10 11 12
Value: 0 2 2 1 0 0 0 0 0 0 0  0  0 

This is the pre-storing/pre-fetching of data that we have done using hashing. 

Now when we want to check for the occurrences of a particular number in the input array , then instead of looping through the entire array & finding the occurrences of the number , we can directly go to the HashArray at the index 
representing that number & fetch the value present at that index in HashArray , which will give us the number of occurrences of that particular number in that input array.

Lets say we want to check the occurrences for the following numbers in the input array - 

1, 3, 4, 2, 10, 12

then we don't loop through the entire array to find the occurrences of each of the numbers present in the input array,  we use the prefetched values present in HashArray for this.
If we want to check for the number of occurrences of number 1 in the input array , then we don't loop through the entire input array & check the number of occurrences of value 1 in the input array, 
instead we directly check the value present at index 1 in HashArray because index 1 of HashArray represents the value 1 in input array. The value present at index 1 in HashArray is 2 , 
hence the number of occurrences of value 1 in input array is 2 as the number stored at index 1 in HashArray represents the number of occurrences of value 1 in input array.
So number of occurrences of 1 in input array = HashArray[1] = 2
Similarly, 
number of occurrences of 3 in input array = HashArray[3] = 1
number of occurrences of 4 in input array = HashArray[4] = 0
number of occurrences of 2 in input array = HashArray[2] = 2
number of occurrences of 10 in input array = HashArray[10] = 0
number of occurrences of 12 in input array = HashArray[12] = 0

Hence we did a single precomputation/traversal of the input array to create the HashArray which took O(N) time.

Precomputation - 
Lets say the size of the input array is 5,
The input array is 1 3 2 1 3
The total values/numbers for which we need to find the number of occurrences is 5
The values for which we need to find the number of occurrences in input array is 1, 4, 2, 3, 12

Declaring Hash - 
What if the largest value present in the input array is very large , lets say 10^9.
Then we cannot create a HashArray of size 10^9 + 1 as it will take a lot of space in memory. 
The maximum size array that we can declare/create inside the main() method is of size 10^6 of type int.
Any value larger than this will give us a segmentation fault.

But if we declare this HashArray globally ie. outside the main() method, then we can create a HashArray of size 10^7
of type int. 

For boolean values , inside the main() method we can create a boolean array of size 10^7 of type boolean.
For boolean values , globally ie. outside the main() method we can create a boolean array of size 10^8 of type boolean.

Character Hashing - 
If we require number hashing then we can use arrays to hash them.
Similarly we can do character hashing using arrays as well.

Lets say we have an input string s = "abcdabefc"
Then in this input string the character 'a' appears two times , character 'c' appears two times , character 'z' appears zero times...
Similarly we can do for a lot of characters.
We can check for the occurrence of Q characters in the input array & we need to tell the occurrence of each of these Q characters inside the input array.
Based on standard procedure we take a character that we want to find the occurrences for , then we iterate the entire input string & check the occurrences for 
that character in the input string. Each time we find that character in the input string , we increment the counter variable by 1.

We iterate through the entire string & in a similar way we compare the character with each of the characters & we count it.

In our method we take the string to be iterated over ie. the input string on which we need to find the occurrences of characters as the first argument to the method
& the character whose occurrences we need to find as the second argument to the method.
We then create a variable count & initialize it to 0.
We run a for loop in order to iterate over the entire input string. We compare the current character in the string in present iteration with the character that we 
passed as second argument to the method. If both characters are same then we increment the counter variable by 1. We finally return the counter variable.
Every iteration of the input string takes O(N) time. If we are given Q characters whose occurrences we need to find in the input string , then the time complexity
will be O(QN) as for each character we are iterating through the entire input string.

Now we can hash the input string into arrays to decrease the time complexity.
The arrays have indexes. 
Lets imagine the characters inside our string are all lowercase alphabets/characters ie. from 'a' to 'z' which means 26 elements/characters.
So we create an array of size 26 ie. array with indexes from 0 to 25 & initialize all the values to 0.
Since we know that there are 26 alphabets, we can correspond/map index 0  value to occurrences of character 'a', index 1 value to occurrences of character 'b' & so on
basically mapping/corresponding the indexes to characters & the values stored at these indexes to the occurrences of those characters.
We dont have any relation between the index & character , we are just assuming that the indexes represent respective characters & in this way we will have 1 index in an 
array for all of our 26 alphabets.

In order to program this mapping procedure of the indexes to characters, we can use the ASCII values of characters.
So lets say we assign a character to a variable of type int ie. integer lets say int x = 'a'. We are storing a character 'a' in variable x of type integer ie.int , then in this 
case the character lowercase 'a' is converted into its ASCII value ie. 97 & this ASCII value is stored in variable x.

Now the ASCII value of 'a' is 97 & that of 'z' is 122. Now to represent lets say the result of subtraction of two characters ie. 'f' - 'a' , then the ASCII value of 'f' is 102 &
that of 'a' is 97 , hence the result of subtraction will be 102 - 97 = 5. This is because subtraction ie. - occurs between two integers & hence it converts the characters 'f' & 'a'
into their respective ASCII values ie. 102 & 97 & then performs the subtraction operation.
Now similarly if we do,
'a' - 'a' then we get 0 ie. 'a' - 'a' = 0
'b' - 'a' then we get 1 ie. 'b' - 'a' = 1
'c' - 'a' then we get 2 ie. 'c' - 'a' = 2 
& so on.

Formula - Character - 'a' = Index in HashArray

So for the input string s = "abcdabefc"
We create a HashArray of size 26 & initialize all values to 0. 
We iterate through the entire input string , in each iteration we take the current character & do the operation Character - 'a' to get the index in HashArray.
We then go to that index in HashArray & increment the value present at that index by 1.
For example - 
The first character in the input string is 'a' , we do 'a' - 'a' ie. 97 - 97 = 0 , we go to index 0 in HashArray & increment the value present at index  0 by 1, hence value at index 0 = 1.
The second character in the input string is 'b' , we do 'b' - 'a' ie. 98 - 97 = 1 , we go to index 1 in HashArray & increment the value present at index  1 by 1, hence value at index 1 = 1.
The third character in the input string is 'c' , we do 'c' - 'a' ie. 99 - 97 = 2 , we go to index 2 in HashArray & increment the value present at index  2 by 1, hence value at index 2 = 1.
The fourth character in the input string is 'd' , we do 'd' - 'a' ie. 100 - 97 = 3 , we go to index 3 in HashArray & increment the value present at index  3 by 1, hence value at index 3 = 1.
The fifth character in the input string is 'a' , we do 'a' - 'a' ie. 97 - 97 = 0 , we go to index 0 in HashArray & increment the value present at index  0 by 1, hence value at index 0 = 2.
The sixth character in the input string is 'b' , we do 'b' - 'a' ie. 98 - 97 = 1 , we go to index 1 in HashArray & increment the value present at index  1 by 1, hence value at index 1 = 2.
The seventh character in the input string is 'e' , we do 'e' - 'a' ie. 101 - 97 = 4 , we go to index 4 in HashArray & increment the value present at index  4 by 1, hence value at index 4 = 1.
The eighth character in the input string is 'f' , we do 'f' - 'a' ie. 102 - 97 = 5 , we go to index 5 in HashArray & increment the value present at index  5 by 1, hence value at index 5 = 1.
The ninth character in the input string is 'c' , we do 'c' - 'a' ie. 99 - 97 = 2 , we go to index 2 in HashArray & increment the value present at index  2 by 1, hence value at index 2 = 2.
Hence the final HashArray will look like this -
Index: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
Value: 2 2 2 1 1 1 0 0 0 0 0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0	

If our string contains uppercase letters as well ie. from 'A' to 'Z' alongwith lowercase letters ie. from 'a' to 'z', 


29:36
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n; //Size of the input array
	cin>>n;

	int arr[n]; //Input array

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	//precomputation 
	//Declare a hash array with size 13 as maximum possible value in input array is 12 , the size of HashArray depends on largest value present in input array
	int HashArray[13] = {0}; //Initialize all values to 0
	for(int i=0; i<n; i++)
	{
		HashArray[arr[i]]+=1; 
	}

	int q;
	cin>>q;

	while(q--)
	{
		int number;
		cin>>number;
		//fetch
		cout<<HashArray[number]<<endl; //fetching the precomputed value ie. number of occurrences of 'number' in input array
	}

	return 0;

}



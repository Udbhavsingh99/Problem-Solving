/*
Initial Problem -
How many times a particular value occurs in the array.

First Approach -
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

If our string contains uppercase letters as well ie. from 'A' to 'Z' alongwith lowercase letters ie. from 'a' to 'z', then we already know that we have 256 characters in total & hence we can 
just go across & create an array of size 256 ie. from 0 to 255 & this time we won't have to subtract the 'a' from the character to get the index in this HashArray. We can directly use the
character's ASCII value as the index in HashArray & at each occurrence of that character in the input string we can increment the value present at the corresponding ASCII value index in HashArray 
by 1. Eg. If we get character 'a' in the input string , then its ASCII value is 97, we go to index 97 in HashArray & increment the value present at index 97 by 1.
If we get character 'b' in the input string , then its ASCII value is 98, we go to index 98 in HashArray & increment the value present at index 98 by 1.
Just because we only had lowercase letters in the input string , we created a HashArray of size 26 & mapped the indexes to characters using the formula Character - 'a' = Index in HashArray.

So in the input we are provided with an input string , then we pass the number of characters for which we need to find the occurrences & we pass the characters for which we want to check the  
occurrences. 

Code - 
We create a HashArray of size 26 & initialize all values to 0.
We then iterate the entire input string , in each iteration we take the current character & do the operation Character - 'a' to get the index in HashArray.
We then go to that index in HashArray & increment the value present at that index by 1.
We then fetch from the same index using the same formula Character - 'a' = Index in HashArray to get the index in HashArray for the character whose occurrences we need to find.

We created HashArray of size 26 as we only had lowercase letters in the input string. If our input string has both uppercase & lowercase letters then in that case , we know that the total number of 
character that exist is 256, hence we create a HashArray of size 256 & directly use the ASCII value of character as index in HashArray. While iterating the input string , when we find a character , 
we directly increment the value present at the index equal to ASCII value of that character in HashArray by 1.

We are taking a bigger size. Unless we are confirmed that we are only having lowercase letters in the input string , we take a bigger size of 256 to accommodate all characters, else we take 26.

Unlike numbers where we had problem/complication of large size of numbers , in characters we don't have that problem as the total/max number of characters is fixed ie. 256 & arrays can accommodate that size
ie. 256 easily. 

For character hashing always prefer arrays & the common logic is - 
For lowercase letters only - use size 26 & formula Character - 'a' = Index in HashArray
For uppercase letters only - use size 26 & formula Character - 'A' = Index in HashArray
For all characters - use size 256 & directly use ASCII value of character as index in HashArray ie. hash the character using ASCII value of character directly

If we use s[i] directly as index in HashArray, then it automatically converts itself into its ASCII value because hash[] requires an index & index is an integer value , so s[i] is a character & it automatically
casts/converts itself into its ASCII value to be used as index in HashArray.

So s[i] is character , but the hash[] inside its [] requires/needs an integer, so even if we write a character inside the [] , it will automatically convert/cast itself into its ASCII ie. integer value.

In number hashing when we were trying to hash into the arrays , we saw that we can do at max of 10^7 that also if we declare the array globally. For numbers exceeding this limit ie. 10^7 , like 10^9, 10^12 or
19^18 we cannot hash it using arrays. That is where in C++ the STL is used. 

In STL we can use map or unordered_map to do hashing for larger numbers.

So for large numbers we were taking an array , instead we will use map or unordered_map from STL.

Map - 
Lets say we have an array arr = [1, 2, 3, 1, 3, 2]
In C++ map is a data store. We can represent map using a bucket.
We know that the map must have a key & a value corresponding to that key.
In our case the key will be the number present in the input array & the value will be the number of occurrences ie. frequency of that number in the input array.
Both the key & value in this case will be of type integer.
If we do map[1] then this will return us 0 as the corresponding value in the map is 0.

For the array :
1, 2, 3, 1, 3, 2 

we have 1 at the first index , so we do map[1]++. If it doesn't exist in the map, then it will be created with value 0 & then incremented by 1. So map[1] = 1. The map will store
a key value pair of (1, 1) ie. key = 1 mapped to a value = 1.
We have 2 at the second index , so we do map[2]++. If it doesn't exist in the map, then it will be created with value 0 & then incremented by 1. So map[2] = 1. The map will store
a key value pair of (2, 1) ie. key = 2 mapped to a value = 1.
We have 3 at the third index , so we do map[3]++. If it doesn't exist in the map, then it will be created with value 0 & then incremented by 1. So map[3] = 1. The map will store
a key value pair of (3, 1) ie. key = 3 mapped to a value = 1.
We have 1 at the fourth index , so we do map[1]++. It already exists in the map with value 1 & then incremented by 1. So map[1] = 2. The map will update
the key value pair of (1, 1) to (1, 2) ie. key = 1 mapped to a value = 2.
We have 3 at the fifth index , so we do map[3]++. It already exists in the map with value 1 & then incremented by 1. So map[3] = 2. The map will update
the key value pair of (3, 1) to (3, 2) ie. key = 3 mapped to a value = 2.
We have 2 at the sixth index , so we do map[2]++. It already exists in the map with value 1 & then incremented by 1. So map[2] = 2. The map will update
the key value pair of (2, 1) to (2, 2) ie. key = 2 mapped to a value = 2.

What we need to do is , map[arr[i]]++ for each index i in the input array.

Now lets say our input array had an extra number 12 at the last index , then we would have done map[12]++ as 12 is present on the last ie. seventh index. If it doesn't exist in the 
map, then it will be created with value 0 & then incremented by 1. So map[12] = 1. The map will store a key value pair of (12, 1) ie. key = 12 mapped to a value = 1.

Had we used array hashing approach , it would still have ended up taking array of size 13 for array hashing for numbers till 12.
But in our case for hashing using map we are only storing values/elements that are required, in our case the required values/elements that we need to store in our map are 1, 2, 3, 12,
hence the total values/elements stored is 4.
In array hashing, we had to declare an array of size 13 if the maximum value present in the array was 12, in order to get the 12th index. This is where map is slightly beneficial & it
takes a little less memory because it will just store the elements that are required.

If we do map[4] , then its not there in the map & hence will return us 0.

We take n as input which tells us the size of the input array, we take the input array , we then take the number of queries/elements that we want to find the occurrence of as input &
then we finally take the queries ie. elements that we want to query themselves.

All the values in the map are stored in the sorted order. We can iterate over the map to verify this.
We can do pre-computation while taking the input array itself.

Now map can be used for hashing characters in string as well. The key in this case would be the character & the value in this case would be
the frequency ie. value of type integer. This means the map will be map<char, int> where in the map<Character, Frequency of Character> .
So instead of using array for String hashing, we can go ahead & use map for String hashing ie. we can say map[Character]++ & this will not be
converting into character.

The time complexity when we use the map ie. for both storing & fetching operation in a map takes logN in all cases be it best, average or worst.
In all cases it takes logN.

Based on what we are trying to hash we store that as the key & the frequency/number of occurrences of that particular character/element as the
value.

Unordered map -
Even if we use unordered_map , the program runs fine.
Unordered map implies that unlike map where all the values are stored in a sorted order , in an unordered map the values are stored in an unsorted
order. The order of the output will change with each compiler.

The advantage of using unordered map is that when we are storing some value in the unordered map & when we are fetching some value from the unordered map ,
the average & the best time complexity is O(1) ie. a constant one. In most of the cases we get the average time complexity which is O(1).
In the worst case the time complexity for storing & fetching values from the unordered_map is O(N) ie. a linear one. Here the term N implies the number
of terms/elements in the map. The time complexity is directly related to the number of elements present in the map. Depending on the number of elements in the
map , the time taken ie. time complexity will be calculated.

The average & best case will be O(1) & the majority of scenarios will fall under this category.
In very minor cases we will get worst case scenarios . we might get time complexity of O(N) in very rare cases. 
In this scenario our code will take O(N^2) time because we are doing hashing inside a for loop which iterates N times. 
As hashing itself takes O(N) time in worst case & we are doing this hashing operation N times inside a for loop , hence 
the total time complexity will be O(N^2) in worst case.

Most of the times we will first try to solve the problem using unordered_map if it fails ie. it gives us Time Limit Exceeded , then we switch back to map. But the
first preference should be unordered_map because the worst case ie. O(N) happens very rarely. 
The worst case happens when there are a lot of collisions in the hashing function.

We know that we cannot do hashing on arrays larger than the size 10^7

The map data structure is created using 3 methods - 
1> Division method
2> Folding method
3> Mod Square method

We know that we can design an array hash, but for numbers like 10^18 ,  how do we store it ?

Division method - 
Imagine we have numbers in array like [2, 5, 16, 28, 139]
Now in this scenario we can do array hashing , as the maximum number is small ie. 139. Hence,  we can go ahead & create an array of size 140 containing indexes from 
0 to 139 & then we can hash the values.

Lets assume that for the time being we cannot create an array of size greater than 10.
In this scenario we can use the division method.
We can only create an array of size 10 ie. from index 0 to 9. Hence we can only store values from 0 to 9 in this array.

Now using the division method , we will take the value from the array by iterating over it, we then divide the value from the array by 10 ie. value % 10, then at the resultant
So for the given input array we do, 
arr[i]%10 ie.
2%10 = 2, we go to index 2 in the HashArray & increment the value present at index 2 by 1
5%10 = 5, we go to index 5 in the HashArray & increment the value present at index 5 by 1
16%10 = 6, we go to index 6 in the HashArray & increment the value present at index 6 by 1
28%10 = 8, we go to index 8 in the HashArray & increment the value present at index 8 by 1
139%10 = 9, we go to index 9 in the HashArray & increment the value present at index 9 by 1

Then the array is 

Index| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
Value  0   0   1   0   0   1   1   0   1   1

So we have used the division method to trim down the numbers & somehow array hash the input array into a HashArray of size 10.

If we want to check the occurrences of number 139 in the input array , then we do 139%10 = 9 , we go to index 9 in HashArray & fetch the value present at index 9 ie. 1.
Here 1 is the number of occurrences of 139 in the input array.

Lets say we have an input array as - 

[2, 5, 16, 28, 139, 38, 48, 28, 18]

What if on doing arr[i]%10 , we get the same index for two different numbers in the input array.
We create the HashArray of size 10 in vertical format - 

0
1
2 - 2
3
4
5 - 5
6 - 16
7
8 - 18 -> 28 -> 28 -> 38 -> 48 
9 - 139

Then for input array [2, 5, 16, 28, 139, 38, 48, 28, 18] , we do arr[i]%10 ie.
2%10 = 2, we go to index 2 in the HashArray & increment the value present at index 2 ,  we have one 2 in input array
5%10 = 5, we go to index 5 in the HashArray & increment the value present at index 5 ,  we have one 5 in input array
16%10 = 6, we go to index 6 in the HashArray & increment the value present at index 6 ,  we have one 16 in input array
28%10 = 8, we go to index 8 in the HashArray & increment the value present at index 8 , we have one 28 in input array
139%10 = 9, we go to index 9 in the HashArray & increment the value present at index 9 , we have one 139 in input array
38%10 = 8 , now we have a collision factor as both 28%10 & 38%10 give us index 8 , we cannot directly store it , hence 
we store it in a chaining manner ie. we create a linked list for values the modulo of which we get 8
48%10 = 8 , we go to the linked list that contains chain for values%10 = 8 , we append 48 to the back of the linked list
28%10 = 8 , we go to the linked list that contains chain for values%10 = 8 , we append another 28 to the linked list after
the previous 28 that we appended.
18%10 = 8 , we go to the linked list that contains chain for values%10 = 8 , we append 18 to the starting of the linked list
before the first 28 that we appended.
We store the numbers in some chaining that is known as linear chaining. This is implemented using linked lists.

Now if we want to check the occurrence of a particular value in the input array lets say 28 , then we do value%10 ie. 28%10 , 
which is 8 , then we go to the value 8 in HashArray. We know that there will be limited numbers & we know that the numbers will
be in sorted order. Then using search algorithm like Binary Search we can find that there are 2 occurrences of 28 in the input
array.
We can keep the HashArray in limited memory storage even for large values in input array.

Collision -
In order to find out how many times 28 appeared in our input array , we went to 8 & then we figured out that 28 appears twice , this is because
it was chained in a sorted order.

But if we had a huge number , then the chain could become ultra huge , then we wouldn't have used the division method. We would've use some
method that is mixture of everything.

Lets say that we are given an input array with values , 

18 , 28 , 38 , 48 , .... , 1008

All the values in the input array are ending with value 8. 
Then in the chain on value 8 , all the values of the entire input array will be present.
Apparently all the other memories are unused & at 8 we have all the numbers.
So a huge chain is present at value 8 , collision has happened for all the numbers in the input array.
Everyone/every number went to the same index/hash space ie. 8. Finding the occurrence of a particular number in this
case will take a lot of time.

Irrespective of the hash that is being used internally, it ends up that all our keys end up at the same hash value/index.
This is when the worst case scenario happens & we get time complexity as O(N). This is an extremely rare scenario.

Under division method we do normal simple division followed by linear chaining for multiple values/keys/results landing at same index.
The key can be an integer, double, string, character or even a pair of integers. Any data structure/data type can be used as key in map. 

When it comes to unordered_map, we can only have individual data types as keys. We cannot have complex data structures. 
So something like pair<int, int> cannot be used as key in unordered_map but can be used as key in map.



56:00
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

int main_lower_case() 
{
	string s;
	cin>>s;

	//pre-compute
	int hash[26] = {0};
	for(int i=0; i<s.size(); i++)
	{
		hash[s[i]-'a']++;
	}

	int q;
	cin>>q;
	while(q--)
	{
		char ch;
		cin>>ch;
		//fetch
		cout<<hash[ch-'a']<<endl;
	}
	return 0;
}

int main_all_characters()
{
	string s;
	cin>>s;

	int hash[256]= {0};

	for(int i = 0; i< s.size(); i++)
	{
		hash[s[i]]++;
	}

	int q;
	cin>>q;
	while(q--)
	{
		char ch;
		cin>>ch;
		//fetch
		cout<<hash[ch]<<endl;
	}
	return 0;
}

int main_hash()
{
	int n;
 	cin>>n;

 	int arr[n];
 	for(int i = 0; i<n; i++)
	{
		cin>>arr[i];
	}

	//Precompute
	map<int,int>Hash;
	for(int i = 0; i<n; i++)
	{
		Hash[arr[i]]++;
	}


	//Iterate in the map
	for(auto it : Hash)
	{
		cout<<it.first<<"->"<<it.second<<endl;
	}

    int q;
    cin>>q;
	while(q--)
	{
		int number;
		cin>>number;
		//Fetch
		cout<<Hash[number]<<endl;
	}
	return 0;
}

int main_hash_unordered()
{
	int n;
 	cin>>n;

 	int arr[n];
 	for(int i = 0; i<n; i++)
	{
		cin>>arr[i];
	}

	//Precompute
	unordered_map<int,int>Hash;
	for(int i = 0; i<n; i++)
	{
		Hash[arr[i]]++;
	}


	//Iterate in the map
	for(auto it : Hash)
	{
		cout<<it.first<<"->"<<it.second<<endl;
	}

    int q;
    cin>>q;
	while(q--)
	{
		int number;
		cin>>number;
		//Fetch
		cout<<Hash[number]<<endl;
	}
	return 0;
}

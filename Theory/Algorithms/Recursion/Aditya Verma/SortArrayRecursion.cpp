/*
In input we are provided with an array of integers and we have to sort this array using recursion.
Lets say we have an array arr[] = {2 3 7 6 4 5 9}
We need to give the sorted array in output ie. arr[] = {2 3 4 5 6 7 9}

We identify a recursive problem if we are provided with choices & we can take decisions on these provided choices.

In the array arr[] = {2 3 7 6 4 5 9} , we can see its a recursive problem , hence we can try 2 methods to solve this problem.
1. We check if we are able to take decisions on this array to sort it. If we are unable to take decisions on the array then we use
method 2.
2. We try to make the input smaller

So we want to make the array sorted ie. arr[] = {2 3 4 5 6 7 9}

Now for this array , the decision making process is not clear/intuitive , hence we use method 2 ie. making the input smaller.

We can solve recursive problems in two ways - 
1. If we are able to take/make decisions ie. its a decision problem, then we use the decision/recursive tree method
2. If we are unable to take/make decisions ie. we want to make the input smaller ie. its a smaller input problem , then we use the template for recursion ie. 
BaseCondition - Hypothesis - Induction method

We will create a method/function named sort() that will take an array as input and will sort it using recursion.
So sort() function will be applied on an array where given array arr[] = {2, 3, 7, 6, 4, 5, 9}
Now we want to make the input smaller ie. decrease the size of the array/input.

We will then call the sort() method on the array after removing the last element 9 ie. arr[] = {2, 3, 7, 6, 4, 5}. We will give this array to the sort()
function/method to sort it ie. we call the sort() method on a smaller input/array to get a sorted array.

In the hypothesis for the sort() method/function we have defined that the sort() method will sort the array passed to it ie.
if we pass the array arr[] = {2, 3, 7, 6, 4, 5, 9} ie. if we call sort() method/function on array arr[] ie. sort(arr), then we will get 2, 3, 4, 5, 6, 7, 9 as output.
So based on our hypothesis if we call the sort() method/function on array arr[] = {2, 3, 7, 6, 4, 5, 9}, then we will get sorted array 2, 3, 4, 5, 6, 7, 9 as output.
Then if we call the sort() method/function on array arr[] = {2, 3, 7, 6, 4, 5} ie. array arr[] after removing the last value/element 9, then we will get sorted array 2, 3, 4, 5, 6, 7 as output.

Base Condition - 
In our sort() method/function the input is an array. We are decreasing the size of the array by removing the last element of the array.
When we are reducing the size of the input array , then the smallest/minimum possible size for the array is 0.
If the size of the array arr[] that we pass to the sort() method/function is n, then we keep on reducing the size of the array that we pass to the sort() method/function ie.
if the original size of the array arr[] is n, then we reduce the size of the array by 1 in each recursive call ie. we remove the last element of the array in each recursive call.
So in the first recursive call to the sort() method the size of the array that we pass as input to the sort() method is n-1 , in the next ie. second recursive call to the sort() method
the size of the array that we pass as input to the sort() method is n-2 , and so on. We keep on reducing/decreasing the size of the input array arr[] to the sort() method till the size of the
array arr[] that we pass to the sort() method is 0 ie. till the array is empty. In each recursive call to the sort() method the size of the input array arr[] is moving towards 0.

The size of the array arr[] can only be positive or zero , it can never be negative & hence values less than 0 are invalid.
The smallest valid input size for the array arr[] is 0 ie. an empty array.

Lets say we pass an array arr[] = {2, 5, 4} to the sort() method/function. Then the sorted output will be arr[] = {2, 4, 5} ie. sorted . We then reduce the size of input array arr[] by 1 ie. we remove the last element 4. In the next recursive call to the sort() method we will pass
arr[] = {2, 5} to the sort() method/function. Then the sorted output will be arr[] = {2, 5} ie. sorted array. We then reduce the size of input array arr[] by 1 ie. we remove the last element 5. In the next recursive call to the sort() method we will pass arr[] = {2} to the sort() method/function. Then the sorted output will be arr[]
= {2} ie. sorted array. Now at this point as there is only one element/value present in the array arr[] , hence the array is already sorted. 

We dont need to reduce further because in our sort() method when a single element remains.

Basically if the array passed as input to the sort() method has size 1 ie. contains a single element , then the array is already sorted.

A single element is increasing, decreasing & sorted at the same time. These are relative.
9:23
*/
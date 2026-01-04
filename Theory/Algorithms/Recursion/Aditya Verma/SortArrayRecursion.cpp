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

Then the base condition is that if the size of the array/vector decreases to/is equal to 1 , then we return from the sort() method & no more recursive calls to the sort() method is required.
So as we keep decreasing the size of the input array in each consecutive recursive call to the sort() method, then the size of the array will eventually reach 1 ie. the array will eventually contain only one element & when that happens then we have reached the base case & hence we return back
from the sort() method call as there is no more recursive calls required to the sort() method.

Hypothesis - 
We have designed the hypothesis that if we call the sort() method on any input array/vector, then the sort() method will sort the input array/vector & return the sorted array/vector.

Induction - 
We write the code for the function in the induction step so that it works in the way its required in the hypothesis.
Lets say we pass array arr[] = {2,1,3} to the sort() method ie. sort(2,1,3) , then the output will be 1,2,3 ie. sorted array.
Now we will decrease the size of the input array arr[] by 1 ie. we will remove the last element 3. 
In the next recursive call to the sort() method we will pass arr[] = {2,1} to the sort() method ie. sort(2,1) , then the output will be 1,2 ie. sorted array. 
Now our responsibility is to insert the removed last element 3 at the correct position in the sorted array arr[] = {1,2}.
Now we will decrease the size of the input array arr[] by 1 ie. we will remove the last element 2.
In the next recursive call to the sort() method we will pass arr[] = {1} to the sort() method ie. sort(1) , then the output will be 1 ie. sorted array.
Now at this point as there is only one element/value present in the array arr[] , hence the array is already sorted.
Then we return from the sort() method & no more recursive calls to the sort() method is required.

Lets say we call the sort() method on the array arr[] = {1, 5, 0, 2} ie. sort(1, 5, 0, 2)
Now we know that the sort() method will sort the input array arr[] = {1, 5, 0, 2} & return the sorted array arr[] = {0, 1, 2, 5} as output.
Now we will decrease the size of the input array arr[] by 1 ie. we will remove the last element 2 to make the input array smaller. So when we pass a smaller input ie.
array arr[] = {1, 5, 0} to the sort() method ie. sort(1, 5, 0) , then the output will be arr[] = {0, 1, 5} ie. sorted array. This is based on the hypothesis on the basis of which we designed our sort() method.
Now our responsibility is to insert the removed last element 2 at the correct position in the sorted array arr[] = {0, 1, 5}.

So we go one step down after removing the last element from the input array in order to make the input array smaller. If it works for a smaller input ie. one step then it will work for 
all further steps.

Now our input array arr[] that was provided to us was {1, 5, 0, 2} , now in order to make the input array smaller we removed the last element 2 from the input array arr[] to make it {1, 5, 0} 
& passed this smaller input array arr[] = {1, 5, 0} to the sort() method/function.
Now the sort() method will sort this smaller input array arr[] = {1, 5, 0} & return the sorted array arr[] = {0, 1, 5} as output. Now we have the element 2 that we removed from the original input array arr[] = {1, 5, 0, 2} , 
now we have to insert this element 2 at the correct position in the sorted array arr[] = {0, 1, 5} such that the final array remains sorted after inserting the element 2.
So we meed to insert the element 2 at the correct position between element 0, 1 & 5 in the sorted array arr[] = {0, 1, 5} such that the final array remains sorted after inserting the element 2.

Induction -
Now in the induction step we have the sorted array arr[] = {0, 1, 5} for the smaller input & we have to insert the element 2 that we removed in the previous step to make the input array smaller at the correct position in this sorted array arr[] = {0, 1, 5} 
such that the final array remains sorted after inserting the element 2.

The code written in the induction step makes the hypothesis work.

In order to insert the element 2 at the correct position in the sorted array arr[] = {0, 1, 5} , we will create a new array , then we compare each of the elements in our original array arr[] = {0, 1, 5} with the element 2 that we want to insert at the correct position in this 
newly created array. If the element is smaller than or equal to 2 , then we insert that element in the new array. When we find an element that is greater than 2 , then we insert 2 at that position in the new array.
Then we insert all the remaining elements from the original array arr[] = {0, 1, 5} in the new array.
So the first element 0 is smaller than 2 , so we insert 0 in the new array.
The second element 1 is smaller than 2 , so we insert 1 in the new array.
The third element 5 is greater than 2 , so we insert 2 in the new array at this position.
Then we insert the remaining element 5 from the original array arr[] = {0, 1, 5} in the new array.
So the final new array is arr[] = {0, 1, 2, 5} which is sorted.
This can be done in an iterative approach using loops.

So the original array that was provided to us arr[] = {1, 5, 0, 2} , we make the input array smaller/decrease the size of the input array by removing the last element 2 to make it arr[] = {1, 5, 0} 
& pass this smaller input array arr[] = {1, 5, 0} to the sort() method/function.
The sort() method/function sorts this smaller input array arr[] = {1, 5, 0} & returns the sorted array arr[] = {0, 1, 5} as output.
Now we need to insert the removed last element 2 at the correct position in the sorted array arr[] = {0, 1, 5} such that the final array remains sorted after inserting the element 2.
This will be handled in the induction step of our sort() method/function.

One way is that we can run a loop from the first index of the sorted input array ie. i = 0 & in each iteration we compare the value present at that index in the array with the value 2 ie. the value that we removed earlier
to make the input array to the sort() method smaller.
For the input array arr[] = {0, 1, 5} , 
in the first iteration the value of i is i = 0, hence arr[i] = arr[0] = 0 , as 0<2 , 0 is placed at the first index ie. index 0 of the new array.
|0|1|5|
^
as 0<2, 
|0| | | |
in the second iteration the value of i is  i = 1, hence arr[i] = arr[1] = 1 , as 1<2, 1 is placed at the second index ie. index 1 of the new array.
|0|1|5|
   ^
as 1<2,
|0|1| | |
in the third iteration the value of i is i = 2, hence arr[i] = arr[2] = 5 , as 5>2 , 2 is placed at the third index ie. index 2 of the new array.
|0|1|5|
     ^
as 5>2,
|0|1|2| |
Now only the value 5 remains in the original array  , hence we just place 5 at the fourth index ie. index 3 of the new array.
|0|1|2|5|
Now we have the sorted array.

Recursive approach - 
We have an array arr[] = {0, 1, 5} & the element 2 that we removed from the last position/index in the array to make the input array smaller/decrease the size of 
the input array.
We need to insert this value 2 in the correct position inside the sorted array {0, 1, 5} such that the order of the array is maintained.

If we are unable to determine a decision then we focus on making the input smaller.
We need to put 2 in the input array arr[] = {0, 1, 5}
So we decrease the size of the input array be removing the last element ie. 5. 
Now we need to insert the element/value 2 in the array arr[] = {0, 1}
If we are able to put the element 2 at the correct position in the array , then we already know that 5 is the largest element in the array, hence it will be placed automatically 
at the last index in the output array.
So once we add element 2 to the output array , then 5 will automatically be placed at the last index in the array ie. the output array arr[] = { 0, 1, 2, 5}

Now this is a new recursive problem - 
Now we have an array arr[] = {0, 1, 5} & we want to insert the value/element 2 that we removed from the original array. 
So we create an insert() method & to this insert() method we pass a vector/array ie. {0, 1, 5} as the first argument & the element that we want to insert into this array/vector as the second
argument ie. insert(vector, element)

Base Condition - 
In order to be able to insert the element in this case 2 in the array/vector , if there is an array/vector in the first place.
We are decreasing the size of the input array with each recursive call.
If the input array that we pass to insert() method is empty, then there is no need for comparison & hence we can directly insert the value/element 2 in the output array.
Even if there is a single element in the input array that we pass to the insert() method , then we would need to compare the value of that element with the element 2 ie. the element that we pass
  the second argument to the insert() method that we want to insert in the input array that we pass as the first argument to the insert() method.

If the input array is empty then there is no requirement to compare as there are no elements to compare , hence we can directly insert the element 2 ie. the value that we pass as the second argument to  
the insert() method inside the empty array that we pass as first argument to the insert() method.

So the first condition will be if the size of the array/vector that we pass as input ie. the first argument is 0 ie. empty or not.

1>If we compare the input element that we pass as the second argument to the insert() method with the last element of the input array that we pass as the first argument to the insert() method & if the input
element is greater than or equal to the last element of the input array, then we dont need to traverse the array & change the position of any other element in the array , hence we can directly insert the
input element at the last position of the array.

2>If we compare the input element that we pass as the second argument to the insert() method with the first element of the input array that we pass as the first argument to the insert() method & if the input
element is smaller that or equal to the first element of the input array , then we don't need to traverse the array & change the position of any other element in the array , hence we can directly insert
the input element at the first position of the array.

In both 1 & 2 scenarios we wouldn't need to compare the input element that we get as second argument in our insert() method, with the value in the input array that we pass as the first argument to the insert() method.

If the element passed as the second argument to the insert() method would have been 6 , then we could've easily compared this element 6 with the last element of the input array that we pass as the first argument to the
insert() method , which in this case is 5 , as 6>5 hence we can insert this element/value 6 directly in the array at the last position/index without making any changes to other elements in the array.

The problem is that when we try to insert the value 2 inside the input array that we pass as first argument to the insert() method , then in that case we would need to change the indexes/positions of all the other elements greater
than 2 ie. the input element that we pass as the second argument to the insert() method. In our scenario if we pass the input array arr[] = {0, 1, 5}  as the first argument & the value 2 as the element to be inserted as the second argument
then in order to insert the element 2 in the input array while maintaining the sorted order of the input array arr , we need to increment the index of the values in the input array arr that are greater than the element 2 ie. in this case
element 5. Hence the final array after insertion of element 2 that we pass as second argument to the insert() method & after incrementing the position/indexes of the values/elements in the input array arr that are greater than element 2 is
{0, 1, 2, 5}. Hence in a scenario where the value to be inserted in the input array is neither larger than the largest value present in the input array nor smaller than the smallest value present in the input array , the index of all values larger than
the value to be inserted in the array needs to be incremented by 1.

If the value to be inserted in the input array arr is larger than the largest value present in the input array arr, then we don't need to change the indexes/positions of any other elements in the input array arr , we can directly insert the element at
the last position/index in the array arr. In our case the largest value present in the input array arr is 5 , if lets say the value to be inserted in the input array arr is 6 , then in that case the largest element in the input array ie. 5
is less than the value that we are trying to insert ie. 6 ie. 6>5 , hence we will just insert the value 6 at the last position/index in the input array arr without changing the indexes/positions of any other elements in the input array arr.

Hence the base condition is - 
Vector v is passed as first argument & element is the value to be inserted & passed as the second argument to the insert() method & the last element in this vector v is present at the index v.size() - 1
if(v.size() == 0 || v[v.size() - 1] <= element) 
{
    v.push_back(element);
    return;
}
in this scenario we directly pushback/insert the element that we get as second argument in the insert() method at the last index/position in the input vector v that we get as the first argument in the insert() method when either the input array/vector is 
completely empty or the last element in the input array/vector v is less than the value that we want to insert in the input array/vector. 

Now if the input array/vector has values {0, 1, 5} & the value to be inserted is 2, then we will first store the value 5 ie. the last & largest element in the input array/vector in a separate temp variable var.

Hypothesis - 
The insert() method will take an input array/vector as the first argument & an element/value to be inserted in this input array /vector as the second argument & will insert this element/value at the correct position in the input array/vector such that the order of the input array/vector is maintained
ie. post insertion of the element in the input array/vector, all elements in the input array/vector will be sorted in ascending order.
For input array arr[] = {0, 1, 5} & element = 2 , the output will be arr[] = {0, 1, 2, 5} ie. sorted array.

Now we will pass a smaller input array/vector to the insert() method by removing the last element 5 from the input array/vector ie. the input array/vector will be {0, 1}
So the input array arr[] = {0, 1} & element = 2 , the output will be arr[] = {0, 1, 2} ie. sorted array.

Now the element 5 that we removed earlier & is stored in the temp variable var , should be inserted at the correct position in the sorted array arr[] = {0, 1, 2} such that the order of the array is maintained ie. post insertion of element 5 in the array arr[] = {0, 1, 2} , the final array should be
arr[] = {0, 1, 2, 5} ie. sorted array. This is because 5 is the largest element in the original input array arr[] = {0, 1, 5}, hence it will be placed automatically at the last index in the output array.

Induction - 
Once we have the sorted array arr[] = {0, 1, 2} for the smaller input , then we need to insert the removed last element 5 at the correct position in this sorted array arr[] = {0, 1, 2} such that the final array remains sorted after inserting the element 5.
We insert the element 5 at the last index of the sorted array arr[] = {0, 1, 2} to get the final sorted array arr[] = {0, 1, 2, 5} this is because 5 is the largest element in the original input array arr[] = {0, 1, 5}.

So in the insert() method/function , we have the base condition ie. if the size of the input array/vector is 0 or if the value/element passed as the second argument to the insert() method is greater than the last/largest element present in the input array/vector passed as the first argument to the 
insert() method, then we directly insert/pushback the element at the last index/position in the input array/vector.

We then store the last/largest element in the input array/vector in a temp variable var to later add it again in the sorted output array, then we remove/pop the last element from the input array/vector to make the input array/vector smaller.
Now we will again call the insert() method/function on this smaller input array/vector to insert the element at the correct position in this smaller input array/vector. We call the insert() method/function recursively on this smaller input array/vector & as the second argument we pass the element
that we want to insert in this smaller input array/vector.



23:15
*/
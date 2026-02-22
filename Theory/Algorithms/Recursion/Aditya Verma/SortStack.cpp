/*
Problem statement - 
We are provided a stack of integers & the values that we need to insert in the stack are provided in the form of an array/vector with values 
lets say 5, 1, 0, 2. 
We would need to enter these 5, 1, 0, 2 values in the stack. 
Or the input could be provided in the form of a stack with values 5, 1, 0, 2 already present in the stack.

In the output we need to print the sorted stack. 
So if the stack has values , 5, 1, 0, 2 then after sorting the stack we will get 0, 1, 2, 5.

5, 1, 0, 2 -> Sorting -> 0, 1, 2, 5

If we print the values in the stack from top to bottom then the output will be 5, 2, 1, 0 as stack is a LIFO (last in first out) data structure.
Hence the values will be printed in descending order from top to bottom of the stack.

In the earlier example we had an input array/vector with values 5, 1, 0, 2 & we needed to sort this input array/vector. 
Now in this problem we have an input stack with values 2, 0, 1, 5 & we need to sort this input stack.

Now for the array we decided to first sort the input array/vector ie. 5, 1, 0, 2. We designed a hypothesis that the sort() method will take an 
input array/vector as an argument & will sort this input array/vector & return the sorted array/vector as output. Hence the output will be 
0, 1, 2, 5 for the input array/vector 5, 1, 0, 2.

We will store the last element of the input array/vector ie. 2 in a temp variable & then we will pop the last element from the input array/vector
to make the input array/vector smaller ie. 5, 1, 0. 

We recursively call the sort() method with the smaller input array/vector ie. 5, 1, 0.
This will give us the sorted array/vector 0, 1, 5 as output.

Induction step - 
In the induction step we will insert the temp variable value ie. 2 that we removed earlier in order to make the input array/vector smaller, 
back into the sorted array/vector 0, 1, 5. We need to insert the temp variable value ie. 2 in the correct position in the sorted array in a way
such that the sorted array/vector remains sorted after inserting the temp variable value ie. 2.
Hence in the induction step we created a new method named insert() method that will take the sorted array/vector 0, 1, 5 & the temp variable value
ie. 2 as arguments 

Now in the case of stack - 
Lets say we have an input stack with values 2, 0, 1, 5. Then if we use sort() method to sort this input stack then we will get the sorted stack with 
values 5, 2, 1, 0 as output.
Now if we store the top element of the input stack ie. 2 in a temp variable & then we pop the top element from the input stack to make the input stack smaller 
ie. 0, 1, 5.

We then call the sort() method recursively with the smaller input stack ie. 0, 1, 5. This will give us the sorted stack with values 5, 1, 0 as output.
Now we need to insert the temp variable value ie. 2 that we removed earlier in order to make the input stack smaller, back in the sorted stack with values
5, 1, 0. We need to insert the temp variable value ie. 2 in the correct position such that after inserting the temp variable value ie. 2 the sorted stack
with values 5, 1, 0 remains sorted. 

Now in the insert() method for array sorting, we take 2 arguments - the sorted array/vector 0, 1, 5 & the temp variable value ie. 2 that we need to insert in 
the sorted array/vector 0, 1, 5.
Then we store the last element of the sorted array/vector ie. 5 in a temp variable & then we pop the last element from the array/vector to make the 
sorted array/vector smaller ie. 0, 1.
Then we recursively call the insert() method with the smaller sorted array/vector ie. 0,1 & the temp variable value ie. 2 that we need to insert in the sorted array/vector
0, 1.

We have already designed the purpose of the insert() method which is to insert the temp variable value in the correct position in the sorted array/vector such that
the sorted array/vector remains sorted after inserting the temp variable value.

Now the recursive call to the insert() method with the smaller sorted array/vector ie. 0, 1 & the temp variable value ie. 2 that we need to insert in the sorted array/vector
will insert the temp variable value ie. 2 in the correct position in the smaller sorted array/vector ie. 0, 1 such that the smaller sorted array/vector remains sorted after inserting
the temp variable value ie. 2. Hence the output of the recursive call to the insert() method with the smaller sorted array/vector ie. 0, 1 & the temp variable value ie. 2 that we need to insert in the sorted array/vector
0, 1 will be the sorted array/vector with values 0, 1, 2. 
Then we will insert the largest value in the input array/vector ie. 5 that we removed earlier in order to make the sorted array/vector smaller, back in the sorted array/vector with values 0, 1, 2.
This will give us the sorted array/vector with values 0, 1, 2, 5 as output.

Now in the case of stack sorting,  we create an insert() method that will take the sorted stack with values 5, 1, 0 as the first argument & the value to be inserted in this sorted stack ie. 2 as the second argument.
This insert() method will insert the value to be inserted in the sorted stack in the correct position such that after insertion the sorted stack remains sorted ie. the insert() method will return us the sorted stack with 
values 5, 2, 1, 0 as output.

So we store the 5 ie. the largest value in the sorted input stack in a temp variable & then we pop the 5 from the sorted input stack to make the sorted input stack smaller ie. 1, 0.
Then we recursively call the insert() method with the smaller sorted input stack ie. 1, 0 & the value to be inserted in this sorted stack ie. 2 as arguments.
Now the insert() method will insert the value to be inserted in the sorted stack ie. 2 that we pass as second argument, in the correct position in the smaller sorted stack ie. 1, 0 that we pass as first argument, such that 
after inserting the value to be inserted in the sorted stack ie. 2, the smaller sorted stack ie. 1, 0 remains sorted. Hence the output of the recursive call to the insert() method with the smaller sorted input stack ie. 1, 0 & the value to be inserted in this sorted stack ie. 2 as arguments will be the sorted stack with values 2, 1, 0.
Then we will insert/push the largest value in the input stack ie. 5 that we removed earlier in order to make the sorted input stack smaller, back in the sorted input stack with values 2, 1, 0. This will give us the sorted stack with values 5, 2, 1, 0 as output.

If there is a single element in our array then the array is already sorted & hence we return the array as it is without doing anything. Similarly if there is a single element in our stack then the stack is already sorted & hence we return the stack as it is without doing anything.
This is the base case for both array sorting as well as stack sorting for the sort() method.

The base condition for insert() method for array sorting is that if the size of the input array/vector is 0 or if the value/element passed as the second argument to the insert() method is greater than the last/largest element present in the input array/vector passed as the first argument to the insert() method, then we directly 
insert/pushback the element at the last index/position in the input array/vector. 

The base condition for insert() method for stack sorting is that if the size of the input stack is 0 or if the value/element passed as the second argument to the insert() method is greater than the top element present in the input stack passed as the first argument to the insert() method, then we directly push the element at the top of 
the input stack.

In the vector/array sorting problem, we passed the vector/array to be sorted to the sort() method , in case of stack we will pass the stack to be sorted to the sort() method.
Our base case in vector/array sorting problem is that if the size of the input array/vector is 1 , then we return the array/vector as it is without doing anything.
In the case of stack sorting problem, our base case is that if the size of the input stack is 1 , then we return the stack as it is without doing anything.
We stored the last/largest element in the input array/vector in a temp variable to later add it again in the sorted output array/vector, then we removed/popped the last element from the input array/vector to make the input array/vector smaller.
Similarly in the case of stack sorting problem, we stored the top element in the input stack in a temp variable to later add it again in the sorted output stack, then we removed/popped the top element from the input stack to make the input stack smaller.
We then make the recursive call to the sort() method with the smaller input stack as first argument & the temp variable ie. the largest element in the input stack as second argument.

Now in the insert() method the first argument which was earlier the sorted array/vector, is now the sorted stack & the second argument is the value to be inserted in the sorted stack.
The base condition for insert() method for stack sorting is that if the size of the input stack is 0 or if the value/element passed as the second argument to the insert() method is greater than the top element present in the input stack passed as the first argument to the insert() method, then we directly push the element at the top of
the input stack.
We then store the largest/top value in the input stack in a temp variable to later add it again in the sorted output stack, then we pop the top element from the input stack to make the input stack smaller.
We then recursively call the insert() method with the smaller sorted input stack as first argument & the value to be inserted in this sorted stack as second argument. 
Then we will insert/push the largest/top value in the input stack that we removed earlier in order to make the sorted input stack smaller, back in the sorted input stack & this will give us the entire sorted stack.


08:30

*/

#include<iostream>
#include<stack>

using namespace std;

int sortStack(stack<int> s)
{
    if(s.size() == 1)
    {
        return;
    }
    int temp = s.top();
    s.pop();
    sortStack(s);
    insert(s, temp);
}

int insert(stack<int> &s, int element)
{
    if(s.size() == 0 || s.top() <= element)
    {
        s.push(element);
        return;
    }

    int val = s.top();
    s.pop();
    insert(s, element);
    s.push(val);
    return;
}
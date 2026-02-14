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
5, 1, 0. We need to insert the temp variable value ie. 2 in the correct position 

05:50

*/
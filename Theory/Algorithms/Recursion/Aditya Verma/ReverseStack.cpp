/*

Input - 
In the input we are provided a stack with elements in it. Lets say the elements present in the input stack are 5, 4, 3, 2, 1 (top to bottom)

Output - 
In the output we need to return the stack in reverse order ie. all the elements in the input stack should be in reverse order in the output stack  ie.
1, 2, 3, 4, 5 (top to bottom)

Constraint - We cannot use any extra space to reverse the stack ie. we cannot use a separate stack or a separate array to reverse the stack. 
We can only use the given input stack to reverse it.

We can use recursion here to reverse the stack.

Recursion will use extra space of its own ie. it will require extra space for the recursive call stack of its own, but the problem will be solved in O(1)
space complexity as we are not using any extra space to reverse the stack.

1. Hypothesis - 
We have a method that will reverse the input stack and return the reversed stack.
Lets say the input stack that we want to reverse is 5, 4, 3, 2, 1 (top to bottom) , then when we call the method to reverse the stack, 
it will return the reversed stack 1, 2, 3, 4, 5 (top to bottom)

Now in hypothesis we will make sure that the reverse method works for smaller inputs as well.
In order to make the input stack smaller , we will pop the top element of the stack & then call the reverse method on the remaining smaller stack.

We will store the top most element from the input stack in a variable & then pop the top element from the input stack to make the input stack smaller. 
Then we will call the reverse method on the smaller input  ie. 4, 3, 2, 1 (top to bottom) to reverse it.
This reverse method will return the reversed stack 1, 2, 3, 4 (top to bottom) 

2. Induction -
In the induction step, we will push the top most element that we stored in the variable (which is 5) to the bottom of the reversed stack 1, 2, 3, 4 (top to bottom) 
to get the final reversed stack 1, 2, 3, 4, 5 (top to bottom)

Now in order to insert the value 5 that we removed from the input stack in order to make the input stack smaller, back into the sorted stack 1, 2, 3, 4 (top to bottom) , 
we will use another recursive method that will insert the value 5 at the bottom of the reversed stack 1, 2, 3, 4 (top to bottom)

In order to insert the value 5 at the bottom of the reversed stack 1, 2, 3, 4 (top to bottom) , we will need to pop all the elements from the reversed stack 1, 2, 3, 4 (top to bottom)
to make the reversed stack empty, then we will push the value 5 to the empty reversed stack & then we will push all the popped elements back to the reversed stack 1, 2, 3, 4 (top to bottom) 
to get the final reversed stack 1, 2, 3, 4, 5 (top to bottom)

So we are provided with an input stack 1, 2, 3, 4 (top to bottom) & the value to be inserted at the bottom of the reversed stack ie. 5 is provided as input to this method.
Now the stack returned as output from this method will be the reversed stack 1, 2, 3, 4, 5 (top to bottom)

Again in order to write this method we will first need to design a hypothesis for this method as well.
Lets say we define a method insert() such that it takes the input stack 1, 2, 3, 4 (top to bottom) as the first argument & the value to be inserted at the bottom of the reversed stack ie.
5 as the second argument, then this method will return the reversed stack 1, 2, 3, 4, 5 (top to bottom) as  ie. it will insert the value 5 at the bottom of the input stack.

Now in the hypothesis we will make sure that the insert() method works for smaller inputs as well.
In order to make the input stack smaller , we will first store the top element of the stack in a variable, then pop the top element of the stack & then call the insert() method on the remaining smaller stack. 

We call the insert() method on the smaller input stack passing  2, 3, 4 (top to bottom) as the first argument and value to be inserted ie. 5 as the second argument to insert the value 5 at the bottom of the smaller 
input stack 2, 3, 4 (top to bottom)

This insert() method will insert the value 5 at the bottom of the smaller input stack 2, 3, 4 (top to bottom) to get the stack 2, 3, 4, 5 (top to bottom) as output from the insert() method.
Now in the induction step, we will push the value that we stored in the variable (which is 1) & popped from the stack, to the top of the stack 2, 3, 4, 5 (top to bottom) to get the final stack 1, 2, 3, 4, 5 (top to bottom)

3. Base Condition -
The s


Code - 
We create a method insertStack() that will take the input stack as reference as the first argument & the value to be inserted at the bottom of the stack as the second argument.





7:25
*/
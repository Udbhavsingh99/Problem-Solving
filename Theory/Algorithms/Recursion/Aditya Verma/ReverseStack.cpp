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
The stack is getting smaller with each consecutive recursive call. We will push the value to be inserted ie. the value that we removed in order to make the stack smaller at the bottom of the stack when the stack is empty.
If we had the input stack as 1, 2, 3, 4 (top to bottom) & the value to be inserted at the bottom of the stack is 5, then we'd have to pop the values from the stack  recursively ie. we'd have to pop the values in the stack 
one by one to make the stack empty (making the input stack smaller with each consecutive recursive call) & then we will push the value 5 to the empty stack to get the stack 5 (top to bottom) as output from the insert() method.

Hence the base condition for the insert() method will be when the stack is empty, then we will push the value to be inserted at the bottom of the stack to the empty stack.

Code - 
We create a method insertStack() that will take the input stack as reference as the first argument & the value to be inserted at the bottom of the stack as the second argument.
We check for the base condition of the insert() method ie. if the stack is empty, then we will push the value to be inserted at the bottom of the stack to the empty stack & return from the method.

If the stack is not empty, then we will store the top element of the stack in a variable, then pop the top element of the stack to make the stack smaller & then call the insert() method on this.
Now we will have to insert the value 5 in a smaller stack with the top most element removed hence we will call the insert() method on the smaller stack passing the smaller stack as the first argument & the value to be inserted 
as the second argument to insert the value 5 at the bottom of the smaller stack.

Earlier we called the insert() method on the complete stack ie. 1, 2, 3, 4 (top to bottom) to insert the value 5 at the bottom of the complete stack, now we are calling the insert() method on the smaller stack ie. 2, 3, 4 (top to bottom)
to insert the value 5 at the bottom of the smaller stack. This will return the stack 2, 3, 4, 5 (top to bottom) as output from the insert() method.

So the initial input stack had values 1, 2, 3, 4 (top to bottom) & the value to be inserted at the bottom of the stack was 5, we stored the top most element of the input stack  in a temp variable which is 1 & then we popped the top element
of the input stack to make the input stack smaller & then we called the insert() method on the smaller stack ie. 2, 3, 4 (top to bottom) to insert the value 5 at the bottom of the smaller stack. 
This will return the stack 2, 3, 4, 5 (top to bottom) as output from the insert() method. 

Now we just have to insert the 1 that we stored in the temp variable back to the top of the stack 2, 3, 4, 5 (top to bottom) to get the final stack 1, 2, 3, 4, 5 (top to bottom) as output from the insert() method.
So we push this 1 back on the stack.

Now our hypothesis is ready. 
The original problem stated that we want to reverse the input stack. If we are given input stack 1, 2, 3, 4, 5 (top to bottom) & we pass it to the reverse() method, then this method will return the reversed stack 5, 4, 3, 2, 1 (top to bottom)
as output from the reverse() method.
So we store the top most element in the input stack ie. 1 in a temp variable , then we pass the remaining stack to the reverse method ie. we pass 2, 3, 4, 5 (top to bottom) to the reverse() method. The reverse() method will then return use the 
reversed stack ie. 5, 4, 3, 2 (top to bottom) 

Now we need to insert the top most element that we removed & stored in variable temp , back at the bottom of the stack returned by call to reverse() method ie. 5, 4, 3, 2 (top to bottom) ,  we do this using the insert() method. 

We need to find out & deciede the base condition for the reverse() method. 
If our input stack is empty, then we don't have to reverse anything. We can use a null check in the main() method itself. 
If we get an empty input stack ie. input stack with no values , then in that scenario we check the size of the input stack & if its 0 ie. empty , then we return the stack as it is.

If we are given input stack as 1, 2, 3 (top to bottom) then the reverse() method will reverse the order of the stack & return us 3, 2, 1 (top to bottom)
Now if we store the top element in a temp variable & pop it from the input stack ie. we store the value 1 in a temp variable & pop it from the stack, in order to make the input stack smaller , then we pass the smaller stack ie. 2, 3 (top to bottom) 
to the reverse method which returns us the reversed stack ie. 3, 2 (top to bottom)
Now if we again store the top element of the smaller stack in a temp variable & pop it from the smaller stack ie. we store the value 2 in a temp variable & pop it from the stack, in order to make the smaller stack even smaller , then we pass the even smaller stack ie. 3 (top to bottom)
to the reverse method which returns us the reversed stack ie. 3 (top to bottom)
This is because a single element stack is increasing, decreasing , sorted & reversed at the same time.

So, now we have the base condition for the reverse() method as well. The base condition for the reverse() method will be when the input stack has only one element, then we will return the stack as it is because a single element stack is increasing, decreasing , sorted & reversed at the 
same time. 

Code -


12:40
*/
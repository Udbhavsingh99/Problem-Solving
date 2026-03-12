/*
We are given an input stack with values 5, 4, 3, 2, 1 (top to bottom). We need to pop the values from the stack & print the values , but we need to 
remove the middle element from the stack. The middle element in this case is 3 , so the output should be 5, 4, 2, 1 (top to bottom).

If the number of elements/values in the stack is odd then the middle element is  (n+1)/2 th element from the top of the stack.
If the number of elements/values in the stack is even then the middle element is (n/2) th element from the top of the stack. 

Because , lets say we have odd number of elements in the stack , lets say 5 & the elements are -

1 ,2, 3, 4, 5 

Then the middle element is 3 , which is (5+1)/2 = 6/2 = 3rd element from the top of the stack.

If we have even number of elements in the stack , lets say 6 & the elements are - 

1 ,2, 3, 4, 5, 6

Then the middle element is 3 , which is (6/2) = 3rd element from the top of the stack.

But we can instead use a generic formula to find the middle element in the stack, irrespective of whether the number of elements in the
stack is odd or even. The formula is - 

n/2 + 1

So if the number of elements in the stack is odd , lets say 5 then the middle element is 5/2 + 1 = 2 + 1 = 3rd element from the top of the stack.
In our example that would be the element 3.
If the number of elements in the stack is even , lets say 6 then the middle element is 6/2 + 1 = 3 + 1 = 4th element from the top of the stack.
In our example that would be the element 4.

So we are given an input stack & from this stack we need to delete the middle element. The middle element is given by the formula

k = n/2 + 1

Where n is the number of elements in the stack & k is the position of the middle element from the top of the stack.

In the given example the input stack has 5 elements , so n = 5 & k = 5/2 + 1 = 2 + 1 = 3. So the middle element is the 3rd element from the top of the stack which is the element 3. 
We need to delete this element from the stack & print the remaining elements in the stack ie. 5, 4, 2, 1 (top to bottom).

When we approach a recursion problem , first we try to think about decision making ie. we try to take decisions. In case we are unable to determine the 
decision we want to take , then we try to make the size of the input smaller & then we try to solve the problem for the smaller input.

In this question we are unable to determine the decision we want to take , so we will try to make the size of the input smaller & then we will try to solve the problem for the smaller input.

Whenever we think in terms of taking a decision , then we design a recursive tree all the way to the leaf node.
Whenever we think in terms of making the size of the input smaller , then we only think about making the input smaller till the next step , not beyond that.

If we think in terms of making the input smaller , then we need to design a recursive solution. While in the case of decision making we need to design a recursive tree.

When we design a recursive solution in order to make the input smaller , then it has 3 parts - the base condition, hypothesis & the induction step.

We'll start with the hypothesis. In hypothesis we design the main functioning/operation of the method ie. how the method operates. 
Based on how the method operates ie. the hypothesis , we will design the base condition & the induction step.

Lets say we have an input stack with elements 5, 4, 3, 2, 1 (top to bottom) & we need to delete the middle element from this stack. The middle element is the 3rd element from the top of the stack which is the element 3.
We pass this input stack to the solve() method as the first argument. Alongwith this we also pass the middle element ie. 3 in this case as the second argument to the solve method.

The solve() method will first remove the 3rd element from top in the input stack ie. 3 & then it will return us a stack with the remaining elements ie. 5, 4, 2, 1 (top to bottom).

Now in the hypothesis we will use smaller input for the solve() method.
In order to make the input smaller ,  we will store the top most element from the input stack in a variable & then we will pop the top most element from the input stack. This way we have made the input smaller by 1 element.
Now we will call the solve() method recursively on the smaller input stack ie. 4, 3, 2, 1(top to bottom). 
Now when the stack was full ie. the stack had values 5, 4, 3, 2, 1 (top to bottom) , then the middle element that we want to delete was 3 which was the third element from the top of the stack. Hence we passed the middle element ie. 3 position from the top of the stack as the second argument to the solve() method, which in this case is 3.
Now when we have made the input smaller by popping the top most element from the stack ie. the stack has values 4, 3, 2, 1 (top to bottom), then the middle element that we want to delete ie. 3 is now the second element from the top of the stack. Hence we pass the 3 position from the top of the stack as the second argument, which in this case is 2, to the solve() method
in the recursive call.
So if the position of the middle element from the top of the stack is k in the original input stack, then after we have made the input smaller by popping the top most element from the stack, the position of the middle element from the top of the stack will be k-1 in the smaller input stack. Hence we pass k-1 as the second argument to the solve() method in the recursive call.
With each recursive call to the solve() method on the smaller input stack, we will keep on popping the top most element from the stack & making the input smaller until we reach the base condition. As we make the input smaller , the position of the middle element from the top of the stack will keep on decreasing by 1 with each recursive call to the solve() method on the smaller input stack. 
Hence we will keep on passing k-1 as the second argument to the solve() method in the recursive call.

This recursive call to the solve() method on the smaller input stack will return us a stack with the middle element removed from the smaller input stack. Hence the recursive call to the solve() method with smaller input stack ie. 4, 3, 2, 1 (top to bottom) will return us a stack with the middle element removed from this smaller input stack. 
The middle element in this smaller input stack is the second element from the top of the stack which is the element 3. Hence the recursive call to the solve() method on this smaller input stack will return us a stack with the element 3 removed from it ie. 4, 2, 1 (top to bottom).



7:24


*/
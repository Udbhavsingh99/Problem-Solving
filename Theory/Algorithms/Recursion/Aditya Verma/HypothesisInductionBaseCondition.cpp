/*
New method - Base Condition -> Hypothesis -> Induction

Basically this is how recursion works. 
Our focus should be on decision making & not on making the input smaller. Input automatically becomes smaller.

Sometimes the decision making process becomes a bit difficult, hence thinking in order to make the input smaller helps to make the task/process easier.

1.Methods to think for a recursive problem : 
One method is creation of recursive tree. But recursive tree is not the only method , there are other methods too , which are a lot more efficient as well.
All these methods are a variation on a simple method. Sometimes its easier to use a particular method to think for a problem.

2. Why making input smaller is popular/important
3. Print 1 to n using recursion

1.Methods to think for a recursive problem : 
There are 4 approaches to approach a recursive problem - 
1>The first method is Recursive Tree Method. We use input/output method to create a recursive tree. We make/use the recursive tree when we are able to understand the 
  decisions that we want to make at each step.
2>In some situations we cannot understand the decisions that we want to make at each step. We are only able to understand that we need to decrease the size of the input
  ie . make the input smaller , then in this scenario we can make use of the Base Condition -> Hypothesis -> Induction method.
3>Choice diagram method 
4>

We have already learnt the first method - Recursive Tree Method in the previous videos. We now come to the second method - Base Condition -> Hypothesis -> Induction method.
In this second method for any given recursive problem we design a hypothesis.

Lets say we have a function solve() that takes an input n. We define that this method/function solve(n) is a recursive function & prints values from 1 to n.
Basically we define what the recursive function returns.

If we define that our function solve(n) prints values from 1 to n, then this function solve(n) will print the values from 1 to n.

To make recursion work as expected , we need to write some code in the induction step, so that the hypothesis that we designed ie. when the solve(n) method gets called, it 
prints/returns values from 1 to n,  is true. 

Base Condition - 
Base condition can be the smallest valid input or the largest invalid input.

Print 1 to n -
So using the input output method we can say that : 
For input  = n , the output = 1 2 3 ... n
For eg. If input is 7 , then output will be 1 2 3 4 5 6 7

For the recursive problem print 1 to n ,  we will define our hypothesis 

6:50


*/
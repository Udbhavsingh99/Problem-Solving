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

For the recursive problem print 1 to n ,  we will define/design our hypothesis 

The IBH method ie. Induction , Base condition , Hypothesis method is very useful for questions related to linked list or tree

Step 1 - Design a Hypothesis
Lets say we create a function named print() & pass it value 7 as argument ie. print(7) , we get this value 7 from the input.
Now we say that this print(7) method will print values from 1 to 7 ie. 1 2 3 4 5 6 7

Now we will call the print() method for a smaller input lets say if input 7 is n ie. n = 7 , then we will call the print() method for input 
n-1 ie. 6 which means we call print(6) method.
We make a call to print(n-1) ie. print(6) method.

The method print(n) prints all the numbers/values from 1 to n, hence the method print(n-1) will print all the values from 1 to n-1.
In our case n is 7 & n-1 is 6 , hence the method print(6) will print all the values from 1 to 6 ie. 1 2 3 4 5 6

So first we designed the hypothesis, we defined what the method print(n) does ie. it prints values from 1 to n. In our case n is 7 , hence print(n)
ie. print(7) will print values from 1 to 7.
Then we ran the same function for a smaller input ie. print(n-1) ie. print(6) in our case, hence print(n-1) ie. print(6) will print values from 1 to 6.
As print(n) ie. print(7) has to print values from 1 to 7, after print(n-1) ie. print(6) prints values from 1 to 6.

Step 2 - Induction
Now we know that if we call print(n-1) method ie. print(6) method , it will print values from 1 to 6.
In the print(n-1) ie. output of print(n-1) method , which in our case is print(6) method which prints values from 1 to 6 , the only number/value that is left to print 
is n ie. 7 in our case.

If we want to write the method print(n) which will print the values from 1 to n , then we will first call the method print(n-1) which will print values from 1 to n-1. 

Now we will get values from 1 to n-1 & print(n-1) method will provide us the values from 1 to n-1. After 1 to n-1 we want to print n as well. So we do ,

print(n-1); // this will print values from 1 to n-1
cout << n << " "; // this will print n

Step 3 - Base Condition
The base condition can be the smallest valid input or the largest invalid input.
Now as we want to print values from 1 to n , the smallest valid input is 1. 
So our base condition will be when n = 1 , we will simply print 1. In that case, 
if(n == 1){
    return 1;
}

This is our base condition. Smallest valid input ie. n = 1 is the base condition.
Had we taken n = 0 as base condition ie. largest invalid input, then we would have returned the value 0 but we want to print values from 1 to n , hence we take n = 1 as base condition.
Which is why we take base condition as n = 1.

11:57

*/
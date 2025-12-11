/*
When we define a function in the hypothesis stage ie. what the function is supposed to do, then the signature of the function is defined/decided. 
Once the signature of the function is defined/decided , then the function will work as defined in the hypothesis stage.

We try to print N to 1. 

We first tried to print 1 to N , now we will try to print N to 1.
To print values 1 to N , during designing the hypothesis  , we called the print() method & passed it value N & in return it will print 1 to N.
If we run the same print() method with value N-1 ie. print(N-1) , then based on the definition of the method print() , it will print 1 to N-1.

Now we want to print values from N to 1. Then in that case during the hypothesis stage we design the method/function hypothesis ie. the signature of the method. 
This is the first step ie. hypothesis stage.

If we call the print() method with value N ie. print(N) , then based on the definition of the method print() , it will print N to 1.
Now if we call the same print() method with value N-1 ie. print(N-1) , then based on the definition of the method print() , it will print N-1 to 1.

Lets assume that we pass the value of N as 7 to the print() method ie. print(7) , then based on the definition of the method print() , it will print 7 to 1.
Similarly if we pass the value of N-1 as 6 to the print() method ie. print(6) , then based on the definition of the method print() , it will print 6 to 1.

Now in the induction stage ,  we know that when we call the print() method with value N ie. 7, then it will print values from 7 to 1 
,similarly when we call the print() method with value N-1 ie. 6 , then it will print 6 to 1.

So , we call the print() method with value N-1 ie. print(6) & then just print value N ie. 7 before it.
So we print the value of N ie. 7 first & then call the print() method with value N-1 ie. print(6) , which will print 7 followed by values from 6 to 1.

Now the base condition will be the smallest valid input for which the function is defined , which in this case is 1 as we are going from N to 1.
Then we check that if N == 1 , then we simply print n & then return from the method.

Now the print(n) method will print values from N to 1 ie. N , N-1 , N-2 ... 3 , 2 , 1. For eg. if N = 7 , then it will print 7 6 5 4 3 2 1.
So, print(n-1) method will print values from N-1 to 1 ie. N-1 , N-2 ... 3 , 2 , 1. For eg. if N = 7 then N-1 = 6 , hence it will print 6 5 4 3 2 1.
Now print(n-1) method doesn't print N , hence in the induction step we print N first & then call print(n-1) method.
So if we want to print values from N to 1 , we first print N & then call print(n-1) method ie. if we want to print values from 7 to 1 , we first print 7 
& then call print(6) method which will print values from 6 to 1.

void Print(int n){
    //Base Condition
    if(n == 1){
        cout << 1 << " ";
        return;
    }

    //Induction
    cout << n << " "; // Printing n to complete the hypothesis
    //Hypothesis Step
    Print(n-1); // Hypothesis for smaller input (Basis on which our function/method is designed)
}



4:13

*/

#include<iostream>

using namespace std;

void print(int n){
    //Base Condition
    if(n == 1){
        cout << 1 << " ";
        return;
    }

    //Induction
    cout << n << " "; // Printing n to complete the hypothesis
    //Hypothesis Step
    print(n-1); // Hypothesis for smaller input (Basis on which our function/method is designed)
}

int main(){
    int n;
    cin >> n;

    print(n);

    return 0;
}
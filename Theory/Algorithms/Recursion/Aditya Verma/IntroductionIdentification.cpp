/*
Flow : 
1> Make Input smaller , but why ?
2> Recursion - Decision space 
3> Recursive tree - Soul of Recursion
4> 2 steps to solve any recursion problem

1> Make Input smaller , but why ?
   We don't make input small in recursion. Rather the input becomes/gets smaller on its own ie. we don't deliberately make
   the input small, rather the input gets smaller automatically. 

   Basically we do some other task , but as a consequence of this task our input becomes smaller. 
   So the other task that we do is the primary/main task , the input becoming smaller occurs as a result of the primary task
   & hence is the secondary task.

   In our case the Primary/main task is/are some decisions that we take as a result/side effect of which the input becomes 
   smaller. 

   Eg. Lets say we have a problem & we take some decision D1, then as a result of this decision D1 our initial input for the  
   problem becomes smaller. 

   Decision making  --------------------------------> I/P becoming smaller
    (Primary Task)           as a consequence           (Secondary Task)

   Example - 
          Big Problem  ------------------------------> Small Problem  -------------------------------> Smaller Problem
         (large input)      Take decision D1           (small input)            Take decision D2       (smaller input)

   Basically, we have a big problem ie. a big input , but we don't aim to make/transform this big problem/input smaller problem. 

   Big Problem ---------> Smaller Problem         This is not our aim
   (Big input)             (Small input)
   
   What we actually aim to do is to take a decision. Lets say we take a decision D1. As a result of this decision D1, the problem
   automatically becomes smaller. If we take a decision D2, then as a result of this decision D2, the problem automatically becomes
   further smaller. So we are taking decisions & based on the decisions that we are taking the problems/inputs are becoming smaller on their 
   own/automatically. 
   So we are not deliberately decreasing the size of the input, rather the input size is decreasing automatically as we keep on making 
   decisions.
   
2> Recursion - Decision Space
   We use recursion when we want to take some decision/ we want some decision space. This basically works as an identification. So basically , 
   in recursion we take some decisions. If we are provided some problem statement & we want to identify whether its recursive or not, then in that
   case in the problems we will be provided with choices & decisions. In the problem statement we'd be provided with some choices & based on these 
   choices that are provided to us, we can take some decisions. 

   We take decisions & this is our primary task/goal. On the basis of this decision , our initial input gets transformed into
   smaller input automatically & this is our secondary task/goal. Our main focus is to take decisions, the input getting smaller is automatic
   & is a byproduct of the decision that we made/make & hence shouldn't be our main focus. 
   If we want to represent some decision space, then recursion is a good choice to solve that problem.

3> Recursive tree - Soul of Recursion
   Example : Subset problem 
   In this problem we are provided a string & we need to represent all the subsets possible from the provided string. Lets say the string that we have
   is abc , then the possible subsets from this string abc are 
   " ", "a", "b", "c", "ab", "bc", "ac" , "abc"
   so, we have subsets of length 0 , 1 , 2 & 3. 

   From the string abc that is provided to us. All the subsets possible from this string "abc" provided to us are , 
               a        b        c
   " "         N        N        N
    a          Y        N        N
    b          N        Y        N
    c          N        N        Y
   ab          Y        Y        N
   bc          N        Y        Y
   ac          Y        N        Y
   abc         Y        Y        Y

   Now for any recursive problem we are given choices & we need to take some decisions ie. choice + decision. 
   Now we needed to build a null subset ie. empty string.
   For choice , we have 2 choices for each character in the string abc ie. we want to create subsets of this string abc 
   & so we have the choice of including the character a or not including the character a , similary including the  
   character b or not including the character b & including the character c or not including the character c. 

                              a        b         c
                            /  \     /  \       / \
                           Y   N    Y   N      Y  N

   The decisions that we take on these choices ie. to include or not to include a particular character from the string, 
   are what leads to the creation of subset. 
 

   

   Decision making should be our primary goal & smaller input is an automatic consequence of this primary goal. 
         
2> Recursion - Decision space
   We use recursion when we want a decision space. This will work as an identification. 

    */

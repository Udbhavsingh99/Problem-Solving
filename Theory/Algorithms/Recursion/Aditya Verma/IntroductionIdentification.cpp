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



         
    */
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

Decision making should be our primary goal & smaller input is an automatic consequence of this primary goal.

   The decisions that we take on these choices ie. to include or not to include a particular character from the string, 
   are what leads to the creation of subset. 
   For empty string ie. " " , for each character in the string abc , we have the choice to either include or not include the 
   character a , include or not include the character b & include or not include the character c. So the choices are :
   a - Y or N ie. to include or not to include the character a
   b - Y or N ie. to include or not to include the character b
   c - Y or N ie. to include or not to include the character c

   the decisions that we took to get empty string ie. " " are :
   a - N ie. did not include the character a
   b - N ie. did not include the character b
   c - N ie. did not include the character c

   the decisions that we took to get the string a are :
   a - Y ie. we do include the character a
   b - N ie. did not include the character b
   c - N ie. did not include the character c

   the decisions that we took to get the string b are :
   a - N ie. did not include the character a
   b - Y ie. we do include the character b
   c - N ie. did not include the character 
   
   the decisions that we took to get the string c are :
   a - N ie. did not include the character a
   b - N ie. did not include the character b
   c - Y ie. we do include the character c
   
   the decisions that we took to get the string ab are :
   a - Y ie. we do include the character a
   b - Y ie. we do include the character b
   c - N ie. did not include the character c

   the decisions that we took to get the string bc are :
   a - N ie. did not include the character a
   b - Y ie. we do include the character b
   c - Y ie. we do include the character c

   the decisions that we took to get the string ac are :
   a - Y ie. we do include the character a
   b - N ie. did not include the character b
   c - Y ie. we do include the character c

   the decisions that we took to get the string abc are :
   a - Y ie. we do include the character a
   b - Y ie. we do include the character b
   c - Y ie. we do include the character c

   So we have a choice to whether include a particular character or not for each string , but we took decisions at each point to include a particular character
   or not in order to  create a particular string. For example : For string bc ,
   The choices that we had for string bc were - 
   1. Include character a or not include character a
   2. Include character b or not include character b
   3. Include character c or not include character c
   Now based on the choices presented above , we can take the decisions to either include or not include a particular character in order to create the desired string.
   For example the decisions that we took on the above choices in order to create the string bc are -
   1. Did not include the character a
   2. Include the character b
   3. Include the character c
   the decisions above will lead us to create the string bc which is the desired string.
   As we can see here our input is decreasing in size/getting small , this decrease in size is occurring as a result of the decisions that we take.
   The initial input string is abc & the desired output string is bc , so we took the decision to not include the character a , this decreased the size of the string 
   to bc, then we again took the decision to include the character b , now only string/character c remains & then we took the decision to include the character c , so as we take each decision , the input 
   size is decreasing. The final string is the desired string ie. bc.

   Input : abc -> Decision : not take a -> bc -> Decision : take b -> bc -> Decision : take c -> Output : bc

   So in recursion we are provided some choices & based on the provided choices we take some decisions.
   Whenever our problem has something related to choices & decisions , then in that case we will use recursion.

   The decrease in size of input is secondary , we need to focus on the primary motive that is to take a decision

   Recursive Tree : 
   Lets say we have a string ab & we need to find the subset for this string ab.
   In order to get the subset for this string ab , 
   We don't choose anything ie. we don't choose any character then we get " " 
   Then we choose the character "a" out of the sting ab & hence we get "a"
   Then we choose the character "b" out of the string ab & hence we get "b"
   Then we choose both the characters "a" & "b" & hence we get "ab"

   So , all of our subsets are -
   Subsets                          Decisions
   " "                               a❌  b❌
   "a"                               a✅  b❌  
   "b"                               a❌  b✅
   "ab"                              a✅  b✅

   So these are  the decisions that we took , now we want the representation for these decisions so that we can represent that properly. So 
   the method that we can use for this is the recursive tree. 

   In order to create a recursive tree we can use the input-output method. 
   So in this method we are already provided with an input & we take an output. 
   We first initialize the output with some value & we are already provided with some input. 
   From this pair of output & input , we make output1 & the input is smaller & we make output2 & the input is smaller.
   Then we do the same operation for output 1 & the smaller input hence we get , output1` & further smaller input` & then we get output2` & further
   smaller input`
   Similary we do for the output2 & smaller input sa well hence we get , output1` & further smaller input` & then we get output2` & further smaller 
   input `.
   This structure is followed for all recursive trees. 

                                                         O/P I/P
                                                /                    \ 
                                       OP1 Smaller IP                OP2 Smaller IP
                                      /            \              /                 \   
                        OP1` Smaller IP`     OP2` Smaller IP`  OP1` Smaller IP`     OP2` Smaller IP`
     
   We initialize the output to any value, then using the already provided input we create output1 & output2 as the left & 
   right childs of the root node respectively. The input transforms into smaller input as well. 
   We then further create 2 childs for the left child of the root node ie. output1 , so we create a further smaller output from
   this output1 which is output1` & output2` , the inputs in both the cases becomes smaller as well. 
   We also create 2 childs for the right child of the root node ie. output2 , so we create a further smaller output from 
   this output2 which is output1` & output2` , the inputs in both the cases becomes smaller as well.

   Example -
   Lets say we are provided string "ab" as input. Then we take some decisions on this input string ab , the decisions that we took
   are as follows : 
   " "                               a❌  b❌
   "a"                               a✅  b❌  
   "b"                               a❌  b✅
   "ab"                              a✅  b✅

   We took decisions that for the null string , we don't choose any string ie. neither 'a' nor 'b' & hence this gives us a null string.
   For 'a' we took the decision that we accept symbol 'a' but reject symbol 'b'. For 'b' we took the decision that we accept symbol 'b' 
   but reject symbol 'a'. For 'ab' we took the decision that we accept both strings 'a' & 'b'.

   We will now represent this using a recursive tree. Lets say we have a method named as inputOutput() method. 
   Now we are provided with the input to our inputOutput() method as string 'ab' .
   So for given input 'ab' we initialize the output to an empty string ie. ' ' .
   Now when we come to the first character of the string 'ab' ie. 'a' we have 2 choices, either we can select this character 'a' or we 
   can reject this character 'a'

   No of branches in recursive tree tells us/denotes us the number of choices. So lets say the left branch tells us that we don't
   select character 'a' from input string 'ab' & the right branch tells us that we select character 'a' from the input string 'ab'.

   Now if we don't select character 'a' from the input string 'ab' then we get output as output1 & the input gets smaller, in this case we
   traverse the left branch & if we do select character 'a' from the input string 'ab' then we get output as output2 & the input gets smaller.
   In this case we traverse the right branch.

   Now both of these left & right branches are choices that we can take. When we go down/traverse a particular branch then in that case we have 
   made a decision. 

   Set of output & input value is the node , the branches represent the choices (ie. the number of branches represent the number of choices) that are available to us 
   & when we traverse a particular branch ie. we go down a particular branch ,then in that case we have made a decision.
   
   When we traverse a single branch ie. traverse a single level down a branch then we call it as a decision.
   For example if we traverse down the left branch of the root branch (which consists of OP " " & IP "ab") & we reach the output OP1 in that case then we have taken a decision which in this case is 
   not including character 'a' from the input string 'ab'. So initially output was empty & as we decided to not include character "a" from input string 'ab' , 
   the output remains empty & the input becomes smaller ie. 'b'.

   Our focus is on taking decisions , the input becoming smaller is automatic & is a byproduct of the decision that we made/make & hence shouldn't be our main focus. 
   We took a decision to not include character 'a' from input string 'ab' , this decreased the size of the input string to 'b'. 

   Now when we traverse down the right branch of the root branch (which consists of OP " " & IP "ab") & we reach the output OP2 in that case then we have taken a decision which in this case is 
   including character 'a' from the input string 'ab'. So initially output was empty & as we decided to include character "a" from input string 'ab' , 
   the output becomes 'a' & the input becomes smaller ie. 'b'. 

   Once we have taken the decision to include character 'a' from input string 'ab' , then we remove the character 'a' from the input string 'ab" , hence the input string becomes smaller ie. 'b'.

   Now we create 2 childs for both the left & right childs of the root node each.
   We first create the left & right childs for the left child of the root node ie. output1 which is " " & smaller input 'b'. Now we again have 2 choices ie. either to include the character 'b' 
   or to not include the character 'b' from the input string 'b'.

   A single set/pair of output & input is a node in the recursive tree. Each of these nodes have 2 branches ie. choices. When we traverse a particular branch ie. go down a particular branch (choice) , 
   then in that case we have made a decision. This decision will result in a new output & a smaller input. Hence each branch will have a pair of output & smaller input.

   Now for the left child of the node with output1 ie. " " & smaller input 'b', initially the output was " " ie. empty string , we take the decision to not include the character 'b' from the input string 'b' ,
   hence the output remains " " ie. empty string & the input becomes smaller ie. " " ie. empty string. Both the output & input are empty strings ie." " .
   For the right child of the node with output1 ie. " " & smaller input 'b', initially the output was " " ie. empty string , we take the decision to include the character 'b' from the input string 'b' , 
   hence the output becomes "b"  & the input becomes smaller ie. " " ie. empty string. The output is "b" & the input is an empty string ie." " .

   Now for the right child of the root node ie. output2 which is "a" & smaller input 'b'. Now we again have 2 choices ie. either to include the character 'b' or to not include the character 'b' from the input string 'b'.
   Now for the left child of the node with output2 ie. "a" & smaller input 'b', initially the output was "a" , we take the decision to not include the character 'b' from the input string 'b' , 
   hence the output remains "a"  & the input becomes smaller ie. " " ie. empty string. The output is "a" & the input is an empty string ie." " .
   For the right child of the node with output2 ie. "a" & smaller input 'b', initially the output was "a" , we take the decision to include the character 'b' from the input string 'b' ,
   hence the output becomes "ab"  & the input becomes smaller ie. " " ie. empty string. The output is "ab" & the input is an empty string ie." " .

   We get the following outputs in the leaf nodes of the recursive tree - " ", "b", "a", "ab" which are the desired subsets of the input string 'ab'.

                                      " "  ab
                                   /          \
                          " "   b               "a"   b
                         /    \                /     \
                   " "  ""     "b" ""     "a" ""     "ab" ""
         
We get the required subsets in the leaf nodes of the recursive tree. We get " ", "b", "a", "ab" in the leaf nodes of the recursive tree which are the required subsets of the input string 'ab' 
when the input in the leaf nodes becomes empty string ie. "".


24:10
   */

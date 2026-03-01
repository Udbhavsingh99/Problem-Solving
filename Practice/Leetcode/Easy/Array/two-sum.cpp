
//Solution for https://leetcode.com/problems/two-sum/

//Brute Force Solution (Personally submitted)
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res; 
        for(int i = 0 ; i<nums.size(); i++)
        {
            for(int j = i+1 ; j<nums.size(); j++)
            {
                if(i != j)
                {
                    if(nums[i]+nums[j] == target)
                    {   
                        res.push_back(i);
                        res.push_back(j);    
                    }
                    else
                    {
                        continue;
                    }
                    
                }
                else
                {
                    continue;;
                }
            }
        }
        return res;
    }
    
};

/*
Optimized approach 1 - 
Two-pass Hash Table

Intuition
To improve our runtime complexity, we need a more efficient way to check if the complement exists in the array. If the complement exists, we need to get its index. 
What is the best way to maintain a mapping of each element in the array to its index? A hash table.
We can reduce the lookup time from O(n) to O(1) by trading space for speed. A hash table is well suited for this purpose because it supports fast lookup in near constant time. 
I say "near" because if a collision occurred, a lookup could degenerate to O(n) time. However, lookup in a hash table should be amortized O(1) time as long as the hash function was chosen carefully.

Algorithm

A simple implementation uses two iterations. 
In the first iteration, we add each element's value as a key and its index as a value to the hash table. 
Then, in the second iteration, we check if each element's complement (target−nums[i]) exists in the hash table. 
If it does exist, we return current element's index and its complement's index. 
Beware that the complement must not be nums[i] itself!

*/

class SolutionOpt1 {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end() && hash[complement] != i) {
                return {i, hash[complement]};
            }
        }
        // If no valid pair is found, return an empty vector
        return {};
    }
};

/*
Optimized approach 2 -

One-pass Hash Table

It turns out we can do it in one-pass. While we are iterating and inserting elements into the hash table, we also look back to check if current element's complement already exists in the hash table. 
If it exists, we have found a solution and return the indices immediately.
*/

class SolutionOpt2 {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end()) {
                return {hash[complement], i};
            }
            hash[nums[i]] = i;
        }
        // Return an empty vector if no solution is found
        return {};
    }
};
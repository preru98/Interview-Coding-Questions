/*
______________________________________________________________________________________________
Question From : Binary Search Platform { Mathematics }

Detect the Only Duplicate in a List
You are given a list nums of length n + 1 picked from the range 1, 2, ..., n. By the pigeonhole principle, there must be a duplicate. Find and return it. There is guaranteed to be exactly one duplicate.

Bonus: Can you do this in O(n) time and O(1) space? 
______________________________________________________________________________________________

*/

  int solve(vector<int>& nums) {
    int n = nums.size()-1;
    int sum = accumulate(nums.begin(), nums.end(),0);
    int sum_original = (n*(n+1))/2;
    return sum-sum_original;
   }


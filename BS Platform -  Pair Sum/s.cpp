/*
______________________________________________________________________________________________
Question From : Binary Search Platform { Mathematics | DSA }

Pair Sums
Given a list of positive integers nums, return the number of valid pairs of indices (i, j), with i < j, such that A[i] + A[j] is an odd number.

Constraints

n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [3, 2, 4]
Output
2

______________________________________________________________________________________________

*/

int solve(vector<int>& nums) {
    int n = nums.size(), odd = 0;
    if (n < 2) {
        return 0;
    }
    for (int i : nums) {
        if (i % 2) {
            odd++;
        }
    }
    return odd * (n - odd);
}

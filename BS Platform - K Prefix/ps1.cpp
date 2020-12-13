/*
______________________________________________________________________________________________
Question From : Binary Search Platform { Array }

Given a list of integers nums and an integer k, return the maximum possible i where nums[0] + nums[1] + ...  + nums[i] ≤ k. Return -1 if no valid i exists.

Constraints

n ≤ 1,000 where n is the length of nums.
-1,000 ≤ nums[i] ≤ 1,000
k ≤ 10^9

______________________________________________________________________________________________

*/
int solve(vector<int>& nums, int k) {
    if (nums.size() == 1 && nums[0] <= k) {
        return 0;
    }

    for (int i = 1; i < nums.size(); i++) {
        nums[i] += nums[i - 1];
    }
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] <= k) {
            return i;
        }
    }
    return -1;
}

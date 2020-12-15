/*
______________________________________________________________________________________________
Question From : Binary Search Platform {Array | DS }

Given a list of integers nums, return the largest integer k where k and -k both exist in nums (they can be the same integer). If there's no such integer, return -1.

Constraints

n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [-4, 1, 8, -5, 4, -8]
Output
8

______________________________________________________________________________________________

*/

int solve(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
        return -1;
    }
    int max = *max_element(nums.begin(), nums.end());
    int min = *min_element(nums.begin(), nums.end());
    if (max < 0) {
        return -1;
    }
    int size_h = max - min + 1;

    int* h = new int[size_h];

    for (int i = 0; i < size_h; i++) {
        h[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        h[nums[i] - min]++;
    }

    for (int i = size_h - 1, j = 0; i >= 0; i--, j++) {
        if (h[i] && (-i - 2 * min) >= 0 && h[(-i - 2 * min)]) {
            return i + min;
        }
    }
    return -1;
}


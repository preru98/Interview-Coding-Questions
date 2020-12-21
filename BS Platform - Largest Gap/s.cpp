/*
______________________________________________________________________________________________
Question From : Binary Search Platform {Array | DS | Sorting | hashing }

Largest Gap

Given a list of integers nums, return the largest difference of two consecutive integers in the sorted version of nums.

Constraints

n ≤ 100,000 where n is the length of nums
Example 1
Input
nums = [4, 1, 2, 8, 9, 10]
Output
4
Explanation
The largest gap is between 4 and 8.

______________________________________________________________________________________________

*/

int solve(vector<int>& nums) {
    int n = nums.size();
    int max = *max_element(nums.begin(), nums.end());
    int min = *min_element(nums.begin(), nums.end());

    int s = max - min + 1;
    int* h = new int[s];
    for (int i = 0; i < s; i++) {
        h[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        h[nums[i] - min]++;
    }
    nums.clear();
    for (int i = 0; i < s; i++) {
        while (h[i]) {
            nums.push_back(i + min);
            h[i]--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << nums[i];
    }
    int m = INT_MIN, d;
    for (int i = 1; i < n; i++) {
        d = nums[i] - nums[i - 1];
        if (d > m) {
            m = d;
        }
    }
    return m;
}



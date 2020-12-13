/*
______________________________________________________________________________________________
Question From : Binary Search Platform {Array | DS }
Implement a data structure with the following methods:

RangeSum(int[] nums) constructs a new instance with the given nums.
total(int i, int j) returns the sum of integers from nums between [i, j). That is, nums[i] + nums[i + 1] + ... + nums[j - 1].
Constraints

n ≤ 100,000 where n is the length of nums
k ≤ 100,000 where k is the number of calls to total
______________________________________________________________________________________________

*/
class RangeSum {
    public:
    vector<int> ds;
    RangeSum(vector<int>& nums) {
        ds = nums;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            ds[i] += ds[i - 1];
        }
    }
    int total(int i, int j) {
        return (ds[j - 1] - ds[i - 1]);
    }
};
/*
______________________________________________________________________________________________
Question From : Binary Search Platform { Array }

You are given a list of integers nums. Return the minimum value we can append to the beginning of nums such that prefix sums of the resulting list contains numbers that are all greater than 0.

Constraints

n ≤ 100,000 where n is the length of nums

______________________________________________________________________________________________

*/

int solve(vector<int>& nums) {
    int val=1;
    int n=nums.size();
    
    if(n==0){
        return 1;
    }
    
    if(n==1 && nums[0]<=0){
        return (1-nums[0]);
    }
    
    for(int i=1;i<n;i++){
        nums[i]+=nums[i-1];
    }
    int min=0;
    for(int i=0;i<n;i++){
        if(nums[i]<0 && nums[i]<min){
            min=nums[i];
            val=(1-nums[i]);
        }
    }
    return val;
}

/*
______________________________________________________________________________________________
Question From : Binary Search Platform { Maths }

Intervals Intersecting at Point
You are given a two-dimensional list of integers intervals and an integer point. Each element contains [start, end] represents an inclusive interval.

Return the number of intervals that are intersecting at point.

Constraints

n ≤ 100,000 where n is the length of intervals
Example 1
Input
intervals = [
    [1, 5],
    [3, 9],
    [4, 8],
    [10, 13]
]
point = 4
Output
3

______________________________________________________________________________________________

*/

//SOLUTION 1

int solve(vector<vector<int>>& intervals, int point) {
    if(intervals.size()==0){
        return 0;
    }
    int max = INT_MIN;
    
    for(int i=0;i<intervals.size();i++){
        if(max<intervals[i][1]){
            max= intervals[i][1];
        }
    }
     int *h  = new int[max+2];
    for(int i=0;i<max+2;i++){
        h[i]=0;
    }
    
   
    for(int i=0;i<intervals.size();i++){
        h[intervals[i][0]]++;
        h[intervals[i][1]+1]--;
    }
    for(int i=0;i<max+2;i++){
        cout<<h[i]<< " | ";
    }
    for(int i=1;i<max+2;i++){
        h[i]+=h[i-1];
    }
    
    return h[point];
}

//SOLUTION 2
int solve(vector<vector<int>>& intervals, int point) {
    int ret = 0;

    for (int i = 0; i < intervals.size(); i++) {
        if (point >= intervals[i][0] && point <= intervals[i][1]) {
            ret++;
        }
    }

    return ret;
}

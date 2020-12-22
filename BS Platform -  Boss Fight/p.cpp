/*
______________________________________________________________________________________________
Question From : Binary Search Platform {Array | DS }

Boss Fight
Question 1 of 4
You are given a list of integers fighters and a two dimensional list bosses. The fighters list contains 1s and 0s with a 1 representing a fighter. Similarly, each bosses list contains 1s and 0s with a 1 representing a boss.

Given that fighters can beat a bosses row if it contains more fighters than bosses, return a new bosses matrix with defeated boss rows removed.

Example 1
Input
fighters = [0, 1, 1]
bosses = [
    [0, 0, 0],
    [0, 0, 1],
    [0, 1, 1],
    [1, 1, 1]
]
Output
[
    [0, 1, 1],
    [1, 1, 1]
]
Explanation
There's 2 fighters so is able to beat [0, 0, 0] and [0, 0, 1] bosses.

______________________________________________________________________________________________

*/
vector<vector<int>> solve(vector<int>& fighters, vector<vector<int>>& bosses) {
    vector<vector<int>> ret;
    int n_f = fighters.size();
    int n_b = bosses.size();
    int count = 0;
    for (int i = 0; i < n_f; i++) {
        if (fighters[i]) {
            count++;
        }
    }
    int r_w_count = 0;
    for (int i = 0; i < n_b; i++) {
        r_w_count = 0;
        for (int j = 0; j < bosses[i].size(); j++) {
            if (bosses[i][j]) {
                r_w_count++;
            }
        }
        if (r_w_count >= count) {
            ret.push_back(bosses[i]);
        }
    }
    return ret;
}

/*
_______________________________________________________________________________________________________
Given a list of lowercase alphabet strings words, return the length of the longest 
contiguous sublist where all words share the same first letter.

Function Only
________________________________________________________________________________________________________
*/

int solve(vector<string>& words) {
    if (words.size() < 2) {
        return words.size();
    }
    char l = words[0][0];
    int max_l = 1, max_c = 1;
    for (int i = 1; i < words.size(); i++) {
        if (words[i][0] == l){
            max_c++;
            if (max_c >= max_l){
                max_l = max_c;
            }
        } 
        else if (words[i][0] != l) {
            max_c = 1;
            l = words[i][0];
        }
    }
    return max_l;
}
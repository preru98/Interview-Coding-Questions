/*
______________________________________________________________________________________________
Question From : Binary Search Platform {Array | DS }

Given an N by N matrix of letters matrix, return whether there are exactly N different letters that appear in the matrix and each letter appears exactly once in each row and exactly once in each column.

matrix = [
    ["a", "b", "c"],
    ["c", "a", "b"],
    ["b", "c", "a"]
]
Output
true
Explanation
There are 3 different letters and each letter appears exactly once in each row and column.

______________________________________________________________________________________________

*/

bool solve(vector<vector<string>>& matrix) {
    int n=matrix.size();

    int* h = new int[26];
    for(int i=0;i<26;i++){
        h[i]=0;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            h[(matrix[i][j])[0]-'a']++;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(h[(matrix[i][j])[0]-'a'] != n){
                return false;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        
        for(int k=0;k<26;k++){
            h[k]=0;
        }
    
        for(int j=0;j<n;j++){
            if(h[(matrix[i][j])[0]-'a']){
                return false;
            }
            h[(matrix[i][j])[0]-'a']++;
        }
    }
    
    for(int i=0;i<n;i++){
        
        for(int k=0;k<26;k++){
            h[k]=0;
        }
    
        for(int j=0;j<n;j++){
            if(h[(matrix[j][i])[0]-'a']){
                return false;
            }
            h[(matrix[j][i])[0]-'a']++;
        }
    }
    return true;
}

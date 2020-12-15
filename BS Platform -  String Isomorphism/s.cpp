/*
______________________________________________________________________________________________
Question From : Binary Search Platform {Array | DS }

Given lowercase alphabet strings s, and t return whether you can create a 1-to-1 mapping for each letter in s to another letter (could be the same letter) such that s could be mapped to t, with the ordering of characters preserved.

Constraints

n ≤ 100,000 where n is the length of s
m ≤ 100,000 where n is the length of t
Example 1
Input
s = "coco"
t = "kaka"
Output
true


______________________________________________________________________________________________

*/
bool solve(string s, string t) {
    if(s.size()!=t.size()){
        return false;
    }
    vector<vector <string>> codes;
    int flag=0;
    for(int i=0;i<s.size();i++){
        flag=0;
        for(int j=0;j<codes.size()&& flag==0;j++){
            if(s[i]==(codes[j][0])[0]){
                if(t[i]!=(codes[j][1])[0]){
                    return false;
                }
                else{
                    flag=1;
                }
            }
        }
        if(flag){
            continue;
        }
        for(int j=0;j<codes.size();j++){
            if(t[i]==(codes[j][1])[0]){
                if(s[i]!=(codes[j][0])[0]){
                    return false;
                }
            }
        }
        vector<string> temp;
        string v1="", v2="";
        v1+=s[i];
        v2+=t[i];
        temp.push_back(v1);
        temp.push_back(v2);
        codes.push_back(temp);
    }
    return true;
}

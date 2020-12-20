/*
______________________________________________________________________________________________
Question From : Binary Search Platform {Array | DS | Strings }

Reverse Words
Given a string s of words delimited by spaces, reverse the order of words

Constraints

n ≤ 100,000 where n is the length of s
Example 1
Input
sentence = "hello there my friend"
Output
"friend my there hello"


______________________________________________________________________________________________

*/
string solve(string sentence) {
    int n = sentence.size();
    string ret = "";
    string temp = "";
    for (int i = n - 1; i >= 0; i--) {
        if (sentence[i] == ' ') {
            reverse(temp.begin(), temp.end());
            ret += temp;
            ret += " ";
            temp = "";
        } else {
            temp += sentence[i];
        }
    }
    reverse(temp.begin(), temp.end());
    ret += temp;
    return ret;
}

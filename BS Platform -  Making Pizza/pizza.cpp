/*
______________________________________________________________________________________________
Question From : Binary Search Platform {Array | DS }

Given a lowercase alphabet string s, return how many "pizza" strings you can create using the characters in s. You can use the characters in s in any order, but you can only use each character once.

Example 1
Input
s = "pihzzatpizza"
Output
2

______________________________________________________________________________________________

*/
int solve(string s) {
    int* h = new int[26];
    for (int i = 0; i < 26; i++) {
        h[i] = 0;
    }
    for (int i = 0; i < s.size(); i++) {
        h[s[i] - 'a']++;
    }

    string p = "pia";
    int l = s.size() + 1;
    for (int i = 0; i < p.size(); i++) {
        if (l > h[p[i] - 'a']) {
            l = h[p[i] - 'a'];
        }
    }
    if (l) {
        l = min(h['z' - 'a'] / 2, l);
    }
    return l;
}

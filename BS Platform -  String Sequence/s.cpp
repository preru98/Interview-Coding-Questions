/*
______________________________________________________________________________________________
Question From : Binary Search Platform {Recursion | String }

String Sequence
Given strings s0, s1 and a positive integer n, return the nth term of the sequence A where:

A[0] = s0
A[1] = s1
A[n] = A[n - 1] + A[n - 2] if n is even, otherwise A[n] = A[n - 2] + A[n - 1].
Example 1
Input
s0 = "a"
s1 = "b"
n = 4
Output
"bbaba"


______________________________________________________________________________________________

*/

string solve(string s0, string s1, int n) {
    if (n == 0) {
        return s0;
    }
    if (n == 1) {
        return s1;
    }
    if (n % 2 == 0) {
        return (solve(s0, s1, n - 1) + solve(s0, s1, n - 2));
    }

    return (solve(s0, s1, n - 2) + solve(s0, s1, n - 1));
}


/*
______________________________________________________________________________________________
Question From : Binary Search Platform { Mathematics }

Ugly Number
Given an integer n, return whether its prime factors only include 2, 3 or 5.

Constraints

n ≤ 2**31 -1

______________________________________________________________________________________________

*/

  bool solve(int n) {
    while (n % 2 == 0) {
        n /= 2;
    }
    while (n % 3 == 0 ) {
        n /= 3;
    }
    while (n % 5 == 0 ) {
        n /= 5;
    }
    if (n == 1) {
        return true;
    }
    return false;
}


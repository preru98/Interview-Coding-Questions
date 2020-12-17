/*
______________________________________________________________________________________________
Question From : Binary Search Platform { Mathematics }

The Connell sequence is a sequence made by:

Taking the first odd integer: 1
Taking the next two even integers 2, 4
Taking the next three odd integers 5, 7, 9
Taking the next four even integers 10, 12, 14, 16
And so on.
Given an integer n, return the sequence.
______________________________________________________________________________________________

*/

  int solve(int n) {
    int outer = 1, o = 1, e = 2, term, j, t = -1;
    while (t <= n) {
        if (outer % 2 != 0) { 
            j = outer;
            while (j && t < n) {
                term = o;
                e=term+1;
                cout << term << " | ";
                o += 2;
                t++;
                j--;
            }
            if (t == n) {
                return term;
            }
            outer++;

        } else {
            j = outer;
            while (j && t < n) {
                term = e;
                cout << term << " | ";
                o=term+1;
                e += 2;
                t++;
                j--;
            }
            if (t == n) {
                return term;
            }
            outer++;
        }
    }
    return term;
}


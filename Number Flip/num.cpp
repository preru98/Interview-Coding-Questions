/*
_________________________________________________________________________________________________
You are given an integer n consisting of digits 1, 2, and 3 and you can flip one digit to a 3. 
Return the maximum number you can make.
Function Solution
_________________________________________________________________________________________________
*/

int solve(int n) {
    vector<int> num;
    while (n) {
        num.push_back(n % 10);
        n /= 10;
    }
    for (int i = num.size() - 1; i >= 0; i--) {
        if (num[i] < 3) {
            num[i] = 3;
            break;
        }
    }
    int number = 0;
    for (int i = 0; i < num.size(); i++) {
        number += num[i] * pow(10, i);
    }
    return number;
}


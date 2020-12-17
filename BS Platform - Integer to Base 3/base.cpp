/*
______________________________________________________________________________________________
Question From : Binary Search Platform { Mathematics }

Integer to Base 3
Given an integer n, return its base 3 representation as a string.

Example 1
Input
n = 5
Output
"12"

______________________________________________________________________________________________

*/
string solve(int n) {
    int flag=0;
    string final="";
    if(n<0){
        flag=1;
    }
    n=abs(n);
    while(n>3){
        final+= to_string(n%3);
        n=n/3;
    }
    final+= to_string(n);
    if(flag){
    final+='-';
    reverse(final.begin(), final.end());   
    }
    else{
    reverse(final.begin(), final.end()); 
    }    
    return final;
}

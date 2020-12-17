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
    if(n<0){
        flag=1;
        n=-n;
    }
    int rem;
    string final="";
    while(n>3){
        rem = n%3;
        cout<<rem;
        string s="";
        s+= to_string(rem);
        cout<<"s->"<<s;
        cout<<final;
        s+=final;
        final=s;
        n=n/3;
    }
    cout<<endl;
    string s="";
    s+=to_string(n);
    s+=final;
    if(flag){
        string n="-";
        n+=s;
        return n;
    }
    return s;
}

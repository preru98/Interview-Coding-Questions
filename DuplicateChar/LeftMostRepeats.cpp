//O(n) Time Complexity
#include<iostream>
#include<string>

using namespace std;

string test(string);


int main(){
    string first= "gets&&pols";

    cout<<test(first);
    return 0;
}

string test(string a){
    int hash[256] = {0};   //all zeroes
    for(int i=0; i<a.size(); i++){
        if( hash[int(a[i])] >0){
            return a.substr(i, 1);
        }
        hash[int(a[i])]++;
    }
    return "-1";
}

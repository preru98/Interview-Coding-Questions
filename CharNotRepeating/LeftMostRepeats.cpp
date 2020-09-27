//O(n) Time Complexity
#include<iostream>
#include<string>

using namespace std;

string test(string);

int main(){
    string first= "geeksforgeeks";

    cout<<test(first);
    return 0;
}

string test(string a){
    int hash[256] = {0};
    for(int i=0; i<a.size(); i++){
        hash[int(a[i])]++;
    }
    for(int i=0; i<a.size(); i++){
        if(hash[int(a[i])]==1){
            return a.substr(i, 1);
        }
    }
    return "-1";
}

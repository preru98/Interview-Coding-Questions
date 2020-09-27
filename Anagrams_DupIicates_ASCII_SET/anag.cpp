//O(n) Time Complexity
#include<iostream>
#include<string>

using namespace std;

bool test(string , string);


int main(){
    string first= "Abc09$$";
    string second = "Abc90$$";

    cout<<test(first, second);
    return 0;
}

bool test(string a, string b){
    if(a.size() == b.size()){
        int* hash = new int[256];   //all zeroes
        
        for(int i=0; i<a.size(); i++){
            hash[int(a[i])]++;
        }
        
        for(int i=0; i<b.size(); i++){
            hash[int(b[i])]--;
            if(hash[int(b[i])]<0){
                return false;
            }
        }
        return true;
    }
    return false;
}
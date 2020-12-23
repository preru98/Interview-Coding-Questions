#include<iostream>

using namespace std;

int deg(int);

int main(){
    int n=6;
    cout<<deg(n);
    return 0;
}

int deg(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return  (n-1) * (deg(n-2) + deg(n-1));
}

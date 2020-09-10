#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

long long to_decimal(string);

int main(){
    string binary;
    getline(cin, binary);
    cout<<to_decimal(binary); 
}

long long to_decimal(string binary){
    long long sum=0;
    for(int i=7, j=0; i>=0;i--,j++){
        if(binary[i]=='1')
        sum+=pow(2,j);
    }
    return sum;
}
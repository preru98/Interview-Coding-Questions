#include<iostream>
using namespace std;

int find_greatest_common_divisor(int,int);

int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<find_greatest_common_divisor(4,10);
    return 0;
}

int find_greatest_common_divisor(int num1,int num2){
    int limit=num1;
    if(num2<num1){
        limit=num2;
    }
    int gcd=1;
    for(int i=2;i<limit;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    return gcd;
}
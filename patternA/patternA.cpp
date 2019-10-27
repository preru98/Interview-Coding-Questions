#include<iostream>
using namespace std;

int main(){
    int num,temp;
    int k=1;

    cout<<"Enter number";
    cin>>num;

    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i==j){
                temp=k;
            }
            else if(i<j){
                temp=k+j-i;
            }
            else{
                temp=k+i-j;
            }
            cout<<temp<<" | ";
        }
        cout<<"\n";
    }
    return 0;
}
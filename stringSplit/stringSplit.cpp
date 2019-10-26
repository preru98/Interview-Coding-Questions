#include<iostream>
#include<stdio>
#include<string>

using namespace std;
int main(){
    string s,w="";int len;
    getline(cin,s);
    cout<<endl;

    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            len=w.size();
            if(len>=4 && len%2==0){
                w.resize(len+1);
                for(int k=len;k>=len/2+1;k--){
                    w[k]=w[k-1];
                }
                w[len/2]=' ';
            }
            cout<<w;
            cout<<" ";
            w="";
        }
        else{
            w+=s[i];
        }
    }
    cout<<w;
    return 0;
}

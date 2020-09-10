/*
________________________________________________________________________________________________________
We need to write a function which accepts a given password and returns “ACCEPTED” or “REJECTED” based on the following rules:

    1. Passwords must consist of a mixture of lowercase letters and numerical digits only, with at least one of each.
    2. Passwords must be between 7 and 11 characters in length. 
_______________________________________________________________________________________________________________
*/
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<bits/stdc++.h> 
using namespace std;

string validate(string);

int main(){
    string password;
    getline(cin, password);
    cout<<validate(password);
}

string validate(string password){
    if(password.length()>=7 && password.length()<=11){
        string small_password=password;
        transform(password.begin(), password.end(), small_password.begin(), ::tolower); 
        if(password.compare(small_password)>=0){
            for(int i=0; i<password.length(); i++){
                if(!isalnum(password[i])){
                    return "CONTAINS SPECIAL SYMBOLS";
                }
                return "VALID";
            }           
        }
        return "CONTAINS CAPITAL LETTERS";
    }
    return "CONTAINS MORE THAN 11 OR LESS 7 LETTERS";
}

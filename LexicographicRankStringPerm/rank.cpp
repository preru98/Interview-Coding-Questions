#include<iostream>
#include<string>

using namespace std;

int find_rank_in_permutations(string);
int factorial(int);

int main(){
    string test = "BAC";
    cout<<find_rank_in_permutations(test);
    return 0; 
}

int find_rank_in_permutations(string test){
    int smaller_count=0, partial_sum=0;
    for(int i=0; i< test.size() ;i++){
        for(int j=i+1;j<test.size();j++){
            if(test[i]>test[j]){
                smaller_count++;
            }
        }
        partial_sum+=smaller_count*(factorial(test.size()-i-1));
        smaller_count=0;
    }
    return partial_sum+1;
}

int factorial(int number){
    int res=1;
    for(int i=2;i<=number;i++){
        res*=i;
    }
    return res;
}
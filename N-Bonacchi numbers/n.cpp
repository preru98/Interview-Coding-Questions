// (N=3,M=8) => [0 0 1 1 2 4 7 13]
//First n-1 digits always 0 
#include<iostream>
using namespace std;

void print_n_bonacci(int, int);
void display(int[], int);

int main(){
    int m = 10, n = 4;
    print_n_bonacci(m,n); 
    return 0;
}

void print_n_bonacci(int m, int n){
    int* series = new int[m];
    int window_sum=1,i;
    
    //first window (n-1 zeroes and 1 One )
    for(i=0;i<n-1;i++){
        series[i]=0;
    }
    series[i++]=1;

    while(i<m){
        series[i]=window_sum;
        window_sum=window_sum-series[i-n]+series[i];
        i++;
    }
    display(series, m);
}

void display(int array[],int size){
    for(int i=0;i<size;i++){    
        cout<<array[i]<<" | ";  
    }
}




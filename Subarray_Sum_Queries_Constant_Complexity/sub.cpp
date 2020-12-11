//For Each Query the time Complexity should be O(1)
//Prefix Sum
//O(N) can  be used to initially process array for furter resolving queries in O(1) 

#include<iostream>
using namespace std;

int* construct_prefix_sum_array(int, int[]);
int solve_query(int, int, int, int[], int[]);

int main(){
    int n = 4;
    int array[] = {1, 2, 1, 5, 3, 4, 3, 3, 3, 3};
    int size = sizeof(array)/sizeof(array[0]);
    int start = 2;
    int end = 5;
    int* sum = construct_prefix_sum_array(size, array);
    cout<<solve_query(start, end, size, array, sum); 
    return 0;
}

int* construct_prefix_sum_array(int size, int array[]){
    int* sum = new int[size];

    sum[0]=array[0];
    for(int i=1;i<size;i++){
        sum[i]=sum[i-1]+array[i];
    }
    return sum;
}

int solve_query(int start, int end, int size, int array[], int sum[]){
    if(start==end){
        return array[start];
    }

    if(start){
        return sum[end]-sum[start-1];
    }

    else{
        return sum[end];
    }
}




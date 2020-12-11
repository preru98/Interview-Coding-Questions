//For Each Query the time Complexity should be O(1)
//Prefix Sum
//O(N) can  be used to initially process array for furter resolving queries in O(1) 

#include<iostream>
using namespace std;

int* construct_prefix_sum_array(int, int[]);
int solve_query(int, int, int, int[], int[]);
int check_eqp(int, int[], int[]);

int main(){
    int n = 4;
    int array[] = {-2, -2, 4};
    int size = sizeof(array)/sizeof(array[0]);
    int* sum = construct_prefix_sum_array(size, array);
    cout<<check_eqp(size, array, sum); 
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

int check_eqp(int size, int array[], int sum[]){

    if(sum[size-2]==0 || (sum[size-1]-array[0])==0){
        return 1;
    }

    int left_sum, right_sum;

    for(int i=1;i<size;i++){
        
        left_sum=solve_query(0, i-1, size, array, sum);
        right_sum=solve_query(i+1, size-1, size, array, sum);

        if(left_sum == right_sum){
            return 1;
        }
    }
    return 0;
}



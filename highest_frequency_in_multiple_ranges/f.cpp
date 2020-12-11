//Highest occuring Element in combined ranges
//Max range of l[i] && r[i]:15
#include<iostream>
using namespace std;

int highest_frequency(int, int[], int[]);


int main(){
    int n = 4;
    int l_range[] = {1, 1, 1};
    int r_range[] = {3, 5, 7};
    int size = sizeof(l_range)/sizeof(l_range[0]);
    cout<<highest_frequency(size, l_range, r_range); 
    return 0;
}


int highest_frequency(int size, int l_range[], int r_range[]){
    int* array = new int[16]; 
    for(int i=0;i<size;i++){
        array[l_range[i]]++;
        array[r_range[i]+1]--;
    }
    int max = array[0], index=0;
    for(int i=1;i<16;i++){
        array[i]+=array[i-1];
        if(max<array[i]){
            max=array[i];
            index=i;
        }
    }
    return max;
}



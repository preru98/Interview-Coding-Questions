#include<iostream>
using namespace std;

int trapped_water(int[], int);
void display(int[], int);

int main(){
    int rooftops[] = {3, 0, 1, 2, 5, 7,0};
    int size = sizeof(rooftops)/sizeof(rooftops[0]);
    display(rooftops, size);

    cout<<trapped_water(rooftops, size)<<" Units.";
    return 0;
}

int trapped_water(int rooftops[], int size){
    int* right_largest = new int[size];
    int* left_largest = new int[size];

    //for max_right
    int max_r=0;
    for(int i=size-1;i>=0;i--){
        if(max_r<rooftops[i]){
            right_largest[i]=max_r;
            max_r=rooftops[i];
        }
        else{
            right_largest[i]=max_r;
        }
    }
    display(right_largest, size);

    int max_l=0;
    for(int i=0;i<size;i++){
        if(max_l<rooftops[i]){
            left_largest[i]=max_l;
            max_l=rooftops[i];
        }
        else{
            left_largest[i]=max_l;
        }
    }
    display(left_largest, size);
    
    int collect = 0;
    for(int i=0; i<size; i++){
        if(!(rooftops[i]>left_largest[i] || rooftops[i]>right_largest[i])){
            collect += min(left_largest[i], right_largest[i]) -rooftops[i]; 
        }
    }
    return collect;
}

void display(int array[], int size){
    cout<<endl;
    for (int i = 0; i < size; i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}
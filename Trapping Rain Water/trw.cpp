#include<iostream>
using namespace std;

int trapped_water(int[], int);

int main(){
    int rooftops[] = {3, 0, 1, 2, 5};
    int size = sizeof(rooftops)/sizeof(rooftops[0]);

    cout<<trapped_water(rooftops, size)<<" Units.";
    return 0;
}

int trapped_water(int rooftops[], int size){
    int* right_largest = new int[size];
    int* left_largest = new int[size];

    for(int i=0;i<size;i++){
        if()
    }

}
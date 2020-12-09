#include<iostream>
using namespace std;

int profit(int [],int);

int main(){
    int array[] = {1, 5, 3, 8, 12 };
    int size = sizeof(array)/sizeof(array[0]);
    cout<<profit(array, size);
    return 0;
}

int profit(int array[], int size){
    if(size<2){
        return 0;
    }
    else{
        int collection=0, min, max, min_available=0, max_available=0;
        if(array[1]>array[0]){
            min=array[0];
            cout<<"min : "<<min<<" |\n";
            min_available=1;    //purchase made
        }
        for(int i=1;i<size-1;i++){
            cout<<"Value of I : "<<i<<"\n";
            if(min_available){    //finding maxima to sell
                if(array[i]>array[i-1] && array[i]>array[i+1]){   //maxima found
                    max=array[i];
                    cout<<"max : "<<max<<" | \n";
                    collection+=max-min;
                    cout<<"collection : "<<collection<<" | \n";
                    min_available=0;  //sold. Now available for purchases
                }
            }
            else{  //stocks not purchased yes
                if(array[i]<array[i-1] && array[i]<array[i+1]){   //maxima found
                    min=array[i];
                    cout<<"min : "<<min<<" | \n";
                    min_available=1;  //sold. Now available for purchases
                } 
            }
        }
        if(min_available){
            if(array[size-1]>array[size-2]){
                max=array[size-1];
                cout<<"max : "<<max<<" | \n";
                collection+=max-min;
                cout<<"collection : "<<collection<<" | \n";
                min_available=0;  //sold. Now available for purchases
            }
        }
        return collection;
    }
}
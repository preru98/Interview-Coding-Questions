#include<iostream>
#include <iomanip> 
#include<vector>
using namespace std;

double maximize_loot(int,int,int[],int[]);
void insertionSort(int,int[],int[],double[]);


int main(){
    int number_of_items,knapsack_size;
    cin>>number_of_items;
    cin>>knapsack_size;
    int* item_value_array = new int[number_of_items]; 
    int* item_weight_array= new int[number_of_items];

    for(int i=0;i<number_of_items;i++){
        cout<<i;
        cin>>item_value_array[i];
        cin>>item_weight_array[i];
    }

     for(int i=0;i<number_of_items;i++){
        cout<<item_value_array[i]<<" | ";
        cout<<item_weight_array[i];
        cout<<endl;
    }

    cout<<fixed<<setprecision(4)<<maximize_loot(number_of_items,knapsack_size,item_value_array,item_weight_array);
    return 0;
}
    
double maximize_loot(int number_of_items,int knapsack_size,int item_value_array[], int item_weight_array[]){
    double* item_value_per_unit_array= new double[number_of_items];
    double max=0;int weight_used;
    for(int i=0;i<number_of_items;i++){
        item_value_per_unit_array[i]=(double)item_value_array[i]/item_weight_array[i];
    }
    // for(int i=0;i<number_of_items;i++){
    //     cout<<item_value_per_unit_array[i]<< " | ";
    // }

    insertionSort(number_of_items,item_value_array,item_weight_array,item_value_per_unit_array);


    // for(int i=0;i<number_of_items;i++){
    //     cout<<item_value_per_unit_array[i]<< " | ";
    //     cout<<item_value_array[i]<< " | ";
    //     cout<<item_weight_array[i]<<endl;
    // }

    for(int i=0;i<number_of_items && knapsack_size>0;i++){
        if(knapsack_size<=item_weight_array[i]){
            weight_used=knapsack_size;
            max+=item_value_per_unit_array[i]*weight_used;
            break;
        }
        // (knapsack_size>item_weight_array[i]){
            weight_used=item_weight_array[i];
            max+=item_value_per_unit_array[i]*weight_used;
            knapsack_size-=weight_used;
        // }
    }

    return max;
}

void insertionSort(int size,int item_value_array[],int item_weight_array[],double item_value_per_unit_array[]){
      double temp;
      int temp1,temp2,j;
      for(int i=1;i<size;i++){
        
        temp=item_value_per_unit_array[i];
        temp1=item_value_array[i];
        temp2=item_weight_array[i];
        
        for(j=i-1;j>=0 && item_value_per_unit_array[j]<temp;j--){
           
           item_value_per_unit_array[j+1]=item_value_per_unit_array[j];
           item_value_array[j+1]=item_value_array[j];
           item_weight_array[j+1]=item_weight_array[j];
        
        }
        
        item_value_per_unit_array[j+1]=temp;
        item_value_array[j+1]=temp1;
        item_weight_array[j+1]=temp2;

    }
}

#include<iostream>
#include<vector>

using namespace std;

int minimal_refills(int,int,vector<int>);

int main(){
    int distance,fuel,number_of_stations;
    cin>>distance>>fuel>>number_of_stations;
    vector<int>stations(number_of_stations+1);

    for(int i=1;i<stations.size();i++){
        cin>>stations[i];
    }

    // for(int i=0;i<stations.size();i++){
    //     cout<<stations[i]<<" | ";
    // }

    int min=minimal_refills(distance,fuel,stations);
    cout<<min;
    return 0;
}

int minimal_refills(int distance,int fuel,vector<int>stations){
    stations.push_back(distance);
    // for(int i=0;i<stations.size();i++){
    //     cout<<stations[i]<<" | ";
    // }
    int current_refill=0,number_of_refills=0;
    
    while(current_refill<=stations.size()-2){
        int last_refill=current_refill;
        while(current_refill<=stations.size()-2 &&stations[current_refill+1]-stations[last_refill]<=fuel){
            current_refill++;
        }
        if(current_refill==last_refill){
            return -1;
        }
        if(current_refill<=stations.size()-2){
            number_of_refills++;
            cout<<"current_refill : "<<stations[current_refill]<<"\n";
        }
    }
    return number_of_refills;
}
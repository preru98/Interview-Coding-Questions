#include<iostream>
#include<vector>

using namespace std;

int main(){
    int size,temp;
    cout<<"Enter size";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"printing vector";
    cout<<endl;
    for(int k :vec){
        cout<<k<<" | ";
    }

    for(int i=0;i<size;i++){
        if(vec[i]<0){
            temp=vec[i];
            for(int k=i+1;k<size;k++){
                if(vec[k]>0){
                    vec[i]=vec[k];
                    vec[k]=temp;
                    break;
                }
            }
        }
    }
     cout<<"Printing Converted Array\n";
     for(int k :vec){
        cout<<k<<" | ";
     }
    
    return 0;

}
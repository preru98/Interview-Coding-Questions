#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(){
    vector <int> vec;
    vector <int> sub;
    int ch=1,temp,count=0,n;
    cout<<"Enter N";
    cin>>n;
    while(ch==1){
        cin>>temp;
        vec.push_back(temp);
        cout<<"Continue entering?";
        cin>>ch;
    }
    cout<<endl<<vec.size()<<endl;

    for(int j :vec){
        cout<<j<<"| ";
    }
    cout<<endl;

    vector<
    for(int k=0;k<vec.size();k++){
        sub.push_back(vec[k]);
        for(int j=k+1;j<vec.size();j++){
            if((accumulate(sub.begin(),sub.end(),0)+vec[j])>n);//Do nothing
            else {
                sub.push_back(vec[j]);

                if(accumulate(sub.begin(),sub.end(),0)==n){
                    count++;
                    //show vector and empty it and add kth element back
                    cout<<count<<" :::  ";
                    for(int p :sub){
                        cout<<p<<"| ";
                    }
                    cout<<endl;
                    sub.clear();
                    sub.push_back(vec[k]);
                }
            }
        }
        sub.clear();
    }
    return 0;
}

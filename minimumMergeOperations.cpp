#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N,temp,ans=0;
    cout<<"Enter N";
    cin>>N;
    cout<<"Enter ele";

    vector <int> vec(N);
    // vector <int> vec2(N);

    for(int i=0;i<N;i++){             //Inputting array values
        cin>>vec[i];
    }

    //  vec2=vec;
     for(int i:vec){
        cout<<i<<" | ";
     }

    for(int i=0,j=N-1;i<=j;){
        if(vec[i]==vec[j]){
            i++;
            j--;
            
        }
        else if(vec[i]>vec[j]){
            vec[j-1]+=vec[j];
            // vec2[j-1]+=vec2[j];
            vec[j]=0;
            j--;
            ans++;
        }
        else{
            vec[i+1]+=vec[i];
            // vec2[i+1]+=vec2[i];
            vec[i]=0;
            // vec2.erase(vec2.begin()+i);
            i++;
            ans++;
           
        }

    }
    cout<<" anssewr: "<<ans;
    cout<<endl;
     for(int i:vec){
         if(i!=0)                    //Printing converted  palindrome array
        cout<<i<<" | ";
    }
    return 0;
}
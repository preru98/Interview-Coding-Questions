#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N,temp,ans=0;
    cout<<"Enter N";
    cin>>N;
    cout<<"Enter ele";

    vector <int> vec(N);

    for(int i=0;i<N;i++){             //Inputing array values
        cin>>vec[i];
    }

    
     for(int i:vec){                  //Printing array values
        cout<<i<<" | ";
     }

    for(int i=0,j=N-1;i<=j;){           //Loop for calculating no.of oper.
        if(vec[i]==vec[j]){             //Condition -> first and last element equal
            i++;
            j--;
            
        }
        else if(vec[i]>vec[j]){         //Condition -> first element > last
            vec[j-1]+=vec[j];
            vec[j]=0;
            j--;
            ans++;
        }
        else{
            vec[i+1]+=vec[i];            //Condition -> first element < last
            vec[i]=0;
            i++;
            ans++;
        }
    }

    cout<<endl<<"Printing converted palindromic array";
    cout<<endl;

    for(int i:vec){
         if(i!=0)                    //Printing converted  palindrome array
        cout<<i<<" | ";
    }
    
    cout<<endl<<"Result: "<<ans;
    cout<<endl;
     
    return 0;
}

// 3 4 5  -> 3 9 -> 12  :2
// 1 2 3  -> 3 3        :1
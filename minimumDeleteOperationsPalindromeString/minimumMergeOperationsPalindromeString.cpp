#include<iostream>
#include<string>
using namespace std;

int returnDelOp(string,int,int);     //Prototype is necessary if func() is implemented after its calling statement
int main(){
    string s;
    cout<<"Enter String";
    cin>>s;
    int len=s.size();
  
    int response=returnDelOp(s,0,len-1);
    cout<<"Result : "<<response<<endl;
    
    return 0;
}

int returnDelOp(string s, int i, int j){
    if(i>=j)                    //Terminating condition
        return 0;

    if(s[i]==s[j]){             //First and last element same
        return returnDelOp(s,i+1,j-1);
    }
    return 1+ min(returnDelOp(s,i+1,j),returnDelOp(s,i,j-1));   //Finding min of(removing first element(i),rem.last element(j))
                                                                //+1 to also count the no.of deletion we made in this cycle i.e 1
}

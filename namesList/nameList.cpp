/*
________________________________________________________________________________________________________
You are given two lists of names. One contains a large number of items and the other contains 5 items. You are to write a function to compare both the lists and return:
    • True, if all the names in the smaller list appear in the larger list and appear in the same order as that of the smaller list (note the same order doesn’t mean that they have to be consecutive in the larger list). 
    • False, otherwise.
Assume that the names in both lists are not repeated.
_____________________________________________________________________________________________________
*/

#include<iostream>
#include<string>
#include<algorithm>
#include<string>

using namespace std;
bool compareList(string[], string[], int, int);
int search(string, string[], int, int);

int main(){
    string long_list[]={"Prerna", "Sanjana","Kish", "Aarushi", "Vermicelli", };
    string short_list[]={"Sanjana", "Aarushi", "Kish"};
    int size_long=sizeof(long_list)/sizeof(long_list[0]);
    int size_short=sizeof(short_list)/sizeof(short_list[0]);
    cout<<compareList(long_list, short_list, size_long, size_short);
    return 0;
}

bool compareList(string long_list[], string short_list[], int size_long, int size_short){
    int index=0;
    for(int i=0;i<size_short;i++){
        index=search(short_list[i], long_list, size_long,index);
        // cout<<index<<endl;
        if(index==-1){
            return false;
        }
    }
    return true;
}

int search(string x, string long_list[], int size_long, int start_index){
    if(start_index<size_long){
        for(int i=start_index;i<size_long;i++){
            if(long_list[i].compare(x)==0){
                // cout<<"searched :"<<i<<" | ";
                return i;
            }
        }
    }
    return -1;
}


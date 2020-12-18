/*
______________________________________________________________________________________________
Question From : Binary Search Platform {Array | DS }

Word Formation
Question 316 of 906
Given a list of strings words and a string letters, return the length of longest string in words that can be made from letters in letters. If no word can be made, return 0.

Note that you can't reuse letters.

Constraints

n ≤ 10,000 where n is the length of words
m ≤ 1,000 where m is the length of letters

______________________________________________________________________________________________

*/int solve(vector<string>& words, string letters) {
    int * h = new int[26];
    
    int max=0, flag;

    for(int i=0;i<words.size();i++){
        for(int i=0;i<26;i++){
        h[i]=0;
    }
    for(int i=0;i<letters.size();i++){
        h[letters[i]-'a']++;
    }
        flag=0;
        cout<<endl;
        int size_word=words[i].size();
        for(int j=0;j<size_word;j++){
            cout<<words[i][j]<<" : ";
            if(!(h[words[i][j]-'a'])){
                flag=1;
                break;
            }  
            h[words[i][j]-'a']--;
        }
        if(flag==0){
           
            if(max<size_word){
                max=size_word;
               
            }
        }
    }
    
    return max;
}

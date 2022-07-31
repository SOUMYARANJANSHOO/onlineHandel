#include<bits/stdc++.h>
using namespace std;

int main(){
    string str ="jhshhahsfhhsdfhwecvnbavvesw";
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }
    int maxf=0;
    char maxc='a';
    for(int i=0;i<26;i++){
        if(freq[i]>maxf){
            maxf=freq[i];
            maxc=(i+'a');
        }
    }
    cout<<"THE HIGHEST NUMBER OF OCCURANCE IS OF ::"<<maxc<<" AND OUCCURED "<<maxf<<" TIMES";
    return 0;
}
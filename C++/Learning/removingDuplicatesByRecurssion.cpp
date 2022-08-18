#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(string s){

    if(s.length()==0){
        return;
    }
    // string restStr=s.substr(1);
    if(s[0]==s[1]){
        removeDuplicate(s.substr(1));
    }else{
        cout<<s[0];
        removeDuplicate(s.substr(1));
    }
}

int main(){
    
    string str ="aaaaabbbbbccddddddeeeeef";
    
    removeDuplicate(str);

    return 0;
}
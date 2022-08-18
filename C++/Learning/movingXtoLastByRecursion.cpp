#include<bits/stdc++.h>
using namespace std;

string moveToLast(string s,char x){
    
    if(s.length()==0){
        return "";
    }

    string restStr=moveToLast(s.substr(1),x);
    if(s[0]==x){
        return (restStr+s[0]);
    }else return (s[0]+restStr);
}

int main(){
    cout<<moveToLast("axxbdxcefxhix",'x');
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void permutaion(string s, string ans=""){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);

        permutaion(ros,ans+ch);
    }
}

int main(){
    permutaion("ABC");
    return 0;
}
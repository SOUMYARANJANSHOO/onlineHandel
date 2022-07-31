#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE LENGTH OF THE WORD::";
    cin>>n;
    char string[n+1];
    cout<<"ENTER THE WORD::";
    cin>>string;
    bool flag=true;
    for(int i=0;i<=n;i++){
        if(string[i] != string[n-1-i]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"::THE ENTERED WORD IS A PALLINDROME::";
    }else{
        cout<<"::THE ENTERED WORD IS NOT A PALLINDROME::";
    }

    return 0;
}